// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CommandHomeRequest
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
#include "mavros_msgs/CommandHome.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandHomeRequest_common : public MATLABROSMsgInterface<mavros_msgs::CommandHome::Request> {
  public:
    virtual ~mavros_msgs_msg_CommandHomeRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandHome::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandHome::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandHomeRequest_common::copy_from_struct(mavros_msgs::CommandHome::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //current_gps
        const matlab::data::TypedArray<bool> current_gps_arr = arr["CurrentGps"];
        msg->current_gps = current_gps_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CurrentGps' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CurrentGps' is wrong type; expected a logical.");
    }
    try {
        //yaw
        const matlab::data::TypedArray<float> yaw_arr = arr["Yaw"];
        msg->yaw = yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Yaw' is wrong type; expected a single.");
    }
    try {
        //latitude
        const matlab::data::TypedArray<float> latitude_arr = arr["Latitude"];
        msg->latitude = latitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Latitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Latitude' is wrong type; expected a single.");
    }
    try {
        //longitude
        const matlab::data::TypedArray<float> longitude_arr = arr["Longitude"];
        msg->longitude = longitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Longitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Longitude' is wrong type; expected a single.");
    }
    try {
        //altitude
        const matlab::data::TypedArray<float> altitude_arr = arr["Altitude"];
        msg->altitude = altitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Altitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Altitude' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_CommandHomeRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandHome::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","CurrentGps","Yaw","Latitude","Longitude","Altitude"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandHomeRequest");
    // current_gps
    auto currentElement_current_gps = (msg + ctr)->current_gps;
    outArray[ctr]["CurrentGps"] = factory.createScalar(static_cast<bool>(currentElement_current_gps));
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["Yaw"] = factory.createScalar(currentElement_yaw);
    // latitude
    auto currentElement_latitude = (msg + ctr)->latitude;
    outArray[ctr]["Latitude"] = factory.createScalar(currentElement_latitude);
    // longitude
    auto currentElement_longitude = (msg + ctr)->longitude;
    outArray[ctr]["Longitude"] = factory.createScalar(currentElement_longitude);
    // altitude
    auto currentElement_altitude = (msg + ctr)->altitude;
    outArray[ctr]["Altitude"] = factory.createScalar(currentElement_altitude);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CommandHomeResponse_common : public MATLABROSMsgInterface<mavros_msgs::CommandHome::Response> {
  public:
    virtual ~mavros_msgs_msg_CommandHomeResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::CommandHome::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CommandHome::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CommandHomeResponse_common::copy_from_struct(mavros_msgs::CommandHome::Response* msg, const matlab::data::Struct& arr,
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
        //result
        const matlab::data::TypedArray<uint8_t> result_arr = arr["Result"];
        msg->result = result_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Result' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Result' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_CommandHomeResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::CommandHome::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","Result"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CommandHomeResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // result
    auto currentElement_result = (msg + ctr)->result;
    outArray[ctr]["Result"] = factory.createScalar(currentElement_result);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_CommandHome_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_CommandHome_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_CommandHome_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::CommandHome::Request,mavros_msgs_msg_CommandHomeRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::CommandHome::Response,mavros_msgs_msg_CommandHomeResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_CommandHome_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandHome::Request,mavros_msgs::CommandHome::Request::ConstPtr,mavros_msgs_msg_CommandHomeRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::CommandHome::Response,mavros_msgs::CommandHome::Response::ConstPtr,mavros_msgs_msg_CommandHomeResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_CommandHome_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::CommandHome::Request,mavros_msgs::CommandHome::Response,mavros_msgs_msg_CommandHomeRequest_common,mavros_msgs_msg_CommandHomeResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_CommandHome_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::CommandHome,mavros_msgs::CommandHome::Request,mavros_msgs::CommandHome::Response,mavros_msgs_msg_CommandHomeRequest_common,mavros_msgs_msg_CommandHomeResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandHomeRequest_common, MATLABROSMsgInterface<mavros_msgs::CommandHome::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CommandHomeResponse_common, MATLABROSMsgInterface<mavros_msgs::CommandHome::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_CommandHome_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
