// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/FileRenameRequest
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
#include "mavros_msgs/FileRename.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_FileRenameRequest_common : public MATLABROSMsgInterface<mavros_msgs::FileRename::Request> {
  public:
    virtual ~mavros_msgs_msg_FileRenameRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::FileRename::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::FileRename::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_FileRenameRequest_common::copy_from_struct(mavros_msgs::FileRename::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //old_path
        const matlab::data::CharArray old_path_arr = arr["OldPath"];
        msg->old_path = old_path_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'OldPath' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'OldPath' is wrong type; expected a string.");
    }
    try {
        //new_path
        const matlab::data::CharArray new_path_arr = arr["NewPath"];
        msg->new_path = new_path_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'NewPath' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'NewPath' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_FileRenameRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::FileRename::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","OldPath","NewPath"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/FileRenameRequest");
    // old_path
    auto currentElement_old_path = (msg + ctr)->old_path;
    outArray[ctr]["OldPath"] = factory.createCharArray(currentElement_old_path);
    // new_path
    auto currentElement_new_path = (msg + ctr)->new_path;
    outArray[ctr]["NewPath"] = factory.createCharArray(currentElement_new_path);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_FileRenameResponse_common : public MATLABROSMsgInterface<mavros_msgs::FileRename::Response> {
  public:
    virtual ~mavros_msgs_msg_FileRenameResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::FileRename::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::FileRename::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_FileRenameResponse_common::copy_from_struct(mavros_msgs::FileRename::Response* msg, const matlab::data::Struct& arr,
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
        //r_errno
        const matlab::data::TypedArray<int32_t> r_errno_arr = arr["RErrno"];
        msg->r_errno = r_errno_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'RErrno' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'RErrno' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_FileRenameResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::FileRename::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","RErrno"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/FileRenameResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // r_errno
    auto currentElement_r_errno = (msg + ctr)->r_errno;
    outArray[ctr]["RErrno"] = factory.createScalar(currentElement_r_errno);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_FileRename_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_FileRename_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_FileRename_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::FileRename::Request,mavros_msgs_msg_FileRenameRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::FileRename::Response,mavros_msgs_msg_FileRenameResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_FileRename_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::FileRename::Request,mavros_msgs::FileRename::Request::ConstPtr,mavros_msgs_msg_FileRenameRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::FileRename::Response,mavros_msgs::FileRename::Response::ConstPtr,mavros_msgs_msg_FileRenameResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_FileRename_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::FileRename::Request,mavros_msgs::FileRename::Response,mavros_msgs_msg_FileRenameRequest_common,mavros_msgs_msg_FileRenameResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_FileRename_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::FileRename,mavros_msgs::FileRename::Request,mavros_msgs::FileRename::Response,mavros_msgs_msg_FileRenameRequest_common,mavros_msgs_msg_FileRenameResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_FileRenameRequest_common, MATLABROSMsgInterface<mavros_msgs::FileRename::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_FileRenameResponse_common, MATLABROSMsgInterface<mavros_msgs::FileRename::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_FileRename_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
