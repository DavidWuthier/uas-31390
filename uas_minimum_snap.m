function poly_traj = uas_minimum_snap(knots, order, waypoints, corridors, make_plots)
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

% parameters
dim = 3;
% Cost function
optimization_target = 'end-derivative';
% maximally imposed continuity between segment 
max_continuity = 4;
% 1 2 3 th order derivative
derivative_weights = [0 1 1];
poly_traj = PolyTrajGen(knots, order, optimization_target, dim, max_continuity);

% initial velocity
x0d = [0 ; 0 ; 0];
% initial acceleration
x0dd = [0 ; 0 ; 0];
for m = 1:length(waypoints)
    % Order 0 pin (waypoints)
    pin = struct('t',knots(m),'d',0,'X',waypoints{m});
    poly_traj.addPin(pin);
    % Order 1 pin 
    pin = struct('t',knots(m),'d',1,'X',x0d);
    poly_traj.addPin(pin);
    % Order 2 pin 
    pin = struct('t',knots(m),'d',2,'X',x0dd);
    poly_traj.addPin(pin);
end

for i = 1:length(corridors.times)
    corridor_constraint = [corridors.x_lower(i) corridors.x_upper(i)
                           corridors.y_lower(i) corridors.y_upper(i)
                           corridors.z_lower(i) corridors.z_upper(i)];
    pin = struct('t',corridors.times(i),'d',0,'X',corridor_constraint);
    poly_traj.addPin(pin);
end

% set the objective function for penalizing the derivatives 
poly_traj.setDerivativeObj(derivative_weights);
tic, poly_traj.solve; toc

% PLOTS
if make_plots
    poly_traj.showPath(3)
    poly_traj.showTraj(3)
end
