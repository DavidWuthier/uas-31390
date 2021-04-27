% Initialization
close all
clear
clc

% Trajectory generation

knots = [0 5];
order = 8;
waypoints = cell(1,2);
waypoints{1} = [0 ; 0 ; 1];
waypoints{2} = [9 ; 9 ; 1];
corridor.t = 0.5:0.5:4.5;
corridor.xm = [repmat(0, 1, 4) 8.5 repmat(8.5, 1, 4)];
corridor.xp = [repmat(9, 1, 4) 9.5 repmat(9.5, 1, 4)];
corridor.ym = [repmat(-0.5, 1, 4) -0.5 repmat(0, 1, 4)];
corridor.yp = [repmat(0.5, 1, 4) 0.5 repmat(9, 1, 4)];
corridor.zm = [repmat(0.5, 1, 9)];
corridor.zp = [repmat(1.5, 1, 9)];
make_plots = false;

poly_traj = uas_minimum_snap(knots, order, waypoints, corridor, make_plots);