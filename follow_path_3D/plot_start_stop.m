function plot_start_stop(start, end_, fig_num)

offset = 0;
wallSize = 500;

figure(fig_num)
% Mark the start with green
hold on
scatter(start(1)-offset, start(2)-offset, [wallSize/2], [0,1,0], 'filled')
% Mark the end with red
scatter(end_(1)-offset, end_(2)-offset, [wallSize/2], [1,0.6,0], 'filled')
hold off

end