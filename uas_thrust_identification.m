%% Initialization

close all
clear
clc

load('uas_thrust_identification.mat')

%% Identification

g = 9.81;
indices = out.commands.Time > 5 & out.commands.Time < 27;

%%

figure
plot(out.acceleration.Time, out.acceleration.Data(:,3) - g)
grid on
hold all
plot(out.commands.Time, out.commands.Data(:,3)/60000)
ylim([-10 10])

%%

x = out.commands.Data(indices,3)/60000;
y = out.acceleration.Data(indices,3);
result = uas_fit(x, y);
p1 = result.p1;
p2 = result.p2;
save('uas_thrust.mat', 'p1', 'p2')

