%% Initialization

close all
clear
clc

%% Run Simulink Model

out = sim('uas_hoops.slx');

% Extract positions and directions

p_h = mean(out.hoop_positions.Data(:,:,end-10:end), 3);

u_h = mean(out.hoop_directions.Data(:,:,end-10:end), 3);

for i = 1:4
    u_h(:,i) = u_h(:,i)/norm(u_h(:,i), 2);
end

p_h1 = p_h(:,1);
p_h2 = p_h(:,2);
p_h3 = p_h(:,3);
p_h4 = p_h(:,4);

u_h1 = u_h(:,1);
u_h2 = u_h(:,2);
u_h3 = u_h(:,3);
u_h4 = u_h(:,4);

