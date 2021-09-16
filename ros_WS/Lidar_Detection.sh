# export ROS_DOMAIN_ID=42
source /opt/ros/foxy/setup.bash
source /home/AutowareAuto/install/local_setup.bash
source /home/ros_WS/perception_ws/install/local_setup.bash

ros2 launch lidar_detection lidar_tracks_carla.launch.py
