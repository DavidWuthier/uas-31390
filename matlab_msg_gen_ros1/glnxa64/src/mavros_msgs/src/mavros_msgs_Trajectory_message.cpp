// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/Trajectory
#include "boost/date_time.hpp"
#include "boost/shared_array.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4267)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "ros/ros.h"
#include "mavros_msgs/Trajectory.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
COMMON_FW_DECLARE(mavros_msgs_msg_PositionTarget_common, mavros_msgs::PositionTarget)
class MAVROS_MSGS_EXPORT mavros_msgs_msg_Trajectory_common : public MATLABROSMsgInterface<mavros_msgs::Trajectory> {
  public:
    virtual ~mavros_msgs_msg_Trajectory_common(){}
    virtual void copy_from_struct(mavros_msgs::Trajectory* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::Trajectory* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_Trajectory_common::copy_from_struct(mavros_msgs::Trajectory* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr["Header"];
        static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
        msgClassPtr_header->copy_from_struct(&msg->header,header_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Header' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Header' is wrong type; expected a struct.");
    }
    try {
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr["Type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Type' is wrong type; expected a uint8.");
    }
    try {
        //point_1
        const matlab::data::StructArray point_1_arr = arr["Point1"];
        static mavros_msgs_msg_PositionTarget_common obj_point_1;
        obj_point_1.copy_from_struct(&msg->point_1,point_1_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Point1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Point1' is wrong type; expected a struct.");
    }
    try {
        //point_2
        const matlab::data::StructArray point_2_arr = arr["Point2"];
        static mavros_msgs_msg_PositionTarget_common obj_point_2;
        obj_point_2.copy_from_struct(&msg->point_2,point_2_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Point2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Point2' is wrong type; expected a struct.");
    }
    try {
        //point_3
        const matlab::data::StructArray point_3_arr = arr["Point3"];
        static mavros_msgs_msg_PositionTarget_common obj_point_3;
        obj_point_3.copy_from_struct(&msg->point_3,point_3_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Point3' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Point3' is wrong type; expected a struct.");
    }
    try {
        //point_4
        const matlab::data::StructArray point_4_arr = arr["Point4"];
        static mavros_msgs_msg_PositionTarget_common obj_point_4;
        obj_point_4.copy_from_struct(&msg->point_4,point_4_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Point4' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Point4' is wrong type; expected a struct.");
    }
    try {
        //point_5
        const matlab::data::StructArray point_5_arr = arr["Point5"];
        static mavros_msgs_msg_PositionTarget_common obj_point_5;
        obj_point_5.copy_from_struct(&msg->point_5,point_5_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Point5' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Point5' is wrong type; expected a struct.");
    }
    try {
        //point_valid
        const matlab::data::TypedArray<uint8_t> point_valid_arr = arr["PointValid"];
        size_t nelem = 5;
        	std::copy(point_valid_arr.begin(), point_valid_arr.begin()+nelem, msg->point_valid.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PointValid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'PointValid' is wrong type; expected a uint8.");
    }
    try {
        //command
        const matlab::data::TypedArray<uint16_t> command_arr = arr["Command"];
        size_t nelem = 5;
        	std::copy(command_arr.begin(), command_arr.begin()+nelem, msg->command.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Command' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Command' is wrong type; expected a uint16.");
    }
    try {
        //time_horizon
        const matlab::data::TypedArray<float> time_horizon_arr = arr["TimeHorizon"];
        size_t nelem = 5;
        	std::copy(time_horizon_arr.begin(), time_horizon_arr.begin()+nelem, msg->time_horizon.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TimeHorizon' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TimeHorizon' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_Trajectory_common::get_arr(MDFactory_T& factory, const mavros_msgs::Trajectory* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Type","MAVTRAJECTORYREPRESENTATIONWAYPOINTS","MAVTRAJECTORYREPRESENTATIONBEZIER","Point1","Point2","Point3","Point4","Point5","PointValid","Command","TimeHorizon"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/Trajectory");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["Type"] = factory.createScalar(currentElement_type);
    // MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS
    auto currentElement_MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS = (msg + ctr)->MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS;
    outArray[ctr]["MAVTRAJECTORYREPRESENTATIONWAYPOINTS"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS));
    // MAV_TRAJECTORY_REPRESENTATION_BEZIER
    auto currentElement_MAV_TRAJECTORY_REPRESENTATION_BEZIER = (msg + ctr)->MAV_TRAJECTORY_REPRESENTATION_BEZIER;
    outArray[ctr]["MAVTRAJECTORYREPRESENTATIONBEZIER"] = factory.createScalar(static_cast<uint8_t>(currentElement_MAV_TRAJECTORY_REPRESENTATION_BEZIER));
    // point_1
    auto currentElement_point_1 = (msg + ctr)->point_1;
    static mavros_msgs_msg_PositionTarget_common obj_point_1;
    outArray[ctr]["Point1"] = obj_point_1.get_arr(factory, &currentElement_point_1, loader);
    // point_2
    auto currentElement_point_2 = (msg + ctr)->point_2;
    static mavros_msgs_msg_PositionTarget_common obj_point_2;
    outArray[ctr]["Point2"] = obj_point_2.get_arr(factory, &currentElement_point_2, loader);
    // point_3
    auto currentElement_point_3 = (msg + ctr)->point_3;
    static mavros_msgs_msg_PositionTarget_common obj_point_3;
    outArray[ctr]["Point3"] = obj_point_3.get_arr(factory, &currentElement_point_3, loader);
    // point_4
    auto currentElement_point_4 = (msg + ctr)->point_4;
    static mavros_msgs_msg_PositionTarget_common obj_point_4;
    outArray[ctr]["Point4"] = obj_point_4.get_arr(factory, &currentElement_point_4, loader);
    // point_5
    auto currentElement_point_5 = (msg + ctr)->point_5;
    static mavros_msgs_msg_PositionTarget_common obj_point_5;
    outArray[ctr]["Point5"] = obj_point_5.get_arr(factory, &currentElement_point_5, loader);
    // point_valid
    auto currentElement_point_valid = (msg + ctr)->point_valid;
    outArray[ctr]["PointValid"] = factory.createArray<mavros_msgs::Trajectory::_point_valid_type::const_iterator, uint8_t>({currentElement_point_valid.size(),1}, currentElement_point_valid.begin(), currentElement_point_valid.end());
    // command
    auto currentElement_command = (msg + ctr)->command;
    outArray[ctr]["Command"] = factory.createArray<mavros_msgs::Trajectory::_command_type::const_iterator, uint16_t>({currentElement_command.size(),1}, currentElement_command.begin(), currentElement_command.end());
    // time_horizon
    auto currentElement_time_horizon = (msg + ctr)->time_horizon;
    outArray[ctr]["TimeHorizon"] = factory.createArray<mavros_msgs::Trajectory::_time_horizon_type::const_iterator, float>({currentElement_time_horizon.size(),1}, currentElement_time_horizon.begin(), currentElement_time_horizon.end());
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_Trajectory_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_Trajectory_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_Trajectory_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::Trajectory,mavros_msgs_msg_Trajectory_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_Trajectory_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::Trajectory,mavros_msgs::Trajectory::ConstPtr,mavros_msgs_msg_Trajectory_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_Trajectory_common, MATLABROSMsgInterface<mavros_msgs::Trajectory>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_Trajectory_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1