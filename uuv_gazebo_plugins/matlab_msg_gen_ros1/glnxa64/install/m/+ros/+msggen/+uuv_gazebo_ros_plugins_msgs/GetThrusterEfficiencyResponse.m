
classdef GetThrusterEfficiencyResponse < ros.Message
    %GetThrusterEfficiencyResponse MATLAB implementation of uuv_gazebo_ros_plugins_msgs/GetThrusterEfficiencyResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'uuv_gazebo_ros_plugins_msgs/GetThrusterEfficiencyResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'b80ec71e671b93e4cc403df1ac4c8a86' % The MD5 Checksum of the message definition
        PropertyList = { 'Efficiency' } % List of non-constant message properties
        ROSPropertyList = { 'efficiency' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Efficiency
    end
    methods
        function set.Efficiency(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GetThrusterEfficiencyResponse', 'Efficiency');
            obj.Efficiency = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.uuv_gazebo_ros_plugins_msgs.GetThrusterEfficiencyResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.uuv_gazebo_ros_plugins_msgs.GetThrusterEfficiencyResponse(strObj);
        end
    end
end
