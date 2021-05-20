
% This file contains parameters and calculations needed for running
% MatLab with rotorS ROS package for interfacing with a position controlled
% drone

%%
clc;
close all;
clear all;
%%

% Define constants
FIXED_STEP_SIZE =   0.01;
POS_SUB_DT =        0.01;
ATTI_SUB_DT =       0.01;
IMU_SUB_DT =        0.01;
ODOMETRY_SUB_DT =   0.01;
GAZEBO_SYNC_DT =    0.01;
RAD2DEG =           180/pi;
DEG2RAD =           pi/180;
THRUST_OFFSET =     15;

%%

maze_1;
start = [0, 0];
end_ = [3,5];

fig_num = 1;

plot_map(map, fig_num)
plot_start_stop(start, end_, fig_num)
route = astar_2d(map, start+1,end_+1)
plot_route(route, fig_num)