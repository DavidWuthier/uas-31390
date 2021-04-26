function plot_route( route, fig_num )

figure(fig_num)

for i = 1:size(route,1)-1
    hold on
    plot([route(i,1), route(i+1,1)]-1, [route(i,2), route(i+1,2)]-1, 'Color', [0.8500 0.3250 0.0980], 'LineWidth', 3)
    hold off
end

end