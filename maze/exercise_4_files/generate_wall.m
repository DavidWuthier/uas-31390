clear all
close all
clc
% Shuffle the seed
rng shuffle
height = 3;
width = 5;
depth = 4;
% Create the empty map   
map = zeros(depth, width, height);
fileID = fopen('auto_wall.txt','w');

first_wall = [1 1 1 1];
second_wall = [1 1 1 1];

while sum(first_wall) < 2 || sum(first_wall) > 3
    first_wall = randi(2,1,4)-1;
end

while sum(second_wall) < 2 || sum(second_wall) > 3
    second_wall = randi(2,1,4)-1;
end

%first_wall = [1 1 1 1];
%second_wall = [1 1 1 1];
%first_wall = [0 0 0 0];
%second_wall = [0 0 0 0];
special_maze = [first_wall second_wall]


% Fill the base walls
for y = 1:width
    if mod(y, 2) == 1
       continue 
    end
    if y == 2
        fprintf(fileID, '%s The first wall\n', '%');
    else
        fprintf(fileID, '\n%s The second wall\n', '%');
    end
    for x = 1:depth
        for z = 1:height
            % Cover the bottom
            if z == 1
                fprintf(fileID, '%d %d %d\n', x, y, z);
                map(x, y, z) = 1;
                continue
            end
            % Create the zigzag pattern
            if mod(x,2) == 1
                if z == 2 && y == 2
                    map(x, y, z) = 1;
                    fprintf(fileID, '%d %d %d\n', x, y, z);
                elseif z == 3 && y == 4
                    map(x, y, z) = 1;
                    fprintf(fileID, '%d %d %d\n', x, y, z);
                elseif z== 2 && y == 4
                    if (x == 1 && special_maze(5)) || (x == 3 && special_maze(6))
                        map(x, y, z) = 1;
                        fprintf(fileID, '%d %d %d\n', x, y, z);
                    end
                elseif z == 3 && y == 2
                    if (x == 1 && special_maze(3)) ||(x == 3 && special_maze(4))
                        map(x, y, z) = 1;
                        fprintf(fileID, '%d %d %d\n', x, y, z);
                    end
                end
                
            else
                if z == 2 && y == 4
                    map(x, y, z) = 1;
                    fprintf(fileID, '%d %d %d\n', x, y, z);
                elseif z == 3 && y == 2
                    map(x, y, z) = 1;
                    fprintf(fileID, '%d %d %d\n', x, y, z);
                elseif z == 2 && y == 2
                    if (x == 2 && special_maze(1)) || (x == 4 && special_maze(2))
                        map(x, y, z) = 1;
                        fprintf(fileID, '%d %d %d\n', x, y, z);
                    end
                elseif z == 3 && y == 4
                    if (x == 2 && special_maze(7)) || (x == 4 && special_maze(8))
                        map(x, y, z) = 1;
                        fprintf(fileID, '%d %d %d\n', x, y, z);
                    end
                end
            end
        end
    end
end

fprintf(fileID, '\n%s The size, start and goal position\n', '%');
fprintf(fileID, '%d %d %d\n', depth, width, height);

start_position = randi(4,1,1);
end_position = randi(4,1,1);

fprintf(fileID, '%d %d %d\n', start_position, 1, 1);
fprintf(fileID, '%d %d %d\n', end_position, 5, 1);
fclose(fileID);

start_converter = ['E', 'F', 'G', 'H'];
end_converter = ['A', 'B', 'C', 'D'];

load('auto_wall.txt')
% If a different named file is used, then write it into the wall variable
% e.g. wall = maze_2;
wall = auto_wall;

% Define the map size
max_x = wall(length(wall) - 2, 1);
max_y = wall(length(wall) - 2, 2);
max_z = wall(length(wall) - 2, 3);
map = zeros(max_x, max_y, max_z);

figure(1)
% Mark the start with green
scatter3(start_position(1)+0.5, 1+0.5, 1+0.5, ...
         500, [0,1,0],'filled')
hold on

% Mark the end with red
scatter3(end_position(1)+0.5, 5+0.5, 1+0.5 + 8, ...
         500, [1,0,0], 'filled')
% Draw the obstacles
for i = 1:(length(wall) - 3)
    if wall(i, 2) == 2
        map = gen_square3d([wall(i, 1) wall(i, 1) + 1;...
                            wall(i, 2) wall(i, 2) + 1;...
                            wall(i, 3) + 1 wall(i, 3) + 2], map, 1);
    else
        map = gen_square3d([wall(i, 1) wall(i, 1) + 1;...
                            wall(i, 2) wall(i, 2) + 1;...
                            wall(i, 3) + 5 wall(i, 3) + 6], map, 1);
                        
    end
end

% Set the axes
axis([1 max_x+1 1 max_y+1 1 max_z+1 + 6])
% Make the grid lines more visible
ax = gca;
ax.GridAlpha = 1.0;
grid on
set(gca, 'xtick', [0:1:max_x])
set(gca, 'ytick', [0:1:max_y])
set(gca, 'ztick', [0:1:max_z + 6])
title(['The drone must start on point: ' ...
       start_converter(start_position) ...
       ' and end on point: ' ...
       end_converter(end_position)]);
view(0,0);

fprintf('The drone must start on point: %s and end on point: %s\n', ...
        start_converter(start_position), end_converter(end_position));

for point = 1:length(special_maze)
    fprintf('Hole: %d = %d\n', point, special_maze(point));
end
