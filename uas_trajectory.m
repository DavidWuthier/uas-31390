%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%
% MIT License
% 
% Copyright (c) 2020 David Wuthier (dwuthier@gmail.com)
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

% Simulation of a quadcopter inspired from the paper
%
% Mellinger, Daniel, and Vijay Kumar.
% "Minimum snap trajectory generation and control for quadrotors."
% 2011 IEEE International Conference on Robotics and Automation. IEEE, 2011.
%
% To use this program:
% 1) run this file
% 2) run the simulink model

% INITIALIZATION

clear
close all
clc

% SIMULATION PARAMETERS

g = 9.80665 ;
mass = 0.68 ;
inertia_xx = 0.007 ;
inertia_yy = 0.007 ;
inertia_zz = 0.012 ;
arm_length = 0.17 ;
rotor_offset_top = 0.01 ;
motor_constant = 8.54858e-06 ;
moment_constant = 0.016 ;
max_rot_velocity = 838 ;
allocation_matrix = ...
    [1 1 1 1
     0 arm_length 0 -arm_length
     -arm_length 0 arm_length 0
     -moment_constant moment_constant -moment_constant moment_constant] ;
mix_matrix = inv(motor_constant * allocation_matrix) ;

% TRAJECTORY GENERATION

% parameters
dim = 3;
knots = [0 5];
% polynomial order 
order = 8;
optimTarget = 'end-derivative';
% maximally imposed continuity between segment 
maxConti = 4;
% 1 2 3 th order derivative
objWeights = [0 1 1];
pTraj = PolyTrajGen(knots,order,optimTarget,dim,maxConti);

% FIXED PINS

% knots
ts = knots;
% waypoints
Xs = [0 10
      0 5
      0 0];
% initial velocity
Xdot = [0
        0 
        0];
% initial acceleration
Xddot = [0
         0
         0];
for m = 1:size(Xs,2)
    % Order 0 pin (waypoints)
    pin = struct('t',ts(m),'d',0,'X',Xs(:,m));
    pTraj.addPin(pin);
    % Order 1 pin 
    pin = struct('t',ts(m),'d',1,'X',Xdot);
    pTraj.addPin(pin);
    % Order 2 pin 
    pin = struct('t',ts(m),'d',2,'X',Xddot);
    pTraj.addPin(pin);
end

% LOOSE PINS

tol = 0.5 ;
twp = [2 3] ;
wpx = [5 5] ;
wpy = [0 5] ;
for i = 1:length(twp)
    passCube = [wpx(i) - tol, wpx(i) + tol
                wpy(i) - tol, wpy(i) + tol
                -tol tol] ;
    pin = struct('t',twp(i),'d',0,'X',passCube);
    pTraj.addPin(pin);
end

% SOLVE

% set the objective function for penalizing the derivatives 
pTraj.setDerivativeObj(objWeights);
tic
pTraj.solve;
toc

% PLOTS

pTraj.showPath(3)
pTraj.showTraj(3)
