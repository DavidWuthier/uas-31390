// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/SetMavFrameRequest
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
#include "mavros_msgs/SetMavFrame.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_SetMavFrameRequest_common : public MATLABROSMsgInterface<mavros_msgs::SetMavFrame::Request> {
  public:
    virtual ~mavros_msgs_msg_SetMavFrameRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::SetMavFrame::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::SetMavFrame::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_SetMavFrameRequest_common::copy_from_struct(mavros_msgs::SetMavFrame::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //mav_frame
        const matlab::data::TypedArray<uint8_t> mav_frame_arr = arr["MavFrame"];
        msg->mav_frame = mav_frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'MavFrame' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'MavFrame' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_SetMavFrameRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::SetMavFrame::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","FRAMEGLOBAL","FRAMELOCALNED","FRAMEMISSION","FRAMEGLOBALRELATIVEALT","FRAMELOCALENU","FRAMEGLOBALINT","FRAMEGLOBALRELATIVEALTINT","FRAMELOCALOFFSETNED","FRAMEBODYNED","FRAMEBODYOFFSETNED","FRAMEGLOBALTERRAINALT","FRAMEGLOBALTERRAINALTINT","FRAMEBODYFRD","FRAMERESERVED13","FRAMERESERVED14","FRAMERESERVED15","FRAMERESERVED16","FRAMERESERVED17","FRAMERESERVED18","FRAMERESERVED19","FRAMELOCALFRD","FRAMELOCALFLU","MavFrame"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/SetMavFrameRequest");
    // FRAME_GLOBAL
    auto currentElement_FRAME_GLOBAL = (msg + ctr)->FRAME_GLOBAL;
    outArray[ctr]["FRAMEGLOBAL"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL));
    // FRAME_LOCAL_NED
    auto currentElement_FRAME_LOCAL_NED = (msg + ctr)->FRAME_LOCAL_NED;
    outArray[ctr]["FRAMELOCALNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_LOCAL_NED));
    // FRAME_MISSION
    auto currentElement_FRAME_MISSION = (msg + ctr)->FRAME_MISSION;
    outArray[ctr]["FRAMEMISSION"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_MISSION));
    // FRAME_GLOBAL_RELATIVE_ALT
    auto currentElement_FRAME_GLOBAL_RELATIVE_ALT = (msg + ctr)->FRAME_GLOBAL_RELATIVE_ALT;
    outArray[ctr]["FRAMEGLOBALRELATIVEALT"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL_RELATIVE_ALT));
    // FRAME_LOCAL_ENU
    auto currentElement_FRAME_LOCAL_ENU = (msg + ctr)->FRAME_LOCAL_ENU;
    outArray[ctr]["FRAMELOCALENU"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_LOCAL_ENU));
    // FRAME_GLOBAL_INT
    auto currentElement_FRAME_GLOBAL_INT = (msg + ctr)->FRAME_GLOBAL_INT;
    outArray[ctr]["FRAMEGLOBALINT"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL_INT));
    // FRAME_GLOBAL_RELATIVE_ALT_INT
    auto currentElement_FRAME_GLOBAL_RELATIVE_ALT_INT = (msg + ctr)->FRAME_GLOBAL_RELATIVE_ALT_INT;
    outArray[ctr]["FRAMEGLOBALRELATIVEALTINT"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL_RELATIVE_ALT_INT));
    // FRAME_LOCAL_OFFSET_NED
    auto currentElement_FRAME_LOCAL_OFFSET_NED = (msg + ctr)->FRAME_LOCAL_OFFSET_NED;
    outArray[ctr]["FRAMELOCALOFFSETNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_LOCAL_OFFSET_NED));
    // FRAME_BODY_NED
    auto currentElement_FRAME_BODY_NED = (msg + ctr)->FRAME_BODY_NED;
    outArray[ctr]["FRAMEBODYNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_BODY_NED));
    // FRAME_BODY_OFFSET_NED
    auto currentElement_FRAME_BODY_OFFSET_NED = (msg + ctr)->FRAME_BODY_OFFSET_NED;
    outArray[ctr]["FRAMEBODYOFFSETNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_BODY_OFFSET_NED));
    // FRAME_GLOBAL_TERRAIN_ALT
    auto currentElement_FRAME_GLOBAL_TERRAIN_ALT = (msg + ctr)->FRAME_GLOBAL_TERRAIN_ALT;
    outArray[ctr]["FRAMEGLOBALTERRAINALT"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL_TERRAIN_ALT));
    // FRAME_GLOBAL_TERRAIN_ALT_INT
    auto currentElement_FRAME_GLOBAL_TERRAIN_ALT_INT = (msg + ctr)->FRAME_GLOBAL_TERRAIN_ALT_INT;
    outArray[ctr]["FRAMEGLOBALTERRAINALTINT"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_GLOBAL_TERRAIN_ALT_INT));
    // FRAME_BODY_FRD
    auto currentElement_FRAME_BODY_FRD = (msg + ctr)->FRAME_BODY_FRD;
    outArray[ctr]["FRAMEBODYFRD"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_BODY_FRD));
    // FRAME_RESERVED_13
    auto currentElement_FRAME_RESERVED_13 = (msg + ctr)->FRAME_RESERVED_13;
    outArray[ctr]["FRAMERESERVED13"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_RESERVED_13));
    // FRAME_RESERVED_14
    auto currentElement_FRAME_RESERVED_14 = (msg + ctr)->FRAME_RESERVED_14;
    outArray[ctr]["FRAMERESERVED14"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_RESERVED_14));
    // FRAME_RESERVED_15
    auto currentElement_FRAME_RESERVED_15 = (msg + ctr)->FRAME_RESERVED_15;
    outArray[ctr]["FRAMERESERVED15"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_RESERVED_15));
    // FRAME_RESERVED_16
    auto currentElement_FRAME_RESERVED_16 = (msg + ctr)->FRAME_RESERVED_16;
    outArray[ctr]["FRAMERESERVED16"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_RESERVED_16));
    // FRAME_RESERVED_17
    auto currentElement_FRAME_RESERVED_17 = (msg + ctr)->FRAME_RESERVED_17;
    outArray[ctr]["FRAMERESERVED17"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_RESERVED_17));
    // FRAME_RESERVED_18
    auto currentElement_FRAME_RESERVED_18 = (msg + ctr)->FRAME_RESERVED_18;
    outArray[ctr]["FRAMERESERVED18"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_RESERVED_18));
    // FRAME_RESERVED_19
    auto currentElement_FRAME_RESERVED_19 = (msg + ctr)->FRAME_RESERVED_19;
    outArray[ctr]["FRAMERESERVED19"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_RESERVED_19));
    // FRAME_LOCAL_FRD
    auto currentElement_FRAME_LOCAL_FRD = (msg + ctr)->FRAME_LOCAL_FRD;
    outArray[ctr]["FRAMELOCALFRD"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_LOCAL_FRD));
    // FRAME_LOCAL_FLU
    auto currentElement_FRAME_LOCAL_FLU = (msg + ctr)->FRAME_LOCAL_FLU;
    outArray[ctr]["FRAMELOCALFLU"] = factory.createScalar(static_cast<uint8_t>(currentElement_FRAME_LOCAL_FLU));
    // mav_frame
    auto currentElement_mav_frame = (msg + ctr)->mav_frame;
    outArray[ctr]["MavFrame"] = factory.createScalar(currentElement_mav_frame);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_SetMavFrameResponse_common : public MATLABROSMsgInterface<mavros_msgs::SetMavFrame::Response> {
  public:
    virtual ~mavros_msgs_msg_SetMavFrameResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::SetMavFrame::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::SetMavFrame::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_SetMavFrameResponse_common::copy_from_struct(mavros_msgs::SetMavFrame::Response* msg, const matlab::data::Struct& arr,
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
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_SetMavFrameResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::SetMavFrame::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/SetMavFrameResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_SetMavFrame_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_SetMavFrame_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_SetMavFrame_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::SetMavFrame::Request,mavros_msgs_msg_SetMavFrameRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::SetMavFrame::Response,mavros_msgs_msg_SetMavFrameResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_SetMavFrame_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::SetMavFrame::Request,mavros_msgs::SetMavFrame::Request::ConstPtr,mavros_msgs_msg_SetMavFrameRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::SetMavFrame::Response,mavros_msgs::SetMavFrame::Response::ConstPtr,mavros_msgs_msg_SetMavFrameResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_SetMavFrame_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::SetMavFrame::Request,mavros_msgs::SetMavFrame::Response,mavros_msgs_msg_SetMavFrameRequest_common,mavros_msgs_msg_SetMavFrameResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_SetMavFrame_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::SetMavFrame,mavros_msgs::SetMavFrame::Request,mavros_msgs::SetMavFrame::Response,mavros_msgs_msg_SetMavFrameRequest_common,mavros_msgs_msg_SetMavFrameResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_SetMavFrameRequest_common, MATLABROSMsgInterface<mavros_msgs::SetMavFrame::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_SetMavFrameResponse_common, MATLABROSMsgInterface<mavros_msgs::SetMavFrame::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_SetMavFrame_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
