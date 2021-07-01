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

knots = [0 10 20 30];
waypoints = cell(1,4);
velocities = cell(1,4);
waypoints{1} = [0 ; -2 ; 1];
waypoints{2} = [0 ; -2 ; 1];
waypoints{3} = [0 ; -2 ; 1];
waypoints{4} = [0 ; -2 ; 1];
velocities{1} = [0 ; 0 ; 0];
velocities{2} = [0 ; 0 ; 0];
velocities{3} = [0 ; 0 ; 0];
velocities{4} = [0 ; 0 ; 0];
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
