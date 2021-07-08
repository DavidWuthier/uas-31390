function [data, info] = extendedState
%ExtendedState gives an empty data for mavros_msgs/ExtendedState
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'mavros_msgs/ExtendedState';
[data.VTOLSTATEUNDEFINED, info.VTOLSTATEUNDEFINED] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.VTOLSTATETRANSITIONTOFW, info.VTOLSTATETRANSITIONTOFW] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.VTOLSTATETRANSITIONTOMC, info.VTOLSTATETRANSITIONTOMC] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.VTOLSTATEMC, info.VTOLSTATEMC] = ros.internal.ros.messages.ros.default_type('uint8',1, 3);
[data.VTOLSTATEFW, info.VTOLSTATEFW] = ros.internal.ros.messages.ros.default_type('uint8',1, 4);
[data.LANDEDSTATEUNDEFINED, info.LANDEDSTATEUNDEFINED] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.LANDEDSTATEONGROUND, info.LANDEDSTATEONGROUND] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.LANDEDSTATEINAIR, info.LANDEDSTATEINAIR] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.LANDEDSTATETAKEOFF, info.LANDEDSTATETAKEOFF] = ros.internal.ros.messages.ros.default_type('uint8',1, 3);
[data.LANDEDSTATELANDING, info.LANDEDSTATELANDING] = ros.internal.ros.messages.ros.default_type('uint8',1, 4);
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.VtolState, info.VtolState] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.LandedState, info.LandedState] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'mavros_msgs/ExtendedState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,18);
info.MatPath{1} = 'VTOL_STATE_UNDEFINED';
info.MatPath{2} = 'VTOL_STATE_TRANSITION_TO_FW';
info.MatPath{3} = 'VTOL_STATE_TRANSITION_TO_MC';
info.MatPath{4} = 'VTOL_STATE_MC';
info.MatPath{5} = 'VTOL_STATE_FW';
info.MatPath{6} = 'LANDED_STATE_UNDEFINED';
info.MatPath{7} = 'LANDED_STATE_ON_GROUND';
info.MatPath{8} = 'LANDED_STATE_IN_AIR';
info.MatPath{9} = 'LANDED_STATE_TAKEOFF';
info.MatPath{10} = 'LANDED_STATE_LANDING';
info.MatPath{11} = 'header';
info.MatPath{12} = 'header.seq';
info.MatPath{13} = 'header.stamp';
info.MatPath{14} = 'header.stamp.sec';
info.MatPath{15} = 'header.stamp.nsec';
info.MatPath{16} = 'header.frame_id';
info.MatPath{17} = 'vtol_state';
info.MatPath{18} = 'landed_state';
