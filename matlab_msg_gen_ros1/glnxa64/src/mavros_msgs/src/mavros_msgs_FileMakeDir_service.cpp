// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/FileMakeDirRequest
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
#include "mavros_msgs/FileMakeDir.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_FileMakeDirRequest_common : public MATLABROSMsgInterface<mavros_msgs::FileMakeDir::Request> {
  public:
    virtual ~mavros_msgs_msg_FileMakeDirRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::FileMakeDir::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::FileMakeDir::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_FileMakeDirRequest_common::copy_from_struct(mavros_msgs::FileMakeDir::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //dir_path
        const matlab::data::CharArray dir_path_arr = arr["DirPath"];
        msg->dir_path = dir_path_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'DirPath' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'DirPath' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_FileMakeDirRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::FileMakeDir::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","DirPath"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/FileMakeDirRequest");
    // dir_path
    auto currentElement_dir_path = (msg + ctr)->dir_path;
    outArray[ctr]["DirPath"] = factory.createCharArray(currentElement_dir_path);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_FileMakeDirResponse_common : public MATLABROSMsgInterface<mavros_msgs::FileMakeDir::Response> {
  public:
    virtual ~mavros_msgs_msg_FileMakeDirResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::FileMakeDir::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::FileMakeDir::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_FileMakeDirResponse_common::copy_from_struct(mavros_msgs::FileMakeDir::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T mavros_msgs_msg_FileMakeDirResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::FileMakeDir::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","RErrno"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/FileMakeDirResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // r_errno
    auto currentElement_r_errno = (msg + ctr)->r_errno;
    outArray[ctr]["RErrno"] = factory.createScalar(currentElement_r_errno);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_FileMakeDir_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_FileMakeDir_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_FileMakeDir_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::FileMakeDir::Request,mavros_msgs_msg_FileMakeDirRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::FileMakeDir::Response,mavros_msgs_msg_FileMakeDirResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_FileMakeDir_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::FileMakeDir::Request,mavros_msgs::FileMakeDir::Request::ConstPtr,mavros_msgs_msg_FileMakeDirRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::FileMakeDir::Response,mavros_msgs::FileMakeDir::Response::ConstPtr,mavros_msgs_msg_FileMakeDirResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_FileMakeDir_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::FileMakeDir::Request,mavros_msgs::FileMakeDir::Response,mavros_msgs_msg_FileMakeDirRequest_common,mavros_msgs_msg_FileMakeDirResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_FileMakeDir_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::FileMakeDir,mavros_msgs::FileMakeDir::Request,mavros_msgs::FileMakeDir::Response,mavros_msgs_msg_FileMakeDirRequest_common,mavros_msgs_msg_FileMakeDirResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_FileMakeDirRequest_common, MATLABROSMsgInterface<mavros_msgs::FileMakeDir::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_FileMakeDirResponse_common, MATLABROSMsgInterface<mavros_msgs::FileMakeDir::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_FileMakeDir_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
