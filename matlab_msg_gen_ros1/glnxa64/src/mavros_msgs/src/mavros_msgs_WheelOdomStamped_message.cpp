// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/WheelOdomStamped
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
#include "mavros_msgs/WheelOdomStamped.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_WheelOdomStamped_common : public MATLABROSMsgInterface<mavros_msgs::WheelOdomStamped> {
  public:
    virtual ~mavros_msgs_msg_WheelOdomStamped_common(){}
    virtual void copy_from_struct(mavros_msgs::WheelOdomStamped* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::WheelOdomStamped* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_WheelOdomStamped_common::copy_from_struct(mavros_msgs::WheelOdomStamped* msg, const matlab::data::Struct& arr,
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
        //data
        const matlab::data::TypedArray<double> data_arr = arr["Data"];
        size_t nelem = data_arr.getNumberOfElements();
        	msg->data.resize(nelem);
        	std::copy(data_arr.begin(), data_arr.begin()+nelem, msg->data.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Data' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_WheelOdomStamped_common::get_arr(MDFactory_T& factory, const mavros_msgs::WheelOdomStamped* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Data"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/WheelOdomStamped");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // data
    auto currentElement_data = (msg + ctr)->data;
    outArray[ctr]["Data"] = factory.createArray<mavros_msgs::WheelOdomStamped::_data_type::const_iterator, double>({currentElement_data.size(),1}, currentElement_data.begin(), currentElement_data.end());
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_WheelOdomStamped_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_WheelOdomStamped_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_WheelOdomStamped_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::WheelOdomStamped,mavros_msgs_msg_WheelOdomStamped_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_WheelOdomStamped_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::WheelOdomStamped,mavros_msgs::WheelOdomStamped::ConstPtr,mavros_msgs_msg_WheelOdomStamped_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_WheelOdomStamped_common, MATLABROSMsgInterface<mavros_msgs::WheelOdomStamped>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_WheelOdomStamped_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1