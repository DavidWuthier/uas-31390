
classdef FileOpenResponse < ros.Message
    %FileOpenResponse MATLAB implementation of mavros_msgs/FileOpenResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/FileOpenResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '0ff9b1d5b96094ef5adccef61431a04f' % The MD5 Checksum of the message definition
        PropertyList = { 'Size' 'Success' 'RErrno' } % List of non-constant message properties
        ROSPropertyList = { 'size' 'success' 'r_errno' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Size
        Success
        RErrno
    end
    methods
        function set.Size(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FileOpenResponse', 'Size');
            obj.Size = uint32(val);
        end
        function set.Success(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FileOpenResponse', 'Success');
            obj.Success = logical(val);
        end
        function set.RErrno(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FileOpenResponse', 'RErrno');
            obj.RErrno = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.FileOpenResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.FileOpenResponse(strObj);
        end
    end
end
