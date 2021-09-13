Mandatory command for all options:
	Download docker 
		- https://www.docker.com/products/docker-desktop
	
	Download docker-compose v1.27.0+ or latest 
		- https://docs.docker.com/compose/install/

	Download nvidia 2 and carla docker 0.9.11 (version 0.9.12 has some troubleto run) in this order:
		- https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/install-guide.html#installation-guide
		- https://carla.readthedocs.io/en/latest/build_docker/
  
	Download VScode and install the following extensions:
		- Remote-Containers
		- Docker

	Run the following command in your host PC: "xhost +local:docker"

For running only ROS2-Rviz2 docker:
OPTION 1:
	docker run -it --rm --gpus all -e DISPLAY=$DISPLAY -e QT_X11_NO_MITSHM=1 -e XAUTHORITY:$XAUTH -v /tmp/.X11-unix:/tmp/.X11-unix:rw althack/ros2:foxy-gazebo-nvidia /bin/bash
	once inside the container type:
	source /opt/ros/foxy/setup.bash
	rviz2
OPTION 2:
this option automaticaly open rviz
	docker run -it --rm --gpus all -e DISPLAY=$DISPLAY -e QT_X11_NO_MITSHM=1 -e XAUTHORITY:$XAUTH -v /tmp/.X11-unix:/tmp/.X11-unix:rw althack/ros2:foxy-gazebo-nvidia /bin/bash -c "source /opt/ros/foxy/setup.bash && rviz2 "

For running CARLA 0.9.11 simulator, ROS-CARLA bridge and ROS-Rviz2 containers you have to run docker compose:
OPTION 1:
	0) Run the following command in your host PC: "xhost +local:docker"
	1) Open a terminal in the folder where you have locate the docker-compose.yml file.
	2) Write "docker-compose up" or "docker-compose up -d" if you want to run it in dettached mode.
OPTION 2 (prefered):
	0) Run the following command in your host PC: "xhost +local:docker"
	1) Open VScode.
	2) In the top bar go to file>open folder>"choose you working folder".
	3) Press F1 and look for Remote-Containers: Reopen in Container.
	4) All the containers will be start and the ROS-Rviz2 will be open in VScode terminal. Also, in the left side of your screen the file system tree of the container will be shown.
	5) Work as you are in you local machine. The monuted volume works as a share folder, so all the changes you make in the container will persist the next time you open the container.
	6) The workdirectory where you have to put all yor packages and code is ros_WS.
	
Observations:
	- In the project there are 2 hiden folder that contains configuration files. The .devcontainer have the configuration files for running the container while the .vscode folder contains configuration for ROS2 development.
	

For more dettails of the configuration of VScode environment you can look at Allison Thackston blog: 
https://www.allisonthackston.com/articles/docker-development.html





    
    
    
    
    
    
   
