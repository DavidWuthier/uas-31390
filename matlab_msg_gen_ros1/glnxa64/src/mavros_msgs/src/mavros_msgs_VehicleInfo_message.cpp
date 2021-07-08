// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/VehicleInfo
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
#include "mavros_msgs/VehicleInfo.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_VehicleInfo_common : public MATLABROSMsgInterface<mavros_msgs::VehicleInfo> {
  public:
    virtual ~mavros_msgs_msg_VehicleInfo_common(){}
    virtual void copy_from_struct(mavros_msgs::VehicleInfo* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::VehicleInfo* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_VehicleInfo_common::copy_from_struct(mavros_msgs::VehicleInfo* msg, const matlab::data::Struct& arr,
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
        //available_info
        const matlab::data::TypedArray<uint8_t> available_info_arr = arr["AvailableInfo"];
        msg->available_info = available_info_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'AvailableInfo' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'AvailableInfo' is wrong type; expected a uint8.");
    }
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
        //autopilot
        const matlab::data::TypedArray<uint8_t> autopilot_arr = arr["Autopilot"];
        msg->autopilot = autopilot_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Autopilot' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Autopilot' is wrong type; expected a uint8.");
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
        //system_status
        const matlab::data::TypedArray<uint8_t> system_status_arr = arr["SystemStatus"];
        msg->system_status = system_status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'SystemStatus' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'SystemStatus' is wrong type; expected a uint8.");
    }
    try {
        //base_mode
        const matlab::data::TypedArray<uint8_t> base_mode_arr = arr["BaseMode"];
        msg->base_mode = base_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BaseMode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BaseMode' is wrong type; expected a uint8.");
    }
    try {
        //custom_mode
        const matlab::data::TypedArray<uint32_t> custom_mode_arr = arr["CustomMode"];
        msg->custom_mode = custom_mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CustomMode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'CustomMode' is wrong type; expected a uint32.");
    }
    try {
        //mode
        const matlab::data::CharArray mode_arr = arr["Mode"];
        msg->mode = mode_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Mode' is wrong type; expected a string.");
    }
    try {
        //mode_id
        const matlab::data::TypedArray<uint32_t> mode_id_arr = arr["ModeId"];
        msg->mode_id = mode_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ModeId' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ModeId' is wrong type; expected a uint32.");
    }
    try {
        //capabilities
        const matlab::data::TypedArray<uint64_t> capabilities_arr = arr["Capabilities"];
        msg->capabilities = capabilities_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Capabilities' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Capabilities' is wrong type; expected a uint64.");
    }
    try {
        //flight_sw_version
        const matlab::data::TypedArray<uint32_t> flight_sw_version_arr = arr["FlightSwVersion"];
        msg->flight_sw_version = flight_sw_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FlightSwVersion' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FlightSwVersion' is wrong type; expected a uint32.");
    }
    try {
        //middleware_sw_version
        const matlab::data::TypedArray<uint32_t> middleware_sw_version_arr = arr["MiddlewareSwVersion"];
        msg->middleware_sw_version = middleware_sw_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'MiddlewareSwVersion' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'MiddlewareSwVersion' is wrong type; expected a uint32.");
    }
    try {
        //os_sw_version
        const matlab::data::TypedArray<uint32_t> os_sw_version_arr = arr["OsSwVersion"];
        msg->os_sw_version = os_sw_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'OsSwVersion' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'OsSwVersion' is wrong type; expected a uint32.");
    }
    try {
        //board_version
        const matlab::data::TypedArray<uint32_t> board_version_arr = arr["BoardVersion"];
        msg->board_version = board_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BoardVersion' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BoardVersion' is wrong type; expected a uint32.");
    }
    try {
        //flight_custom_version
        const matlab::data::CharArray flight_custom_version_arr = arr["FlightCustomVersion"];
        msg->flight_custom_version = flight_custom_version_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FlightCustomVersion' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FlightCustomVersion' is wrong type; expected a string.");
    }
    try {
        //vendor_id
        const matlab::data::TypedArray<uint16_t> vendor_id_arr = arr["VendorId"];
        msg->vendor_id = vendor_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'VendorId' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'VendorId' is wrong type; expected a uint16.");
    }
    try {
        //product_id
        const matlab::data::TypedArray<uint16_t> product_id_arr = arr["ProductId"];
        msg->product_id = product_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ProductId' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ProductId' is wrong type; expected a uint16.");
    }
    try {
        //uid
        const matlab::data::TypedArray<uint64_t> uid_arr = arr["Uid"];
        msg->uid = uid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Uid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Uid' is wrong type; expected a uint64.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_VehicleInfo_common::get_arr(MDFactory_T& factory, const mavros_msgs::VehicleInfo* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","HAVEINFOHEARTBEAT","HAVEINFOAUTOPILOTVERSION","AvailableInfo","Sysid","Compid","Autopilot","Type","SystemStatus","BaseMode","CustomMode","Mode","ModeId","Capabilities","FlightSwVersion","MiddlewareSwVersion","OsSwVersion","BoardVersion","FlightCustomVersion","VendorId","ProductId","Uid"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/VehicleInfo");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // HAVE_INFO_HEARTBEAT
    auto currentElement_HAVE_INFO_HEARTBEAT = (msg + ctr)->HAVE_INFO_HEARTBEAT;
    outArray[ctr]["HAVEINFOHEARTBEAT"] = factory.createScalar(static_cast<uint8_t>(currentElement_HAVE_INFO_HEARTBEAT));
    // HAVE_INFO_AUTOPILOT_VERSION
    auto currentElement_HAVE_INFO_AUTOPILOT_VERSION = (msg + ctr)->HAVE_INFO_AUTOPILOT_VERSION;
    outArray[ctr]["HAVEINFOAUTOPILOTVERSION"] = factory.createScalar(static_cast<uint8_t>(currentElement_HAVE_INFO_AUTOPILOT_VERSION));
    // available_info
    auto currentElement_available_info = (msg + ctr)->available_info;
    outArray[ctr]["AvailableInfo"] = factory.createScalar(currentElement_available_info);
    // sysid
    auto currentElement_sysid = (msg + ctr)->sysid;
    outArray[ctr]["Sysid"] = factory.createScalar(currentElement_sysid);
    // compid
    auto currentElement_compid = (msg + ctr)->compid;
    outArray[ctr]["Compid"] = factory.createScalar(currentElement_compid);
    // autopilot
    auto currentElement_autopilot = (msg + ctr)->autopilot;
    outArray[ctr]["Autopilot"] = factory.createScalar(currentElement_autopilot);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["Type"] = factory.createScalar(currentElement_type);
    // system_status
    auto currentElement_system_status = (msg + ctr)->system_status;
    outArray[ctr]["SystemStatus"] = factory.createScalar(currentElement_system_status);
    // base_mode
    auto currentElement_base_mode = (msg + ctr)->base_mode;
    outArray[ctr]["BaseMode"] = factory.createScalar(currentElement_base_mode);
    // custom_mode
    auto currentElement_custom_mode = (msg + ctr)->custom_mode;
    outArray[ctr]["CustomMode"] = factory.createScalar(currentElement_custom_mode);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["Mode"] = factory.createCharArray(currentElement_mode);
    // mode_id
    auto currentElement_mode_id = (msg + ctr)->mode_id;
    outArray[ctr]["ModeId"] = factory.createScalar(currentElement_mode_id);
    // capabilities
    auto currentElement_capabilities = (msg + ctr)->capabilities;
    outArray[ctr]["Capabilities"] = factory.createScalar(currentElement_capabilities);
    // flight_sw_version
    auto currentElement_flight_sw_version = (msg + ctr)->flight_sw_version;
    outArray[ctr]["FlightSwVersion"] = factory.createScalar(currentElement_flight_sw_version);
    // middleware_sw_version
    auto currentElement_middleware_sw_version = (msg + ctr)->middleware_sw_version;
    outArray[ctr]["MiddlewareSwVersion"] = factory.createScalar(currentElement_middleware_sw_version);
    // os_sw_version
    auto currentElement_os_sw_version = (msg + ctr)->os_sw_version;
    outArray[ctr]["OsSwVersion"] = factory.createScalar(currentElement_os_sw_version);
    // board_version
    auto currentElement_board_version = (msg + ctr)->board_version;
    outArray[ctr]["BoardVersion"] = factory.createScalar(currentElement_board_version);
    // flight_custom_version
    auto currentElement_flight_custom_version = (msg + ctr)->flight_custom_version;
    outArray[ctr]["FlightCustomVersion"] = factory.createCharArray(currentElement_flight_custom_version);
    // vendor_id
    auto currentElement_vendor_id = (msg + ctr)->vendor_id;
    outArray[ctr]["VendorId"] = factory.createScalar(currentElement_vendor_id);
    // product_id
    auto currentElement_product_id = (msg + ctr)->product_id;
    outArray[ctr]["ProductId"] = factory.createScalar(currentElement_product_id);
    // uid
    auto currentElement_uid = (msg + ctr)->uid;
    outArray[ctr]["Uid"] = factory.createScalar(currentElement_uid);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_VehicleInfo_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_VehicleInfo_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_VehicleInfo_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::VehicleInfo,mavros_msgs_msg_VehicleInfo_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_VehicleInfo_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::VehicleInfo,mavros_msgs::VehicleInfo::ConstPtr,mavros_msgs_msg_VehicleInfo_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_VehicleInfo_common, MATLABROSMsgInterface<mavros_msgs::VehicleInfo>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_VehicleInfo_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1