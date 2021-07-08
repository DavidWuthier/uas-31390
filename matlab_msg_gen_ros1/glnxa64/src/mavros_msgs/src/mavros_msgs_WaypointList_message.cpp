// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/WaypointList
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
#include "mavros_msgs/WaypointList.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
COMMON_FW_DECLARE(mavros_msgs_msg_Waypoint_common, mavros_msgs::Waypoint)
class MAVROS_MSGS_EXPORT mavros_msgs_msg_WaypointList_common : public MATLABROSMsgInterface<mavros_msgs::WaypointList> {
  public:
    virtual ~mavros_msgs_msg_WaypointList_common(){}
    virtual void copy_from_struct(mavros_msgs::WaypointList* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::WaypointList* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_WaypointList_common::copy_from_struct(mavros_msgs::WaypointList* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //current_seq
        const matlab::data::TypedArray<uint16_t> current_seq_arr = arr["CurrentSeq"];
        msg->current_seq = current_seq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CurrentSeq' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CurrentSeq' is wrong type; expected a uint16.");
    }
    try {
        //waypoints
        const matlab::data::StructArray waypoints_arr = arr["Waypoints"];
        for (auto _waypointsarr : waypoints_arr) {
        	mavros_msgs::Waypoint _val;
        static mavros_msgs_msg_Waypoint_common obj_waypoints;
        	obj_waypoints.copy_from_struct(&_val,_waypointsarr,loader);
        	msg->waypoints.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Waypoints' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Waypoints' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_WaypointList_common::get_arr(MDFactory_T& factory, const mavros_msgs::WaypointList* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","CurrentSeq","Waypoints"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/WaypointList");
    // current_seq
    auto currentElement_current_seq = (msg + ctr)->current_seq;
    outArray[ctr]["CurrentSeq"] = factory.createScalar(currentElement_current_seq);
    // waypoints
    auto currentElement_waypoints = (msg + ctr)->waypoints;
    static mavros_msgs_msg_Waypoint_common obj_waypoints;
    	outArray[ctr]["Waypoints"] = obj_waypoints.get_arr(factory,&currentElement_waypoints[0],loader,currentElement_waypoints.size());
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_WaypointList_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_WaypointList_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_WaypointList_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::WaypointList,mavros_msgs_msg_WaypointList_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_WaypointList_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::WaypointList,mavros_msgs::WaypointList::ConstPtr,mavros_msgs_msg_WaypointList_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_WaypointList_common, MATLABROSMsgInterface<mavros_msgs::WaypointList>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_WaypointList_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1