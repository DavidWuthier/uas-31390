
classdef StatusText < ros.Message
    %StatusText MATLAB implementation of mavros_msgs/StatusText
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/StatusText' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '6cfd33cd09e4abf5841d7be3c770a969' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Severity' 'Text' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'severity' 'text' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        EMERGENCY = uint8(0)
        ALERT = uint8(1)
        CRITICAL = uint8(2)
        ERROR = uint8(3)
        WARNING = uint8(4)
        NOTICE = uint8(5)
        INFO = uint8(6)
        DEBUG = uint8(7)
    end
    properties
        Header
        Severity
        Text
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'StatusText', 'Header')
            obj.Header = val;
        end
        function set.Severity(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'StatusText', 'Severity');
            obj.Severity = uint8(val);
        end
        function set.Text(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'StatusText', 'Text');
            obj.Text = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.StatusText.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.StatusText(strObj);
        end
    end
end
