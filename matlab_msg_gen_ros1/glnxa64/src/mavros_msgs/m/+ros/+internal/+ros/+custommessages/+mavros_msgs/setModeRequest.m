function [data, info] = setModeRequest
%SetMode gives an empty data for mavros_msgs/SetModeRequest
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'mavros_msgs/SetModeRequest';
[data.MAVMODEPREFLIGHT, info.MAVMODEPREFLIGHT] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.MAVMODESTABILIZEDISARMED, info.MAVMODESTABILIZEDISARMED] = ros.internal.ros.messages.ros.default_type('uint8',1, 80);
[data.MAVMODESTABILIZEARMED, info.MAVMODESTABILIZEARMED] = ros.internal.ros.messages.ros.default_type('uint8',1, 208);
[data.MAVMODEMANUALDISARMED, info.MAVMODEMANUALDISARMED] = ros.internal.ros.messages.ros.default_type('uint8',1, 64);
[data.MAVMODEMANUALARMED, info.MAVMODEMANUALARMED] = ros.internal.ros.messages.ros.default_type('uint8',1, 192);
[data.MAVMODEGUIDEDDISARMED, info.MAVMODEGUIDEDDISARMED] = ros.internal.ros.messages.ros.default_type('uint8',1, 88);
[data.MAVMODEGUIDEDARMED, info.MAVMODEGUIDEDARMED] = ros.internal.ros.messages.ros.default_type('uint8',1, 216);
[data.MAVMODEAUTODISARMED, info.MAVMODEAUTODISARMED] = ros.internal.ros.messages.ros.default_type('uint8',1, 92);
[data.MAVMODEAUTOARMED, info.MAVMODEAUTOARMED] = ros.internal.ros.messages.ros.default_type('uint8',1, 220);
[data.MAVMODETESTDISARMED, info.MAVMODETESTDISARMED] = ros.internal.ros.messages.ros.default_type('uint8',1, 66);
[data.MAVMODETESTARMED, info.MAVMODETESTARMED] = ros.internal.ros.messages.ros.default_type('uint8',1, 194);
[data.BaseMode, info.BaseMode] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.CustomMode, info.CustomMode] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'mavros_msgs/SetModeRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,13);
info.MatPath{1} = 'MAV_MODE_PREFLIGHT';
info.MatPath{2} = 'MAV_MODE_STABILIZE_DISARMED';
info.MatPath{3} = 'MAV_MODE_STABILIZE_ARMED';
info.MatPath{4} = 'MAV_MODE_MANUAL_DISARMED';
info.MatPath{5} = 'MAV_MODE_MANUAL_ARMED';
info.MatPath{6} = 'MAV_MODE_GUIDED_DISARMED';
info.MatPath{7} = 'MAV_MODE_GUIDED_ARMED';
info.MatPath{8} = 'MAV_MODE_AUTO_DISARMED';
info.MatPath{9} = 'MAV_MODE_AUTO_ARMED';
info.MatPath{10} = 'MAV_MODE_TEST_DISARMED';
info.MatPath{11} = 'MAV_MODE_TEST_ARMED';
info.MatPath{12} = 'base_mode';
info.MatPath{13} = 'custom_mode';
