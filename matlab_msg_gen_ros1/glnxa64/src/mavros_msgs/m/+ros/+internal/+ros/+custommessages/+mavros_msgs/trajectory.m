function [data, info] = trajectory
%Trajectory gives an empty data for mavros_msgs/Trajectory
% Copyright 2019-2020 The MathWorks, Inc.
%#codegen
data = struct();
data.MessageType = 'mavros_msgs/Trajectory';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Type, info.Type] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.MAVTRAJECTORYREPRESENTATIONWAYPOINTS, info.MAVTRAJECTORYREPRESENTATIONWAYPOINTS] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.MAVTRAJECTORYREPRESENTATIONBEZIER, info.MAVTRAJECTORYREPRESENTATIONBEZIER] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.Point1, info.Point1] = ros.internal.ros.custommessages.mavros_msgs.positionTarget;
info.Point1.MLdataType = 'struct';
[data.Point2, info.Point2] = ros.internal.ros.custommessages.mavros_msgs.positionTarget;
info.Point2.MLdataType = 'struct';
[data.Point3, info.Point3] = ros.internal.ros.custommessages.mavros_msgs.positionTarget;
info.Point3.MLdataType = 'struct';
[data.Point4, info.Point4] = ros.internal.ros.custommessages.mavros_msgs.positionTarget;
info.Point4.MLdataType = 'struct';
[data.Point5, info.Point5] = ros.internal.ros.custommessages.mavros_msgs.positionTarget;
info.Point5.MLdataType = 'struct';
[data.PointValid, info.PointValid] = ros.internal.ros.messages.ros.default_type('uint8',5);
[data.Command, info.Command] = ros.internal.ros.messages.ros.default_type('uint16',5);
[data.TimeHorizon, info.TimeHorizon] = ros.internal.ros.messages.ros.default_type('single',5);
info.MessageType = 'mavros_msgs/Trajectory';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,207);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'type';
info.MatPath{8} = 'MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS';
info.MatPath{9} = 'MAV_TRAJECTORY_REPRESENTATION_BEZIER';
info.MatPath{10} = 'point_1';
info.MatPath{11} = 'point_1.header';
info.MatPath{12} = 'point_1.header.seq';
info.MatPath{13} = 'point_1.header.stamp';
info.MatPath{14} = 'point_1.header.stamp.sec';
info.MatPath{15} = 'point_1.header.stamp.nsec';
info.MatPath{16} = 'point_1.header.frame_id';
info.MatPath{17} = 'point_1.coordinate_frame';
info.MatPath{18} = 'point_1.FRAME_LOCAL_NED';
info.MatPath{19} = 'point_1.FRAME_LOCAL_OFFSET_NED';
info.MatPath{20} = 'point_1.FRAME_BODY_NED';
info.MatPath{21} = 'point_1.FRAME_BODY_OFFSET_NED';
info.MatPath{22} = 'point_1.type_mask';
info.MatPath{23} = 'point_1.IGNORE_PX';
info.MatPath{24} = 'point_1.IGNORE_PY';
info.MatPath{25} = 'point_1.IGNORE_PZ';
info.MatPath{26} = 'point_1.IGNORE_VX';
info.MatPath{27} = 'point_1.IGNORE_VY';
info.MatPath{28} = 'point_1.IGNORE_VZ';
info.MatPath{29} = 'point_1.IGNORE_AFX';
info.MatPath{30} = 'point_1.IGNORE_AFY';
info.MatPath{31} = 'point_1.IGNORE_AFZ';
info.MatPath{32} = 'point_1.FORCE';
info.MatPath{33} = 'point_1.IGNORE_YAW';
info.MatPath{34} = 'point_1.IGNORE_YAW_RATE';
info.MatPath{35} = 'point_1.position';
info.MatPath{36} = 'point_1.position.x';
info.MatPath{37} = 'point_1.position.y';
info.MatPath{38} = 'point_1.position.z';
info.MatPath{39} = 'point_1.velocity';
info.MatPath{40} = 'point_1.velocity.x';
info.MatPath{41} = 'point_1.velocity.y';
info.MatPath{42} = 'point_1.velocity.z';
info.MatPath{43} = 'point_1.acceleration_or_force';
info.MatPath{44} = 'point_1.acceleration_or_force.x';
info.MatPath{45} = 'point_1.acceleration_or_force.y';
info.MatPath{46} = 'point_1.acceleration_or_force.z';
info.MatPath{47} = 'point_1.yaw';
info.MatPath{48} = 'point_1.yaw_rate';
info.MatPath{49} = 'point_2';
info.MatPath{50} = 'point_2.header';
info.MatPath{51} = 'point_2.header.seq';
info.MatPath{52} = 'point_2.header.stamp';
info.MatPath{53} = 'point_2.header.stamp.sec';
info.MatPath{54} = 'point_2.header.stamp.nsec';
info.MatPath{55} = 'point_2.header.frame_id';
info.MatPath{56} = 'point_2.coordinate_frame';
info.MatPath{57} = 'point_2.FRAME_LOCAL_NED';
info.MatPath{58} = 'point_2.FRAME_LOCAL_OFFSET_NED';
info.MatPath{59} = 'point_2.FRAME_BODY_NED';
info.MatPath{60} = 'point_2.FRAME_BODY_OFFSET_NED';
info.MatPath{61} = 'point_2.type_mask';
info.MatPath{62} = 'point_2.IGNORE_PX';
info.MatPath{63} = 'point_2.IGNORE_PY';
info.MatPath{64} = 'point_2.IGNORE_PZ';
info.MatPath{65} = 'point_2.IGNORE_VX';
info.MatPath{66} = 'point_2.IGNORE_VY';
info.MatPath{67} = 'point_2.IGNORE_VZ';
info.MatPath{68} = 'point_2.IGNORE_AFX';
info.MatPath{69} = 'point_2.IGNORE_AFY';
info.MatPath{70} = 'point_2.IGNORE_AFZ';
info.MatPath{71} = 'point_2.FORCE';
info.MatPath{72} = 'point_2.IGNORE_YAW';
info.MatPath{73} = 'point_2.IGNORE_YAW_RATE';
info.MatPath{74} = 'point_2.position';
info.MatPath{75} = 'point_2.position.x';
info.MatPath{76} = 'point_2.position.y';
info.MatPath{77} = 'point_2.position.z';
info.MatPath{78} = 'point_2.velocity';
info.MatPath{79} = 'point_2.velocity.x';
info.MatPath{80} = 'point_2.velocity.y';
info.MatPath{81} = 'point_2.velocity.z';
info.MatPath{82} = 'point_2.acceleration_or_force';
info.MatPath{83} = 'point_2.acceleration_or_force.x';
info.MatPath{84} = 'point_2.acceleration_or_force.y';
info.MatPath{85} = 'point_2.acceleration_or_force.z';
info.MatPath{86} = 'point_2.yaw';
info.MatPath{87} = 'point_2.yaw_rate';
info.MatPath{88} = 'point_3';
info.MatPath{89} = 'point_3.header';
info.MatPath{90} = 'point_3.header.seq';
info.MatPath{91} = 'point_3.header.stamp';
info.MatPath{92} = 'point_3.header.stamp.sec';
info.MatPath{93} = 'point_3.header.stamp.nsec';
info.MatPath{94} = 'point_3.header.frame_id';
info.MatPath{95} = 'point_3.coordinate_frame';
info.MatPath{96} = 'point_3.FRAME_LOCAL_NED';
info.MatPath{97} = 'point_3.FRAME_LOCAL_OFFSET_NED';
info.MatPath{98} = 'point_3.FRAME_BODY_NED';
info.MatPath{99} = 'point_3.FRAME_BODY_OFFSET_NED';
info.MatPath{100} = 'point_3.type_mask';
info.MatPath{101} = 'point_3.IGNORE_PX';
info.MatPath{102} = 'point_3.IGNORE_PY';
info.MatPath{103} = 'point_3.IGNORE_PZ';
info.MatPath{104} = 'point_3.IGNORE_VX';
info.MatPath{105} = 'point_3.IGNORE_VY';
info.MatPath{106} = 'point_3.IGNORE_VZ';
info.MatPath{107} = 'point_3.IGNORE_AFX';
info.MatPath{108} = 'point_3.IGNORE_AFY';
info.MatPath{109} = 'point_3.IGNORE_AFZ';
info.MatPath{110} = 'point_3.FORCE';
info.MatPath{111} = 'point_3.IGNORE_YAW';
info.MatPath{112} = 'point_3.IGNORE_YAW_RATE';
info.MatPath{113} = 'point_3.position';
info.MatPath{114} = 'point_3.position.x';
info.MatPath{115} = 'point_3.position.y';
info.MatPath{116} = 'point_3.position.z';
info.MatPath{117} = 'point_3.velocity';
info.MatPath{118} = 'point_3.velocity.x';
info.MatPath{119} = 'point_3.velocity.y';
info.MatPath{120} = 'point_3.velocity.z';
info.MatPath{121} = 'point_3.acceleration_or_force';
info.MatPath{122} = 'point_3.acceleration_or_force.x';
info.MatPath{123} = 'point_3.acceleration_or_force.y';
info.MatPath{124} = 'point_3.acceleration_or_force.z';
info.MatPath{125} = 'point_3.yaw';
info.MatPath{126} = 'point_3.yaw_rate';
info.MatPath{127} = 'point_4';
info.MatPath{128} = 'point_4.header';
info.MatPath{129} = 'point_4.header.seq';
info.MatPath{130} = 'point_4.header.stamp';
info.MatPath{131} = 'point_4.header.stamp.sec';
info.MatPath{132} = 'point_4.header.stamp.nsec';
info.MatPath{133} = 'point_4.header.frame_id';
info.MatPath{134} = 'point_4.coordinate_frame';
info.MatPath{135} = 'point_4.FRAME_LOCAL_NED';
info.MatPath{136} = 'point_4.FRAME_LOCAL_OFFSET_NED';
info.MatPath{137} = 'point_4.FRAME_BODY_NED';
info.MatPath{138} = 'point_4.FRAME_BODY_OFFSET_NED';
info.MatPath{139} = 'point_4.type_mask';
info.MatPath{140} = 'point_4.IGNORE_PX';
info.MatPath{141} = 'point_4.IGNORE_PY';
info.MatPath{142} = 'point_4.IGNORE_PZ';
info.MatPath{143} = 'point_4.IGNORE_VX';
info.MatPath{144} = 'point_4.IGNORE_VY';
info.MatPath{145} = 'point_4.IGNORE_VZ';
info.MatPath{146} = 'point_4.IGNORE_AFX';
info.MatPath{147} = 'point_4.IGNORE_AFY';
info.MatPath{148} = 'point_4.IGNORE_AFZ';
info.MatPath{149} = 'point_4.FORCE';
info.MatPath{150} = 'point_4.IGNORE_YAW';
info.MatPath{151} = 'point_4.IGNORE_YAW_RATE';
info.MatPath{152} = 'point_4.position';
info.MatPath{153} = 'point_4.position.x';
info.MatPath{154} = 'point_4.position.y';
info.MatPath{155} = 'point_4.position.z';
info.MatPath{156} = 'point_4.velocity';
info.MatPath{157} = 'point_4.velocity.x';
info.MatPath{158} = 'point_4.velocity.y';
info.MatPath{159} = 'point_4.velocity.z';
info.MatPath{160} = 'point_4.acceleration_or_force';
info.MatPath{161} = 'point_4.acceleration_or_force.x';
info.MatPath{162} = 'point_4.acceleration_or_force.y';
info.MatPath{163} = 'point_4.acceleration_or_force.z';
info.MatPath{164} = 'point_4.yaw';
info.MatPath{165} = 'point_4.yaw_rate';
info.MatPath{166} = 'point_5';
info.MatPath{167} = 'point_5.header';
info.MatPath{168} = 'point_5.header.seq';
info.MatPath{169} = 'point_5.header.stamp';
info.MatPath{170} = 'point_5.header.stamp.sec';
info.MatPath{171} = 'point_5.header.stamp.nsec';
info.MatPath{172} = 'point_5.header.frame_id';
info.MatPath{173} = 'point_5.coordinate_frame';
info.MatPath{174} = 'point_5.FRAME_LOCAL_NED';
info.MatPath{175} = 'point_5.FRAME_LOCAL_OFFSET_NED';
info.MatPath{176} = 'point_5.FRAME_BODY_NED';
info.MatPath{177} = 'point_5.FRAME_BODY_OFFSET_NED';
info.MatPath{178} = 'point_5.type_mask';
info.MatPath{179} = 'point_5.IGNORE_PX';
info.MatPath{180} = 'point_5.IGNORE_PY';
info.MatPath{181} = 'point_5.IGNORE_PZ';
info.MatPath{182} = 'point_5.IGNORE_VX';
info.MatPath{183} = 'point_5.IGNORE_VY';
info.MatPath{184} = 'point_5.IGNORE_VZ';
info.MatPath{185} = 'point_5.IGNORE_AFX';
info.MatPath{186} = 'point_5.IGNORE_AFY';
info.MatPath{187} = 'point_5.IGNORE_AFZ';
info.MatPath{188} = 'point_5.FORCE';
info.MatPath{189} = 'point_5.IGNORE_YAW';
info.MatPath{190} = 'point_5.IGNORE_YAW_RATE';
info.MatPath{191} = 'point_5.position';
info.MatPath{192} = 'point_5.position.x';
info.MatPath{193} = 'point_5.position.y';
info.MatPath{194} = 'point_5.position.z';
info.MatPath{195} = 'point_5.velocity';
info.MatPath{196} = 'point_5.velocity.x';
info.MatPath{197} = 'point_5.velocity.y';
info.MatPath{198} = 'point_5.velocity.z';
info.MatPath{199} = 'point_5.acceleration_or_force';
info.MatPath{200} = 'point_5.acceleration_or_force.x';
info.MatPath{201} = 'point_5.acceleration_or_force.y';
info.MatPath{202} = 'point_5.acceleration_or_force.z';
info.MatPath{203} = 'point_5.yaw';
info.MatPath{204} = 'point_5.yaw_rate';
info.MatPath{205} = 'point_valid';
info.MatPath{206} = 'command';
info.MatPath{207} = 'time_horizon';
