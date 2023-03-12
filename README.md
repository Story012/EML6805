# EML6805
Projects for Advanced Design of Robots course

## 6-DoF Arm Ball Picker:

Install [Universal Robots driver](https://github.com/UniversalRobots/Universal_Robots_ROS2_Driver):
`sudo apt-get install ros-${ROS_DISTRO}-ur-robot-driver`

Source ROS2:
`Source /opt/ros/humble/setup.bash`

Run: 
`ros2 run ur_robot_driver start_ursim.sh -m ur5e`
In this case a UR5e arm is specified. This sets up a simulated arm, without needing the actual robot. The controller can be interacted with by copying the link in the terminal after executing the previous command; http://192.168.56.101:6080/vnc.html

> Controller/Robot Arm setup:  
  1. Once the VNC window is open, type any password and select continue.  
  2. Proceed to click the red power button on the bottom left.  
  3. Select "On" and then "Start".  
  4. Select exit > installation > payload. Set mass = 0.001 (for some reason it can't be zero...)  
  5. Select "Move" (This is where you can manipulate the arm manually). If there is a safety window popping up shortly afterwards, hit revert changes.  

To view the arm in RVIZ:
`ros2 launch ur_robot_driver ur_control.launch.py ur_type:=ur5e robot_ip:=192.168.56.101 launch_rviz:=true`   
Move the arm in the controller (the website), and watch the response on RVIZ! 

(Optional) [Docker image for a simulated controller](https://hub.docker.com/r/universalrobots/ursim_e-series) 

Get Universal Robots urdf/sdf from their [description package](https://github.com/UniversalRobots/Universal_Robots_ROS2_Description)
