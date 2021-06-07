close all
clear all
clc
%% Setup the map
% Load the map from the wall file. Each line, except the two last, in the
% wall file is an obstacle. The position of the obstacle is defined in the
% wall file by its x y z coordinates. The three last elements is
% the size of the maze, the starting position and goal position
load('wall.txt')
% If a different named file is used, then write it into the wall variable
% e.g. wall = maze_2;
wall = wall;

% Define the map size
max_x = wall(length(wall) - 2, 1);
max_y = wall(length(wall) - 2, 2);
max_z = wall(length(wall) - 2, 3);
map = zeros(max_x, max_y, max_z);

% Input the obstacles into the map
for i = 1:(length(wall) - 3)
    map = gen_square3d([wall(i, 1) wall(i, 1) + 1;...
                        wall(i, 2) wall(i, 2) + 1;...
                        wall(i, 3) wall(i, 3) + 1], map);
    
end

% Define the starting and end position
start = wall(length(wall) - 1, :);
end_ = wall(length(wall), :);

% Make sure the start and end is not an obstacle
map(start(1), start(2), start(3)) = 0;
map(end_(1), end_(2), end_(3)) = 0;


%% Run the algorithm to optain the route
route = greedy_3d(map, start, end_);


%% Draw the map
% Draw a figure to show the map and process
hold off
figure(1)
% Mark the start with green
scatter3(start(1)+0.5, start(2)+0.5, start(3)+0.5, ...
         500, [0,1,0],'filled')
hold on

% Mark the end with red
scatter3(end_(1)+0.5, end_(2)+0.5, end_(3)+0.5, ...
         500, [1,0,0], 'filled')
hold on

% Draw the obstacles
for i = 1:(length(wall) - 3)
    map = gen_square3d([wall(i, 1) wall(i, 1) + 1;...
                        wall(i, 2) wall(i, 2) + 1;...
                        wall(i, 3) wall(i, 3) + 1], map, 1);
    
end

% Set the axes
axis([1 max_x+1 1 max_y+1 1 max_z+1])
% Make the grid lines more visible
ax = gca;
ax.GridAlpha = 1.0;
grid on
set(gca, 'xtick', [0:1:max_x])
set(gca, 'ytick', [0:1:max_y])
set(gca, 'ztick', [0:1:max_z])
%% Draw the route
pause on;
for i = 2:length(route)
    plot3([route(i-1,1)+0.5,route(i,1)+0.5], ...
          [route(i-1,2)+0.5,route(i,2)+0.5], ...
          [route(i-1,3)+0.5,route(i,3)+0.5], ...
          'color',[0,0,0],'linewidth',5)
    hold on
    pause(0.1)
    route(i,:)
end
hold off

%% Scale the route
x_scale = 0.65;
y_scale = 0.55;
z_scale = 0.75;

x_offset = 0.3;
y_offset = 0.5;
z_offset = 0.25;

% Make a copy of the route
route_scaled = route;

% Scale the copy
route_scaled(:,1) = (route_scaled(:,1) - 1) * x_scale + x_offset;
route_scaled(:,2) = (route_scaled(:,2) - 1) * y_scale + y_offset;
route_scaled(:,3) = (route_scaled(:,3) - 1) * z_scale + z_offset;

% Print the scaled route
route_scaled

