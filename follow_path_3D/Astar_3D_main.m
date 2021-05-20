close all
clear all
clc

% Used for debugging
show_children = 0;
show_open_nodes = 0;

% Define the map size
max_x = 4;
max_y = 5;
max_z = 3;
map = zeros(max_x, max_y, max_z);

% The cost of going from one point to another
length_cost = 1;

%{
% Generate random obstacles. A 1 in the map is regarded as
% an obstacle
obs_per = 0.3;
for x = 1:max_x
    for y = 1:max_y
        for z = 1:max_z
            if rand > 1 - obs_per
                map(x,y,z) = 1;
            end
        end
    end
end
%}

% Define the starting and end position
start = [1, 1, 1];
end_ = [4, 5, 1];

% Make sure the start and end is not an obstacle
map(start(1), start(2), start(3)) = 0;
map(end_(1), end_(2), end_(3)) = 0;

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

%{
% Mark the obstacles with blue 
for x = 1:max_x
    for y = 1:max_y
        for z = 1:max_z
            if map(x, y, z) == 1
                scatter3(x-0.5, y-0.5, z-0.5, [], [0,0,1])
                hold on
            end
        end
    end
end
%}

% The first wall
map = gen_square3d([1 3; 2 3; 2 4], map);
map = gen_square3d([3 4; 2 3; 3 4], map);
map = gen_square3d([4 5; 2 3; 2 4], map);
% Firsth bottom wall
map = gen_square3d([1 5; 2 3; 1 2], map);

% The second wall
map = gen_square3d([1 2; 4 5; 2 4], map);
map = gen_square3d([2 3; 4 5; 2 3], map);
map = gen_square3d([3 4; 4 5; 2 4], map);
map = gen_square3d([4 5; 4 5; 2 3], map);

% The second bottom wall
map = gen_square3d([1 5; 4 5; 1 2], map);
%map = gen_square3d([2 3; 1 10; 1 11], map);
%map = gen_square3d([4 5; 2 11; 1 11], map);
%map = gen_square3d([6 7; 1 8; 1 11], map);
%map = gen_square3d([6 7; 9 11; 1 11], map);
%map = gen_square3d([6 7; 8 9; 1 8], map);
%map = gen_square3d([6 7; 8 9; 9 11], map);
%map = gen_square3d([8 9; 2 11; 1 11], map);

% Set the axes
axis([1 max_x+1 1 max_y+1 1 max_z+1])
% Make the grid lines more visible
ax = gca;
ax.GridAlpha = 1.0;
grid on
set(gca, 'xtick', [0:1:max_x])
set(gca, 'ytick', [0:1:max_y])
set(gca, 'ztick', [0:1:max_z])
route = astar_3d(map, start, end_)

%%
% Run the algorithm -----------------------------------

% Children must be initalized to have nodes in it
% The arrays keeping track of the nodes must initialized 
% containing a node. These flags tells the first node in the
% closed and children array to be put in directly
first_closed = 1;
first_children = 1;
closed = [];
children = [];

% Create the first node at the start position
parent_node = node;
parent_node.position = start;
parent_node.g = 0;
parent_node.h = parent_node.calc_dist_3d(end_);
parent_node.f = parent_node.h + parent_node.g;

% Flag used to skip nodes which is already added
continue_flag = 0;

% Slow the calculation down,
% so it can be followed in real time
pause off;
% Keep running until the end point is reached
while ~(parent_node.position(1) == end_(1) && ...
        parent_node.position(2) == end_(2) && ...
        parent_node.position(3) == end_(3))
    % Run through the surronding squares

    for x = -1:1
        for y = -1:1
            for z = -1:1
                % Skip the node itself
                if ~(x == 0 && y == 0 && z == 0 || ...
                     (abs(x) + abs(y) + abs(z) > 1))
                    node_pos = [parent_node.position(1) + x, ...
                                parent_node.position(2) + y, ...
                                parent_node.position(3) + z];
                    % Check if the children is within the map
                    if ~(node_pos(1) < 1 || node_pos(1) > max_x || ...
                         node_pos(2) < 1 || node_pos(2) > max_y || ...
                         node_pos(3) < 1 || node_pos(3) > max_z)
                        % Check if the children is an obstacle
                        if ~(map(node_pos(1), node_pos(2), ...
                                 node_pos(3)) == 1)
                            % Check if the node have been visited
                            for closed_i = 1:length(closed)
                                if node_pos == closed(closed_i).position
                                    % Note that this node is not 
                                    % to be added to children
                                    continue_flag = 1;
                                end
                            end
                            % Check if the node is already a child
                            for child_i = 1:length(children)
                                if node_pos == children(child_i).position
                                    % Note that this node is not 
                                    % to be added to children
                                    % Check if the robot is taking a diagonal path
                                    if abs(x) + abs(y) + abs(z) == 3
                                        % If so, add diagonal cost
                                        g = parent_node.g + ...
                                            sqrt(length_cost^2*3);
                                    elseif abs(x) + abs(y) + abs(z) == 2
                                        % If so, add diagonal cost
                                        g = parent_node.g + ...
                                            sqrt(length_cost^2*2);
                                    else
                                        % Otherwise add linear cost
                                        g = parent_node.g + ...
                                            length_cost;
                                    end
                                    % If this road to the child is shorter, then
                                    % update the child
                                    if g < children(child_i).g
                                        children(child_i).g = g;
                                        children(child_i).parent = parent_node;
                                        children(child_i).f = children(child_i).g + ...
                                                              children(child_i).h;
                                    end
                                    
                                    continue_flag = 1;
                                end
                            end

                            % Check if this node should be skipped
                            if continue_flag == 1
                                continue_flag = 0;
                                continue%map = gen_square3d([2 3; 1 10; 1 11], map);
