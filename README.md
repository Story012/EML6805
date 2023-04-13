# EML6805
Projects for Advanced Design of Robos course

## 6-DoF Arm Ball Picker:

### Just visualizing and controlling the robot, no gazebo:
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

### Robot arm control in Gazebo using ROS2 (Humble)
Get Universal Robots urdf from their [description package](https://github.com/UniversalRobots/Universal_Robots_ROS2_Description)

<<<<<<< HEAD
=======
Add this folder to your src folder!

>>>>>>> f623d38ad45a1af2651e746bd4a038c576296e10
To create URDF, navigate to the URDF file of the description package:  
`xacro ur.urdf.xacro name:=ur5e > ur5e.urdf`  
This will create a UR5e urdf, and can be changed by specifying which ever robot is desired. The xacro serves to simplify the process to a single file for any UR model.

Copy the entire package to ~/.gazebo/models so that gazebo shows the model!  
```
cp -r Universal_Robots_ROS2_Description ~/.gazebo/models
cd ~/.gazebo/models
mv Universal_Robots_ROS2_Description ur_description
```  
<<<<<<< HEAD


Package breakdown:

ur_description
Universal_Robots_ROS2_Driver
Universal_Robots_ROS2_Gazebo_Simulation
=======
>>>>>>> f623d38ad45a1af2651e746bd4a038c576296e10
