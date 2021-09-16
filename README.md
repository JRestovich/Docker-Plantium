# Mandatory command for all options:
## Download docker 
	- https://www.docker.com/products/docker-desktop
	
## Download docker-compose v1.27.0+ or latest 
	- https://docs.docker.com/compose/install/

## Download nvidia 2 and carla docker 0.9.11 (version 0.9.12 has some troubleto run) in this order:
	- https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/install-guide.html#installation-guide
	- https://carla.readthedocs.io/en/latest/build_docker/

## Download VScode and install the following extensions:
	- Remote-Containers
	- Docker

## Run the following command in your host PC: "xhost +local:docker"


# For running only ROS2-Rviz2 docker:

__OPTION 1:__

	docker run -it --rm --gpus all -e DISPLAY=$DISPLAY -e QT_X11_NO_MITSHM=1 -e XAUTHORITY:$XAUTH -v /tmp/.X11-unix:/tmp/.X11-unix:rw althack/ros2:foxy-gazebo-nvidia /bin/bash

	once inside the container type:
	source /opt/ros/foxy/setup.bash
	rviz2

__OPTION 2 (this option automaticaly open rviz):__

	docker run -it --rm --gpus all -e DISPLAY=$DISPLAY -e QT_X11_NO_MITSHM=1 -e XAUTHORITY:$XAUTH -v /tmp/.X11-unix:/tmp/.X11-unix:rw althack/ros2:foxy-gazebo-nvidia /bin/bash -c "source /opt/ros/foxy/setup.bash && rviz2 "

For running CARLA 0.9.11 simulator, ROS-CARLA bridge and ROS-Rviz2 containers you have to run docker compose:

__OPTION 1:__

	0) Run the following command in your host PC: "xhost +local:docker"
	1) Open a terminal in the folder where you have locate the docker-compose.yml file.
	2) Write "docker-compose up" or "docker-compose up -d" if you want to run it in dettached mode.

__OPTION 2 (prefered):__

	0) Run the following command in your host PC: "xhost +local:docker"
	1) Open VScode.
	2) In the top bar go to file>open folder>"choose you working folder".
	3) Press F1 and look for Remote-Containers: Reopen in Container.
	4) All the containers will be start and the ROS-Rviz2 will be open in VScode terminal. Also, in the left side of your screen the file system tree of the container will be shown.
	5) Work as you are in you local machine. The monuted volume works as a share folder, so all the changes you make in the container will persist the next time you open the container.
	6) The workdirectory where you have to put all yor packages and code is ros_WS.
	7)Once you are into the containers follow the steps given in steps.txt in ros_WS folder.
	
## Observations:

	- In the project there are 2 hiden folder that contains configuration files. The .devcontainer have the configuration files for running the container while the .vscode folder contains configuration for ROS2 development.

	

For more dettails of the configuration of VScode environment you can look at Allison Thackston blog: 
https://www.allisonthackston.com/articles/docker-development.html


# After you have done all the previos steps you must install AutoeareAuto and Carla-Ros bridge froim inside the container:
## (you can also see them inside the container in /ros_WS/dteps.txt)

## For installingand building AuwareAuto you have to follow this steps:
	rosdep update
	cd /home/AutowareAuto
	git clone https://github.com/mvalentin123/autoware_auto.git .
	git checkout radar_transform 
	vcs import < autoware.auto.$ROS_DISTRO.repos
	export ROS_VERSION=2
	rosdep install -y -i --from-paths src
	export COLCON_DEFAULTS_FILE=/path/to/AutowareAuto/tools/ade_image/colcon-defaults.yaml
	cd AutowareAuto
	colcon build

## For installing carla-ros bridge you have to follow this steps:
	cd /home/carla-ros-bridge
	git clone --recurse-submodules https://github.com/carla-simulator/ros-bridge.git src/ros-bridge
	git checkout b836457080078f647d4a9d87330862a468d4c171
	source /opt/ros/foxy/setup.bash
	rosdep update
	rosdep install --from-paths src --ignore-src -r
	colcon build
    
## For running the bridge:
__Export python path to be able to use carla PythonAPI:__
	export PYTHONPATH=$PYTHONPATH:/home/PythonAPI/carla/dist/carla-0.9.11-py3.7-linux-x86_64.egg:/home/PythonAPI/carla_ros_bridge

__Source ros workspace:__
	if you have not priously source ros
		source /home/carla-ros-bridge/install/setup.bash 
	if you have priously source ros
		source /home/carla-ros-bridge/install/localsetup.bash


## Use one of the following commands to run ros-carla bridge:
__Bridge without ego vehicle__
- ros2 launch carla_ros_bridge carla_ros_bridge.launch.py - host:=carlita

**Bridge with ego vehicle (not stable)**
- ros2 launch carla_ros_bridge carla_ros_bridge_with_example_ego_vehicle.launch.py host:=carlita

Open a new terminal and start writting you new ros2 nodes
    
    
    
    
    
   
