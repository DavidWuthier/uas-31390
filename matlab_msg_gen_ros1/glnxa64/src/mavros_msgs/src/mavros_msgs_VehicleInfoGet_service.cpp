// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/VehicleInfoGetRequest
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
#include "mavros_msgs/VehicleInfoGet.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_VehicleInfoGetRequest_common : public MATLABROSMsgInterface<mavros_msgs::VehicleInfoGet::Request> {
  public:
    virtual ~mavros_msgs_msg_VehicleInfoGetRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::VehicleInfoGet::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::VehicleInfoGet::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_VehicleInfoGetRequest_common::copy_from_struct(mavros_msgs::VehicleInfoGet::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //sysid
        const matlab::data::TypedArray<uint8_t> sysid_arr = arr["Sysid"];
        msg->sysid = sysid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Sysid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Sysid' is wrong type; expected a uint8.");
    }
    try {
        //compid
        const matlab::data::TypedArray<uint8_t> compid_arr = arr["Compid"];
        msg->compid = compid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Compid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Compid' is wrong type; expected a uint8.");
    }
    try {
        //get_all
        const matlab::data::TypedArray<bool> get_all_arr = arr["GetAll"];
        msg->get_all = get_all_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'GetAll' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'GetAll' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_VehicleInfoGetRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::VehicleInfoGet::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","GETMYSYSID","GETMYCOMPID","Sysid","Compid","GetAll"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/VehicleInfoGetRequest");
    // GET_MY_SYSID
    auto currentElement_GET_MY_SYSID = (msg + ctr)->GET_MY_SYSID;
    outArray[ctr]["GETMYSYSID"] = factory.createScalar(static_cast<uint8_t>(currentElement_GET_MY_SYSID));
    // GET_MY_COMPID
    auto currentElement_GET_MY_COMPID = (msg + ctr)->GET_MY_COMPID;
    outArray[ctr]["GETMYCOMPID"] = factory.createScalar(static_cast<uint8_t>(currentElement_GET_MY_COMPID));
    // sysid
    auto currentElement_sysid = (msg + ctr)->sysid;
    outArray[ctr]["Sysid"] = factory.createScalar(currentElement_sysid);
    // compid
    auto currentElement_compid = (msg + ctr)->compid;
    outArray[ctr]["Compid"] = factory.createScalar(currentElement_compid);
    // get_all
    auto currentElement_get_all = (msg + ctr)->get_all;
    outArray[ctr]["GetAll"] = factory.createScalar(static_cast<bool>(currentElement_get_all));
    }
    return std::move(outArray);
  }
COMMON_FW_DECLARE(mavros_msgs_msg_VehicleInfo_common, mavros_msgs::VehicleInfo)
class MAVROS_MSGS_EXPORT mavros_msgs_msg_VehicleInfoGetResponse_common : public MATLABROSMsgInterface<mavros_msgs::VehicleInfoGet::Response> {
  public:
    virtual ~mavros_msgs_msg_VehicleInfoGetResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::VehicleInfoGet::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::VehicleInfoGet::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_VehicleInfoGetResponse_common::copy_from_struct(mavros_msgs::VehicleInfoGet::Response* msg, const matlab::data::Struct& arr,
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
        //vehicles
        const matlab::data::StructArray vehicles_arr = arr["Vehicles"];
        for (auto _vehiclesarr : vehicles_arr) {
        	mavros_msgs::VehicleInfo _val;
        static mavros_msgs_msg_VehicleInfo_common obj_vehicles;
        	obj_vehicles.copy_from_struct(&_val,_vehiclesarr,loader);
        	msg->vehicles.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Vehicles' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Vehicles' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_VehicleInfoGetResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::VehicleInfoGet::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","Vehicles"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/VehicleInfoGetResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // vehicles
    auto currentElement_vehicles = (msg + ctr)->vehicles;
    static mavros_msgs_msg_VehicleInfo_common obj_vehicles;
    	outArray[ctr]["Vehicles"] = obj_vehicles.get_arr(factory,&currentElement_vehicles[0],loader,currentElement_vehicles.size());
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_VehicleInfoGet_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_VehicleInfoGet_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_VehicleInfoGet_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::VehicleInfoGet::Request,mavros_msgs_msg_VehicleInfoGetRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::VehicleInfoGet::Response,mavros_msgs_msg_VehicleInfoGetResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_VehicleInfoGet_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::VehicleInfoGet::Request,mavros_msgs::VehicleInfoGet::Request::ConstPtr,mavros_msgs_msg_VehicleInfoGetRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::VehicleInfoGet::Response,mavros_msgs::VehicleInfoGet::Response::ConstPtr,mavros_msgs_msg_VehicleInfoGetResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_VehicleInfoGet_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::VehicleInfoGet::Request,mavros_msgs::VehicleInfoGet::Response,mavros_msgs_msg_VehicleInfoGetRequest_common,mavros_msgs_msg_VehicleInfoGetResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_VehicleInfoGet_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::VehicleInfoGet,mavros_msgs::VehicleInfoGet::Request,mavros_msgs::VehicleInfoGet::Response,mavros_msgs_msg_VehicleInfoGetRequest_common,mavros_msgs_msg_VehicleInfoGetResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_VehicleInfoGetRequest_common, MATLABROSMsgInterface<mavros_msgs::VehicleInfoGet::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_VehicleInfoGetResponse_common, MATLABROSMsgInterface<mavros_msgs::VehicleInfoGet::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_VehicleInfoGet_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
