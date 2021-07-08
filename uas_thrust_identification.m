%% Initialization

% close all
% clear
% clc

load('uas_thrust_data.mat')

%%

figure
plot(out.acceleration.Time, out.acceleration.Data - g)
grid on
hold all
plot(out.pwm.Time, out.pwm.Data)
ylim([-10 10])

%% Trimming

indices = out.pwm.Time > 40 & out.pwm.Time < 90;

%%

x = out.pwm.Data(indices);
y = out.acceleration.Data(indices);
result = uas_fit(x, y);
p1 = result.p1;
p2 = result.p2;
save('uas_thrust_constants.mat', 'p1', 'p2')

