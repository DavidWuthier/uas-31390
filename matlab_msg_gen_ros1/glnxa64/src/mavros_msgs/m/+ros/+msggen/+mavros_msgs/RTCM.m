
classdef RTCM < ros.Message
    %RTCM MATLAB implementation of mavros_msgs/RTCM
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/RTCM' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '8903b686ebe5db3477e83c6d0bb149f8' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Data' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'data' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Data
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'RTCM', 'Header')
            obj.Header = val;
        end
        function set.Data(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint8.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'RTCM', 'Data');
            obj.Data = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.RTCM.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.RTCM(strObj);
        end
    end
end
