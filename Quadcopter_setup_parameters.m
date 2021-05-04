%setting drone parameters
clear
%--------------

%desired positions
X = 3;
Y = 2;
Z = 1;
%--------------

%plant parameters
m = 0.55; %mass of drone
g = 9.81; %gravity
k = 0.01; %dimensioned caling constant
b = 0.001; %drag coefficient
L = 0.225; %distance from the center of the quadcopter to any of the propellers.

Dx = 0.1; %drag coefficient x
Dy = Dx; %drag coefficient y
Dz = Dx; %drag coefficient z

Ixx= 5*10^(-3); %moment of inertia around x
Iyy= 5*10^(-3); %moment of inertia around y
Izz= 8.9*10^(-3); %moment of inertia around z
I = diag([Ixx; Iyy;Izz],0);

k_spring = 300; %spring constant for wall impact.
%--------------

% Z controller parameters
lambda_z = 2;
k_z = 10;
%--------------

% Phi controller parameters
lambda_phi = 2;
k_phi = 10;
%--------------

% Theta controller parameters
lambda_theta = 2;
k_theta = 10;
%--------------

% Psi controller parameters
lambda_psi = 2;
k_psi = 10;
%--------------

% XY controller parameters
lambda_xy = 1;
k_xy = 1;
kp_xy = 1;
kd_xy = 1;
%--------------

%Wall
wall_pose = X - 0.2; %position of wall
%--------------

% Simscape parameters
sample_time = 1e-3;
publish_rate = 1 * sample_time;
x0 = 36;
y0 = 80;
z0 = 1;
mass_drone = 0.55 ;
mass_rod = 0.0;
mass_tip = 0;
mass_total = mass_drone + mass_rod + mass_tip;
stiffness_rod = 100 ;
critical_damping_rod = 2 * sqrt(mass_total * stiffness_rod) ;
stiffness_wall = 100 ;
critical_damping_wall = 2 * sqrt(mass_total * stiffness_wall) ;
inertia_xx = 5*10^(-3) ;
inertia_yy = 5*10^(-3) ;
inertia_zz = 8.9*10^(-3) ;
arm_length = 0.225 ;
rotor_offset_top = 0.01 ;
motor_constant = 0.01 ;
moment_constant = 0.1 ;
max_rot_velocity = 838 ;
allocation_matrix = ...
    [1 1 1 1
     0 arm_length 0 -arm_length
     -arm_length 0 arm_length 0
     -moment_constant moment_constant -moment_constant moment_constant] ;
mix_matrix = inv(motor_constant * allocation_matrix) ;
air_density = 1.2041;
drag_coefficient = 0.47;
reference_area = pi * 75e-3^2;
%--------------
