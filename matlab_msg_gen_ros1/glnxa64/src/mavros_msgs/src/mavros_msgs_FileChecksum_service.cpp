// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/FileChecksumRequest
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
#include "mavros_msgs/FileChecksum.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_FileChecksumRequest_common : public MATLABROSMsgInterface<mavros_msgs::FileChecksum::Request> {
  public:
    virtual ~mavros_msgs_msg_FileChecksumRequest_common(){}
    virtual void copy_from_struct(mavros_msgs::FileChecksum::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::FileChecksum::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_FileChecksumRequest_common::copy_from_struct(mavros_msgs::FileChecksum::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //file_path
        const matlab::data::CharArray file_path_arr = arr["FilePath"];
        msg->file_path = file_path_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FilePath' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FilePath' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_FileChecksumRequest_common::get_arr(MDFactory_T& factory, const mavros_msgs::FileChecksum::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","FilePath"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/FileChecksumRequest");
    // file_path
    auto currentElement_file_path = (msg + ctr)->file_path;
    outArray[ctr]["FilePath"] = factory.createCharArray(currentElement_file_path);
    }
    return std::move(outArray);
  }
class MAVROS_MSGS_EXPORT mavros_msgs_msg_FileChecksumResponse_common : public MATLABROSMsgInterface<mavros_msgs::FileChecksum::Response> {
  public:
    virtual ~mavros_msgs_msg_FileChecksumResponse_common(){}
    virtual void copy_from_struct(mavros_msgs::FileChecksum::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::FileChecksum::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_FileChecksumResponse_common::copy_from_struct(mavros_msgs::FileChecksum::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //crc32
        const matlab::data::TypedArray<uint32_t> crc32_arr = arr["Crc32"];
        msg->crc32 = crc32_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Crc32' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Crc32' is wrong type; expected a uint32.");
    }
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
  MDArray_T mavros_msgs_msg_FileChecksumResponse_common::get_arr(MDFactory_T& factory, const mavros_msgs::FileChecksum::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Crc32","Success","RErrno"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/FileChecksumResponse");
    // crc32
    auto currentElement_crc32 = (msg + ctr)->crc32;
    outArray[ctr]["Crc32"] = factory.createScalar(currentElement_crc32);
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // r_errno
    auto currentElement_r_errno = (msg + ctr)->r_errno;
    outArray[ctr]["RErrno"] = factory.createScalar(currentElement_r_errno);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_FileChecksum_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_FileChecksum_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_FileChecksum_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::FileChecksum::Request,mavros_msgs_msg_FileChecksumRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<mavros_msgs::FileChecksum::Response,mavros_msgs_msg_FileChecksumResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          mavros_msgs_FileChecksum_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::FileChecksum::Request,mavros_msgs::FileChecksum::Request::ConstPtr,mavros_msgs_msg_FileChecksumRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<mavros_msgs::FileChecksum::Response,mavros_msgs::FileChecksum::Response::ConstPtr,mavros_msgs_msg_FileChecksumResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          mavros_msgs_FileChecksum_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<mavros_msgs::FileChecksum::Request,mavros_msgs::FileChecksum::Response,mavros_msgs_msg_FileChecksumRequest_common,mavros_msgs_msg_FileChecksumResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          mavros_msgs_FileChecksum_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<mavros_msgs::FileChecksum,mavros_msgs::FileChecksum::Request,mavros_msgs::FileChecksum::Response,mavros_msgs_msg_FileChecksumRequest_common,mavros_msgs_msg_FileChecksumResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_FileChecksumRequest_common, MATLABROSMsgInterface<mavros_msgs::FileChecksum::Request>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_FileChecksumResponse_common, MATLABROSMsgInterface<mavros_msgs::FileChecksum::Response>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_FileChecksum_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
