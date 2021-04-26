function plot_map( map, fig_num )

max_x = size(map,1)-1;
max_y = size(map,2)-1;

offset = 0.5;
wallSize = 500;

% Draw a figure to show the map and process
figure(fig_num)

% Mark the obstacles with blue 
for x = 1:max_x
    for y = 1:max_y
        if map(x,y) == 1
            hold on
            %scatter(x-1-offset, y-1-offset, [wallSize], [0,0,1],'Square', 'filled')
            patch([x-1-offset x-1+offset x-1+offset x-1-offset], [y-1-offset y-1-offset y-1+offset y-1+offset],'blue')
            hold off
        end
    end
end

for x = 0:max_x+2
    hold on
    %scatter(x, -1, [wallSize], [0,0,1],'Square', 'filled')
    %scatter(x, max_y+1, [wallSize], [0,0,1],'Square', 'filled')
    patch([x-1-offset x-1+offset x-1+offset x-1-offset], [-1-offset -1-offset -1+offset -1+offset ],'blue')
    patch([x-1-offset x-1+offset x-1+offset x-1-offset], [max_y+1-offset max_y+1-offset max_y+1+offset max_y+1+offset ],'blue')
    hold off
end
for y = 0:max_y+2
    hold on
    %scatter(-1, y, [wallSize], [0,0,1],'Square', 'filled')
    %scatter(max_x+1, y, [wallSize], [0,0,1],'Square', 'filled')
    patch([-1-offset -1-offset -1+offset -1+offset ], [y-1-offset y-1+offset y-1+offset y-1-offset], 'blue')
    patch([max_x+1-offset max_x+1-offset max_x+1+offset max_x+1+offset ], [y-1-offset y-1+offset y-1+offset y-1-offset], 'blue')
    hold off
end

% Set the axes
axis([-1.5 max_x+1.5 -1.5 max_y+1.5])
% Make the grid lines more visible
ax = gca;
ax.GridAlpha = 0.5;
grid on
set(gca, 'xtick', [0:1:max_x])
set(gca, 'ytick', [0:1:max_y])

end