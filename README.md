# MATLAB/ROS package for AUT's TIE fighter drone

Video tutorial with MATLAB R2020b on Windows 10 and Ubuntu 18.04 in Virtual Box.

[![Video tutorial](https://img.youtube.com/vi/eniml9R3rGA/0.jpg)](https://youtu.be/eniml9R3rGA)


## Installation

### MATLAB on Windows/MacOS/Ubuntu 20.04 (or 18.04)

  * Install Python 2.7 (https://www.python.org/downloads/)
  * Install MATLAB (version >= R2020b) with the following toolboxes,
    or if already done, add the ones missing with the add-on manager:
    - MATLAB Coder
    - MATLAB Compiler
    - MATLAB Compiler SDK
    - MATLAB Support for MinGW-w64 C/C++ Compiler (example for Windows)
    - Stateflow
    - Simulink
    - Simulink Compiler
    - Simulink Coder
    - Simulink Code Inspector
    - Simulink Check
    - Simulink 3D Animation
    - Simscape
    - Simscape Multibody
    - ROS Toolbox
    - Robotics System Toolbox
  * Install git:
    * On Windows: https://git-scm.com/download/win
    * On MacOS: https://git-scm.com/download/mac
    * On Ubuntu: open a terminal and type `sudo apt install git`
  * Clone repository:
    * Open a terminal (or on Windows, open Git Bash) and type:
    ````
    git clone https://gitlab.gbar.dtu.dk/DTU-AUT/dtu_tie_fighter.git`
    cd dtu_tie_fighter
    git checkout v1.0
    ````

### ROS on Ubuntu 20.04 (or 18.04)

  * Install ROS (http://wiki.ros.org/ROS/Installation)
  * Fix Gazebo's shutdown time:
    * `sudo nano /opt/ros/noetic/lib/python2.7/dis-packages/roslaunch/nodeprocess.py`
    * find `_TIMEOUT_SIGINT`
    * replace 15.0 by 3.0
  * Install dependencies and create a workspace (on Ubuntu 18.04, replace "noetic" by "melodic" and "python3" by "python"):
  ```
  sudo apt install python3-catkin-tools ros-noetic-gazebo-ros-pkgs ros-noetic-image-transport-plugins -y
  mkdir -p my_project_ws/src
  cd my_project
  catkin init
  catkin config --extend /opt/ros/noetic
  cd src
  git clone https://gitlab.gbar.dtu.dk/DTU-AUT/dtu_tie_fighter.git
  catkin build
  ```
  * Source `setup.bash` in `.bashrc`:
  ```
  echo 'source ~/my_project_ws/devel/setup.bash' >> ~/.bashrc
  ```
  * Restart terminal

## Usage

### MATLAB

  * Start roscore in command prompt: type `rosinit`
  * Open and run `drone_simulation.slx`

### ROS

  * In a first terminal: `roslaunch dtu_tie_fighter tie_fighter.launch`
  * In another terminal: `roslaunch dtu_tie_fighter rviz.launch`

## Test

### MATLAB

In the current state, MATLAB just needs a ROS network to run,
and this network can be started with `rosinit`.

### Gazebo

The following commands can substitute MATLAB by looping over a recording:
```
roscd dtu_tie_fighter/MATLAB
rosbag play states.bag -l
```
