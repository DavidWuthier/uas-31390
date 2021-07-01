%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% MIT License
% 
% Copyright (c) 2021 David Wuthier (dwuthier@gmail.com)
% 
% Permission is hereby granted, free of charge, to any person obtaining a copy
% of this software and associated documentation files (the "Software"), to deal
% in the Software without restriction, including without limitation the rights
% to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
% copies of the Software, and to permit persons to whom the Software is
% furnished to do so, subject to the following conditions:
% 
% The above copyright notice and this permission notice shall be included in all
% copies or substantial portions of the Software.
% 
% THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
% IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
% FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
% AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
% LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
% OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
% SOFTWARE.
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Initialization
% close all
% clear
% clc

% Trajectory generation

on_helipad = p_h(:,4) - 0.2*u_h(:,4);
in_helipad = p_h(:,4);

knots = [0 10 11 12 20 21 22 30];
waypoints = cell(1,8);
velocities = cell(1,8);
waypoints{1} = on_helipad;
waypoints{2} = p_h(:,1) - 0.5*u_h(:,1);
waypoints{3} = p_h(:,1) - 0.2*u_h(:,1);
waypoints{4} = p_h(:,1) + 0.1*u_h(:,1);
waypoints{5} = p_h(:,2) - 0.5*u_h(:,2);
waypoints{6} = p_h(:,2) - 0.2*u_h(:,2);
waypoints{7} = p_h(:,2) + 0.1*u_h(:,2);
waypoints{8} = on_helipad;
velocities{1} = [0 ; 0 ; 0];
velocities{2} = 0.3*u_h(:,1);
velocities{3} = 0.3*u_h(:,1);
velocities{4} = 0.3*u_h(:,1);
velocities{5} = 0.3*u_h(:,2);
velocities{6} = 0.3*u_h(:,2);
velocities{7} = 0.3*u_h(:,2);
velocities{8} = [0 ; 0 ; 0];
% Fix this...
order = 7;
corridors.times = [];
corridors.x_lower = [];
corridors.x_upper = [];
corridors.y_lower = [];
corridors.y_upper = [];
corridors.z_lower = [];
corridors.z_upper = [];
% ...until here
make_plots = true;

poly_traj = uas_minimum_snap(knots, order, waypoints, velocities, corridors, make_plots);
