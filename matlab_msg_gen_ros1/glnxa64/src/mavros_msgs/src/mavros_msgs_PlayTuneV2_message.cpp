// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/PlayTuneV2
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
#include "mavros_msgs/PlayTuneV2.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_PlayTuneV2_common : public MATLABROSMsgInterface<mavros_msgs::PlayTuneV2> {
  public:
    virtual ~mavros_msgs_msg_PlayTuneV2_common(){}
    virtual void copy_from_struct(mavros_msgs::PlayTuneV2* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::PlayTuneV2* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_PlayTuneV2_common::copy_from_struct(mavros_msgs::PlayTuneV2* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //format
        const matlab::data::TypedArray<uint8_t> format_arr = arr["Format"];
        msg->format = format_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Format' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Format' is wrong type; expected a uint8.");
    }
    try {
        //tune
        const matlab::data::CharArray tune_arr = arr["Tune"];
        msg->tune = tune_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Tune' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Tune' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_PlayTuneV2_common::get_arr(MDFactory_T& factory, const mavros_msgs::PlayTuneV2* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","QBASIC11","MMLMODERN","Format","Tune"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/PlayTuneV2");
    // QBASIC1_1
    auto currentElement_QBASIC1_1 = (msg + ctr)->QBASIC1_1;
    outArray[ctr]["QBASIC11"] = factory.createScalar(static_cast<uint8_t>(currentElement_QBASIC1_1));
    // MML_MODERN
    auto currentElement_MML_MODERN = (msg + ctr)->MML_MODERN;
    outArray[ctr]["MMLMODERN"] = factory.createScalar(static_cast<uint8_t>(currentElement_MML_MODERN));
    // format
    auto currentElement_format = (msg + ctr)->format;
    outArray[ctr]["Format"] = factory.createScalar(currentElement_format);
    // tune
    auto currentElement_tune = (msg + ctr)->tune;
    outArray[ctr]["Tune"] = factory.createCharArray(currentElement_tune);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_PlayTuneV2_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_PlayTuneV2_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_PlayTuneV2_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::PlayTuneV2,mavros_msgs_msg_PlayTuneV2_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_PlayTuneV2_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::PlayTuneV2,mavros_msgs::PlayTuneV2::ConstPtr,mavros_msgs_msg_PlayTuneV2_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_PlayTuneV2_common, MATLABROSMsgInterface<mavros_msgs::PlayTuneV2>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_PlayTuneV2_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1