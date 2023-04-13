#include <iostream>
#include <opencv2/opencv.hpp>
#include <cmath>
#include <string>
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <thread>

//ROS Publisher and message type ____________________________
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/point.hpp"
//___________________________________________________________


#define DEFAULT_CAMERA 0
#define KEY_ESC 27

cv::Mat Camera_Matrix = (cv::Mat1d(3, 3) << 1874.78176,0,969.74004,0,1922.61106,647.01136,0,0,1);        // From calibration_data.xml
cv::Mat Distortion_Coefficients = (cv::Mat1d(1, 5) <<-0.406362, 0.071205, 0.016847, 0.012809, 0.000000); // From calibration_data.xml

// Remember track
std::vector<cv::Point> g_track;

using namespace std::chrono_literals;



// ROS Publisher _________________________________________________________________________________________
class MinimalPublisher : public rclcpp::Node
{
  public:
    MinimalPublisher()
    : Node("minimal_publisher"), count_(0)
    {
      publisher_ = this->create_publisher<geometry_msgs::msg::Point>("ball_centroid", 10);
    }
    rclcpp::Publisher<geometry_msgs::msg::Point>::SharedPtr publisher(void) {return publisher_;};
  private:
    rclcpp::Publisher<geometry_msgs::msg::Point>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    size_t count_;
};

//_________________________________________________________________________________________________________


void info(void) {
	std::cout << "EML 4840 Robot Design" << std::endl
			  << "Florida International University" << std::endl
			  << "Department of Mechanical and Materials Engineering" << std::endl
			  << "Miami, Spring 2019" << std::endl
			  << std::endl;
}

// Windows
const std::string window = "Ball Tracker";

// Trackbars values
int h = 78, s = 100, v = 0; // color values                                              // !!!!!!


cv::Point computeCentroid(const cv::Mat &mask) {
    // find moments of the image
    cv::Moments m = cv::moments(mask, true);
    if( m.m00 <= 1e-4  )
        return cv::Point(-1, -1);
    return cv::Point(m.m10/m.m00, m.m01/m.m00);
}

cv::Mat createMask( const cv::Mat &image, 
                    const cv::Scalar &lower,
                    const cv::Scalar &upper,
                    bool clean = true ) 
{
	// Convert frame image from BGR to HSV color space
	cv::Mat hsv, kernel;
	cv::cvtColor(image, hsv, cv::COLOR_BGR2HSV);
	// Create a mask using calibrated color
    cv::Mat mask;
    cv::inRange(hsv, lower, upper, mask);
    if (clean) {
        // Clean isolated pixels
        cv::erode(mask, mask, kernel, cv::Point(-1,-1), 4);
        // Enhance surviving pixels
        cv::dilate(mask, mask, kernel, cv::Point(-1,-1), 4);
    }
        cv::imshow("masked",mask);

    return mask;
}

cv::Point traceBall(const cv::Mat &image) {
    // Define hue level of threshold color
	int hue = h; 
    int saturation = s;
    // Define lower and upper treshold color range
    // cv::Scalar lower(hue - 3, saturation, 100);                                          // !!!!!!
    // cv::Scalar upper(hue + 3, 255, 255);                                            // !!!!!!
    cv::Scalar lower (11, 126, 222);
    cv::Scalar upper (76, 221, 255);
    // Create mask
    auto mask = createMask(image, lower, upper);
    // Compute center of the mask
    return computeCentroid(mask);
}

bool shouldSave(const cv::Point &c) {
    // Is empty?
    if ( g_track.empty() )
        return true;
    // Is the same?
    if ( c.x == g_track.back().x and c.y == g_track.back().y )
        return false;
    return true;
}

std::vector<int> processImage(const cv::Mat &image) {

    // Trace the ball
    cv::Point c =  traceBall(image);
    // Clear track or remember point?
    if ( c.x < 0 or c.y < 0 ) // Outside?
        g_track.clear();
    else if ( shouldSave(c) ) // Remember?
        g_track.push_back(c);
    // Draw track over image
    cv::polylines(image, g_track, false, cv::Scalar(0,0,255), 3);
    // Display image
    cv::imshow(window, image);
    return {c.x, c.y};
}


void createWindow(void) {
	// Creating a window
    cv::namedWindow(window, cv::WINDOW_NORMAL);
    // Creating trackbars
	cv::createTrackbar(" H", window, &h, 179);
	cv::createTrackbar(" S", window, &s, 255);
}


int main(int argc, char **argv) {
	info();

    //ROS _______________________________________________________________________________
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MinimalPublisher>();
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node);
    std::thread spinThread([&executor]() {
        executor.spin();
    });
    //___________________________________________________________________________________

	// Create a capture object
	cv::VideoCapture cap;
    // Check arguments
    if (argc > 1)
        cap.open( argv[1] ); // Open filename
    else
    {
        cap.open( DEFAULT_CAMERA ); // Open camera
	// Check if any error happened
    }
	if( !cap.isOpened() ) {
		std::cout << "Oops, capture " << DEFAULT_CAMERA << " cannot be created!" << std::endl;
		return -1;
	}
	std::cout << "Press 'Esc' to quit..." << std::endl;
	createWindow();
	cv::Mat frame, image, image_distorted, image_undistorted;
    while( true ) {
		// Capture frame
		bool okay = cap.read( frame );
		// Skip if any capture error happened (or video ended)
        if( okay ){
            image = frame.clone();
            image_distorted = frame.clone();
            image_undistorted = frame.clone();
        // cv::imshow("raw image", frame);
        cv::resize(image, image, cv::Size(1920, 1080), cv::INTER_LINEAR);
        cv::resize(image_distorted, image_distorted, cv::Size(1920, 1080), cv::INTER_LINEAR);
        cv::resize(image_undistorted, image_undistorted, cv::Size(1920, 1080), cv::INTER_LINEAR);

		// // Check image resolution		
        // std::cout << image.size() << std::endl;
        // std::cout << image_distorted.size() << std::endl;
        // std::cout << image_undistorted.size() << std::endl;
        // cv::imshow("original image",image_distorted);
        cv::undistort(image, image_undistorted, Camera_Matrix, Distortion_Coefficients);
		// cv::imshow("corrected image",image_undistorted);
        std::vector<int> point = processImage(image_undistorted); // Implement our image processing
        auto message = geometry_msgs::msg::Point();
        message.x = point[0];
        message.y = point[1];
        node->publisher()->publish(message);

        }
        //std::cout << "coordinates: [x,y]  :   "<< g_track << std::endl;
		// Break loop if the key 'ESC' was pressed
		if( cv::waitKey(30) == KEY_ESC )
			break;
	}


  rclcpp::shutdown();
  return 0;
}
