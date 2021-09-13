export PYTHONPATH=$PYTHONPATH:/home/PythonAPI11/carla/dist/carla-0.9.11-py3.7-linux-x86_64.egg:/home/PythonAPI11/carla
#source /opt/ros/foxy/setup.bash 
source /home/carla-ros-bridge/install/setup.bash 

sleep  120

#OPC1: comunicacion usando la red de docker
#ros2 launch carla_ros_bridge carla_ros_bridge.launch.py host:=carlita

#OPC2: con un autito demo
ros2 launch carla_ros_bridge carla_ros_bridge_with_example_ego_vehicle.launch.py host:=carlita

