
classdef HomePosition < ros.Message
    %HomePosition MATLAB implementation of mavros_msgs/HomePosition
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/HomePosition' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c1167922de8c97acdb0ec714c1dba774' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Geo' 'Position' 'Orientation' 'Approach' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'geo' 'position' 'orientation' 'approach' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.geographic_msgs.GeoPoint' ...
            'ros.msggen.geometry_msgs.Point' ...
            'ros.msg.geometry_msgs.Quaternion' ...
            'ros.msggen.geometry_msgs.Vector3' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Geo
        Position
        Orientation
        Approach
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'HomePosition', 'Header')
            obj.Header = val;
        end
        function set.Geo(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geographic_msgs.GeoPoint'};
            validateattributes(val, validClasses, validAttributes, 'HomePosition', 'Geo')
            obj.Geo = val;
        end
        function set.Position(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Point'};
            validateattributes(val, validClasses, validAttributes, 'HomePosition', 'Position')
            obj.Position = val;
        end
        function set.Orientation(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.geometry_msgs.Quaternion'};
            validateattributes(val, validClasses, validAttributes, 'HomePosition', 'Orientation')
            obj.Orientation = val;
        end
        function set.Approach(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Vector3'};
            validateattributes(val, validClasses, validAttributes, 'HomePosition', 'Approach')
            obj.Approach = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.HomePosition.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.HomePosition(strObj);
        end
    end
end
