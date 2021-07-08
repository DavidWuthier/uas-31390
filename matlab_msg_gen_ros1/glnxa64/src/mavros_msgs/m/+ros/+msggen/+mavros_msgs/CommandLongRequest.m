
classdef CommandLongRequest < ros.Message
    %CommandLongRequest MATLAB implementation of mavros_msgs/CommandLongRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/CommandLongRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '0ad16dd8ca2c8f209bfc6c32c71c0dd8' % The MD5 Checksum of the message definition
        PropertyList = { 'Broadcast' 'Command' 'Confirmation' 'Param1' 'Param2' 'Param3' 'Param4' 'Param5' 'Param6' 'Param7' } % List of non-constant message properties
        ROSPropertyList = { 'broadcast' 'command' 'confirmation' 'param1' 'param2' 'param3' 'param4' 'param5' 'param6' 'param7' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Broadcast
        Command
        Confirmation
        Param1
        Param2
        Param3
        Param4
        Param5
        Param6
        Param7
    end
    methods
        function set.Broadcast(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandLongRequest', 'Broadcast');
            obj.Broadcast = logical(val);
        end
        function set.Command(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandLongRequest', 'Command');
            obj.Command = uint16(val);
        end
        function set.Confirmation(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandLongRequest', 'Confirmation');
            obj.Confirmation = uint8(val);
        end
        function set.Param1(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandLongRequest', 'Param1');
            obj.Param1 = single(val);
        end
        function set.Param2(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandLongRequest', 'Param2');
            obj.Param2 = single(val);
        end
        function set.Param3(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandLongRequest', 'Param3');
            obj.Param3 = single(val);
        end
        function set.Param4(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandLongRequest', 'Param4');
            obj.Param4 = single(val);
        end
        function set.Param5(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandLongRequest', 'Param5');
            obj.Param5 = single(val);
        end
        function set.Param6(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandLongRequest', 'Param6');
            obj.Param6 = single(val);
        end
        function set.Param7(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandLongRequest', 'Param7');
            obj.Param7 = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.CommandLongRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.CommandLongRequest(strObj);
        end
    end
end
