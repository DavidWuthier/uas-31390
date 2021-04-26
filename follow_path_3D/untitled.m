maze_1_3D;

figure(1)

max_x = size(map,1);
max_y = size(map,2);
max_z = size(map,3);

offset = 0.5;

%gen_square3d_no_map([-1-offset max_x-offset; -1-offset -offset; 0 max_z])
%gen_square3d_no_map([-1-offset max_x-offset; max_y-offset max_y+offset; 0 max_z])

%gen_square3d_no_map([-1-offset -offset; -1-offset max_y+1-offset; 0 max_z])
%gen_square3d_no_map([max_x-offset max_x+offset; -1-offset max_y+1-offset; 0 max_z])

for x = 1:max_x
    for y = 1:max_y
        for z = 1:max_z
            
            if map(x,y,z)
                
                square = [x-1-offset x-1+offset; y-1-offset y-1+offset; z-1 z];
                gen_square3d_no_map(square);
                
            end
            
        end
    end
end

% Set the axes
axis([-1-2*offset max_x+2*offset -1-2*offset max_y+2*offset 0 max_z+1])
ax = gca;
ax.GridAlpha = 1.0;
grid on
set(gca, 'xtick', [0:1:max_x])
set(gca, 'ytick', [0:1:max_y])
set(gca, 'ztick', [0:1:max_z])

view(3)

start = [0 0 0];
end_ = [9 9 0];

% Mark the start with green
scatter3(start(1)+0.0, start(2)+0.0, start(3)+0.5, ...
         500, [0,1,0],'filled')
hold on

% Mark the end with red
scatter3(end_(1)+0.0, end_(2)+0.0, end_(3)+0.5, ...
         500, [0,0,1], 'filled')
hold on

route = astar_3d(map, start+1, end_+1)
route = route -1 

for i = 2:length(route)
    plot3([route(i-1,1)+0.0,route(i,1)+0.0], ...
          [route(i-1,2)+0.0,route(i,2)+0.0], ...
          [route(i-1,3)+0.5,route(i,3)+0.5], ...
          'color',[0,0,0],'linewidth',5)
    hold on
    pause(0.1)
    route(i,:)
end
hold off

route = route + 1