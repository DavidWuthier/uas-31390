// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/WaypointPushRequest
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
#include "mavros_msgs/WaypointPush.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
COMMON_FW_DECLARE(mavros_msgs_msg_Waypoint_common, mavros_msgs::Waypoint)
class MAVROS_MSGS_EXPORT mavros_msgs_msg_WaypointPushRequest_common : public MATLABROSMsgInterface<mavros_msgs::WaypointPush::Request> {
  public:
    virtual ~mavros_msgs_msg_WaypointPushRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::WaypointPush::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::WaypointPush::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_WaypointPushRequest_common::copy_from_struct(mavros_msgs::WaypointPush::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //start_index
        const matlab::data::TypedArray<uint16_t> start_index_arr = arr["StartIndex"];
        msg->start_index = start_index_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'StartIndex' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'StartIndex' is wrong type; expected a uint16.");
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
  MDArray_T mavros_msgs_msg_WaypointPushRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::WaypointPush::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","StartIndex","Waypoints"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/WaypointPushRequest");
    // start_index
    auto currentElement_start_index = (msg + ctr)->start_index;
    outArray[ctr]["StartIndex"] = factory.createScalar(currentElement_start_index);
    // waypoints
    auto currentElement_waypoints = (msg + ctr)->waypoints;
    static mavros_msgs_msg_Waypoint_common obj_waypoints;
    	outArray[ctr]["Waypoints"] = obj_waypoints.get_arr(factory,&currentElement_waypoints[0],loader,currentElement_waypoints.size());
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_WaypointPushResponse_common : public MATLABROSMsgInterface<mavros_msgs::WaypointPush::Response> {
  public:
    virtual ~mavros_msgs_msg_WaypointPushResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::WaypointPush::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::WaypointPush::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_WaypointPushResponse_common::copy_from_struct(mavros_msgs::WaypointPush::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr["Success"];
        msg->success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Success' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Success' is wrong type; expected a logical.");
    }
    try {
        //wp_transfered
        const matlab::data::TypedArray<uint32_t> wp_transfered_arr = arr["WpTransfered"];
        msg->wp_transfered = wp_transfered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'WpTransfered' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'WpTransfered' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_WaypointPushResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::WaypointPush::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","WpTransfered"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/WaypointPushResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // wp_transfered
    auto currentElement_wp_transfered = (msg + ctr)->wp_transfered;
    outArray[ctr]["WpTransfered"] = factory.createScalar(currentElement_wp_transfered);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_WaypointPush_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_WaypointPush_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_WaypointPush_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::WaypointPush::Request,mavros_msgs_msg_WaypointPushRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::WaypointPush::Response,mavros_msgs_msg_WaypointPushResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_WaypointPush_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::WaypointPush::Request,mavros_msgs::WaypointPush::Request::ConstPtr,mavros_msgs_msg_WaypointPushRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::WaypointPush::Response,mavros_msgs::WaypointPush::Response::ConstPtr,mavros_msgs_msg_WaypointPushResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_WaypointPush_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::WaypointPush::Request,mavros_msgs::WaypointPush::Response,mavros_msgs_msg_WaypointPushRequest_common,mavros_msgs_msg_WaypointPushResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_WaypointPush_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::WaypointPush,mavros_msgs::WaypointPush::Request,mavros_msgs::WaypointPush::Response,mavros_msgs_msg_WaypointPushRequest_common,mavros_msgs_msg_WaypointPushResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_WaypointPushRequest_common, MATLABROSMsgInterface<mavros_msgs::WaypointPush::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_WaypointPushResponse_common, MATLABROSMsgInterface<mavros_msgs::WaypointPush::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_WaypointPush_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
