// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/CamIMUStamp
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
#include "mavros_msgs/CamIMUStamp.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_CamIMUStamp_common : public MATLABROSMsgInterface<mavros_msgs::CamIMUStamp> {
  public:
    virtual ~mavros_msgs_msg_CamIMUStamp_common(){}
    virtual void copy_from_struct(mavros_msgs::CamIMUStamp* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::CamIMUStamp* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_CamIMUStamp_common::copy_from_struct(mavros_msgs::CamIMUStamp* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //frame_stamp
        const matlab::data::StructArray frame_stamp_arr = arr["FrameStamp"];
        static auto msgClassPtr_frame_stamp = loader->createInstance<MATLABROSMsgInterface<ros::Time>>("ros_msg_Time_common");
        msgClassPtr_frame_stamp->copy_from_struct(&msg->frame_stamp,frame_stamp_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FrameStamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FrameStamp' is wrong type; expected a struct.");
    }
    try {
        //frame_seq_id
        const matlab::data::TypedArray<int32_t> frame_seq_id_arr = arr["FrameSeqId"];
        msg->frame_seq_id = frame_seq_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FrameSeqId' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FrameSeqId' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_CamIMUStamp_common::get_arr(MDFactory_T& factory, const mavros_msgs::CamIMUStamp* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","FrameStamp","FrameSeqId"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/CamIMUStamp");
    // frame_stamp
    auto currentElement_frame_stamp = (msg + ctr)->frame_stamp;
    static auto msgClassPtr_frame_stamp = loader->createInstance<MATLABROSMsgInterface<ros::Time>>("ros_msg_Time_common");
    outArray[ctr]["FrameStamp"] = msgClassPtr_frame_stamp->get_arr(factory, &currentElement_frame_stamp, loader);
    // frame_seq_id
    auto currentElement_frame_seq_id = (msg + ctr)->frame_seq_id;
    outArray[ctr]["FrameSeqId"] = factory.createScalar(currentElement_frame_seq_id);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_CamIMUStamp_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_CamIMUStamp_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_CamIMUStamp_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::CamIMUStamp,mavros_msgs_msg_CamIMUStamp_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_CamIMUStamp_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::CamIMUStamp,mavros_msgs::CamIMUStamp::ConstPtr,mavros_msgs_msg_CamIMUStamp_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_CamIMUStamp_common, MATLABROSMsgInterface<mavros_msgs::CamIMUStamp>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_CamIMUStamp_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1