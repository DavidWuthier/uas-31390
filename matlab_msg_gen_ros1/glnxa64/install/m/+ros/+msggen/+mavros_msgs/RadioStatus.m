
classdef RadioStatus < ros.Message
    %RadioStatus MATLAB implementation of mavros_msgs/RadioStatus
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/RadioStatus' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '04e4a879bb2687140da50a1a821e2190' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Rssi' 'Remrssi' 'Txbuf' 'Noise' 'Remnoise' 'Rxerrors' 'Fixed' 'RssiDbm' 'RemrssiDbm' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'rssi' 'remrssi' 'txbuf' 'noise' 'remnoise' 'rxerrors' 'fixed' 'rssi_dbm' 'remrssi_dbm' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
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
        Header
        Rssi
        Remrssi
        Txbuf
        Noise
        Remnoise
        Rxerrors
        Fixed
        RssiDbm
        RemrssiDbm
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'RadioStatus', 'Header')
            obj.Header = val;
        end
        function set.Rssi(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RadioStatus', 'Rssi');
            obj.Rssi = uint8(val);
        end
        function set.Remrssi(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RadioStatus', 'Remrssi');
            obj.Remrssi = uint8(val);
        end
        function set.Txbuf(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RadioStatus', 'Txbuf');
            obj.Txbuf = uint8(val);
        end
        function set.Noise(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RadioStatus', 'Noise');
            obj.Noise = uint8(val);
        end
        function set.Remnoise(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RadioStatus', 'Remnoise');
            obj.Remnoise = uint8(val);
        end
        function set.Rxerrors(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RadioStatus', 'Rxerrors');
            obj.Rxerrors = uint16(val);
        end
        function set.Fixed(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RadioStatus', 'Fixed');
            obj.Fixed = uint16(val);
        end
        function set.RssiDbm(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RadioStatus', 'RssiDbm');
            obj.RssiDbm = single(val);
        end
        function set.RemrssiDbm(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RadioStatus', 'RemrssiDbm');
            obj.RemrssiDbm = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.RadioStatus.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.RadioStatus(strObj);
        end
    end
end