%map = gen_square3d([4 5; 2 11; 1 11], map);
%map = gen_square3d([6 7; 1 8; 1 11], map);
%map = gen_square3d([6 7; 9 11; 1 11], map);
%map = gen_square3d([6 7; 8 9; 1 8], map);
%map = gen_square3d([6 7; 8 9; 9 11], map);
%map = gen_square3d([8 9; 2 11; 1 11], map);
                            end

                            % Define the child node
                            temp_node = node;
                            % Note its parent
                            temp_node.parent = parent_node;
                            % Note its position
                            temp_node.position = node_pos;
                            % Check if the robot is taking a diagonal path
                            if abs(x) + abs(y) + abs(z) == 3
                                % If so, add diagonal cost
                                temp_node.g = parent_node.g + ...
                                              sqrt(length_cost^2*3);
                            elseif abs(x) + abs(y) + abs(z) == 2
                                % If so, add diagonal cost
                                temp_node.g = parent_node.g + ...
                                              sqrt(length_cost^2*2);
                            else
                                % Otherwise add linear cost
                                temp_node.g = parent_node.g + ...
                                              length_cost;
                            end
                            % Calculate the distance from the node
                            % to the end point
                            temp_node.h = temp_node.calc_dist_3d(end_);
                            % Calculate the total cost of the node
                            temp_node.f = temp_node.h + temp_node.g;

                            % Add the node to the children array
                            % Check if it is the first child
                            % being added
                            if first_children == 1 
                                first_children = 0;
                                children = [temp_node]; 
                            else
                                % Otherwise expand the children array
                                children(end+1) = temp_node;
                            end
                        end
                    end
                end
            end
        end
    end

    % Add the parent node to the list of closed nodes
    if first_closed == 1
        first_closed = 0;
        closed = [parent_node]; 
    else
        closed(end+1) = parent_node;
    end
    
    if show_open_nodes == 1
        % Plot the parent_node in red
        scatter3(parent_node.position(1)+0.5, ...
                 parent_node.position(2)+0.5, ...
                 parent_node.position(3)+0.5, [], [1,0,0])
        hold on
    end

    % Choose the child node with the lowest f value
    lowest_f = 999999;
    lowest_child_i = -1;
    for child_i = 1:length(children)
        if show_children == 1
            % Plot all the child notes in green
            scatter3(children(child_i).position(1)+0.5, ...
                     children(child_i).position(2)+0.5, ...
                     children(child_i).position(3)+0.5, ...
                     [], [0,1,0])
            hold on
        end
        if children(child_i).f < lowest_f
            lowest_f = children(child_i).f;
            lowest_child_i = child_i;
        end
    end


    % Update the parent to the children
    % with the lowest f value
    parent_node = children(lowest_child_i);

    % Delete the new parent from the children
    children(lowest_child_i) = [];

    if show_open_nodes == 1
        % Mark the new parent with with purple
        scatter3(parent_node.position(1)+0.5, ...
                 parent_node.position(2)+0.5, ...
                 parent_node.position(3)+0.5, [], [1,0,1])
        hold on
    end
    
    % Wait a little
    pause(0.3)
end
pause on;

% Find the route that the algorithm took
% Init the route array
route = [parent_node.position];
% Keep going until the route is back at the start position
while  ~(parent_node.position(1) == start(1) && ...
         parent_node.position(2) == start(2) && ...
         parent_node.position(3) == start(3))
   
   % Plot the route in magenta
   scatter3(parent_node.position(1)+0.5, ...
            parent_node.position(2)+0.5, ...
            parent_node.position(3)+0.5, [], [0,0,0])
   hold on
   %pause(0.1)
   
   % Update the route by going backwards through the parents
   parent_node = parent_node.parent;
   route = cat(1,route,parent_node.position);
end

% Plot the last point
scatter3(parent_node.position(1)+0.5, ...
         parent_node.position(2)+0.5, ...
         parent_node.position(3)+0.5, [], [0,0,0])
hold on

route = flip(route);

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
%%
% Route scaled
x_scale = 0.65;
y_scale = 0.55;
z_scale = 0.75;

x_offset = 0.3;
y_offset = 0.5;
z_offset = 0.25;

route_scaled = route;

route_scaled(:,1) = (route_scaled(:,1) - 1) * x_scale + x_offset;
route_scaled(:,2) = (route_scaled(:,2) - 1) * y_scale + y_offset;
route_scaled(:,3) = (route_scaled(:,3) - 1) * z_scale + z_offset;


route_scaled
