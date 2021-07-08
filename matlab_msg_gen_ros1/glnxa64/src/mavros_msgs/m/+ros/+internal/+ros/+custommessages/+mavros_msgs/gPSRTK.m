function [data, info] = gPSRTK
%GPSRTK gives an empty data for mavros_msgs/GPSRTK
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'mavros_msgs/GPSRTK';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.RtkReceiverId, info.RtkReceiverId] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.Wn, info.Wn] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.Tow, info.Tow] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.RtkHealth, info.RtkHealth] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.RtkRate, info.RtkRate] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.Nsats, info.Nsats] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.BaselineA, info.BaselineA] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.BaselineB, info.BaselineB] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.BaselineC, info.BaselineC] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.Accuracy, info.Accuracy] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.IarNumHypotheses, info.IarNumHypotheses] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'mavros_msgs/GPSRTK';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,17);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'rtk_receiver_id';
info.MatPath{8} = 'wn';
info.MatPath{9} = 'tow';
info.MatPath{10} = 'rtk_health';
info.MatPath{11} = 'rtk_rate';
info.MatPath{12} = 'nsats';
info.MatPath{13} = 'baseline_a';
info.MatPath{14} = 'baseline_b';
info.MatPath{15} = 'baseline_c';
info.MatPath{16} = 'accuracy';
info.MatPath{17} = 'iar_num_hypotheses';
