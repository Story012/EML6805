cmake_minimum_required(VERSION 3.8)
project(ball_picker)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(OpenCV REQUIRED)

add_executable(ball_publisher src/ball_publisher.cpp)
ament_target_dependencies(ball_publisher rclcpp std_msgs)

add_executable(ball_listener src/ball_listener.cpp)
ament_target_dependencies(ball_listener rclcpp std_msgs)

add_executable(tracker src/BallTracker.cpp)
ament_target_dependencies(tracker rclcpp std_msgs geometry_msgs OpenCV)

install(TARGETS
  ball_publisher
  ball_listener
  tracker
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME})

install(DIRECTORY urdf
  DESTINATION share/${PROJECT_NAME})

 install(DIRECTORY config
   DESTINATION share/${PROJECT_NAME})

ament_package()
