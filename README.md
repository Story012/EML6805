# EML6805
Projects for Advanced Design of Robos course

## 6-DoF Arm Ball Picker:

### Install UR packages:
`sudo apt-get install ros-${ROS_DISTRO}-ur-robot-driver`  
`sudo apt-get install ros-${ROS_DISTRO}-ur-description`

If this repo was not cloned, git this package:
[Universal_Robots_ROS2_Gazebo_Simulation](https://github.com/UniversalRobots/Universal_Robots_ROS2_Gazebo_Simulation.git)


Source ROS2:
`Source /opt/ros/humble/setup.bash`
 
In workspace:
```
colcon build
source install/setup.bash
ros2 launch ur_simulation_gazebo ur_sim_moveit.launch.py
```


# Package breakdown:

ur_description
Universal_Robots_ROS2_Driver
Universal_Robots_ROS2_Gazebo_Simulation
