#!/bin/bash
colcon build --packages-select ball_picker &&
source install/setup.zsh &&
ros2 run ball_picker tracker 