// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/HilStateQuaternion
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
#include "mavros_msgs/HilStateQuaternion.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_HilStateQuaternion_common : public MATLABROSMsgInterface<mavros_msgs::HilStateQuaternion> {
  public:
    virtual ~mavros_msgs_msg_HilStateQuaternion_common(){}
    virtual void copy_from_struct(mavros_msgs::HilStateQuaternion* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::HilStateQuaternion* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_HilStateQuaternion_common::copy_from_struct(mavros_msgs::HilStateQuaternion* msg, const matlab::data::Struct& arr,
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
        //orientation
        const matlab::data::StructArray orientation_arr = arr["Orientation"];
        static auto msgClassPtr_orientation = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Quaternion>>("geometry_msgs_msg_Quaternion_common");
        msgClassPtr_orientation->copy_from_struct(&msg->orientation,orientation_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Orientation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Orientation' is wrong type; expected a struct.");
    }
    try {
        //angular_velocity
        const matlab::data::StructArray angular_velocity_arr = arr["AngularVelocity"];
        static auto msgClassPtr_angular_velocity = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
        msgClassPtr_angular_velocity->copy_from_struct(&msg->angular_velocity,angular_velocity_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'AngularVelocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'AngularVelocity' is wrong type; expected a struct.");
    }
    try {
        //linear_acceleration
        const matlab::data::StructArray linear_acceleration_arr = arr["LinearAcceleration"];
        static auto msgClassPtr_linear_acceleration = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
        msgClassPtr_linear_acceleration->copy_from_struct(&msg->linear_acceleration,linear_acceleration_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LinearAcceleration' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'LinearAcceleration' is wrong type; expected a struct.");
    }
    try {
        //linear_velocity
        const matlab::data::StructArray linear_velocity_arr = arr["LinearVelocity"];
        static auto msgClassPtr_linear_velocity = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
        msgClassPtr_linear_velocity->copy_from_struct(&msg->linear_velocity,linear_velocity_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LinearVelocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'LinearVelocity' is wrong type; expected a struct.");
    }
    try {
        //geo
        const matlab::data::StructArray geo_arr = arr["Geo"];
        static auto msgClassPtr_geo = loader->createInstance<MATLABROSMsgInterface<geographic_msgs::GeoPoint>>("geographic_msgs_msg_GeoPoint_common");
        msgClassPtr_geo->copy_from_struct(&msg->geo,geo_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Geo' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Geo' is wrong type; expected a struct.");
    }
    try {
        //ind_airspeed
        const matlab::data::TypedArray<float> ind_airspeed_arr = arr["IndAirspeed"];
        msg->ind_airspeed = ind_airspeed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'IndAirspeed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'IndAirspeed' is wrong type; expected a single.");
    }
    try {
        //true_airspeed
        const matlab::data::TypedArray<float> true_airspeed_arr = arr["TrueAirspeed"];
        msg->true_airspeed = true_airspeed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TrueAirspeed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TrueAirspeed' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_HilStateQuaternion_common::get_arr(MDFactory_T& factory, const mavros_msgs::HilStateQuaternion* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","Orientation","AngularVelocity","LinearAcceleration","LinearVelocity","Geo","IndAirspeed","TrueAirspeed"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/HilStateQuaternion");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // orientation
    auto currentElement_orientation = (msg + ctr)->orientation;
    static auto msgClassPtr_orientation = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Quaternion>>("geometry_msgs_msg_Quaternion_common");
    outArray[ctr]["Orientation"] = msgClassPtr_orientation->get_arr(factory, &currentElement_orientation, loader);
    // angular_velocity
    auto currentElement_angular_velocity = (msg + ctr)->angular_velocity;
    static auto msgClassPtr_angular_velocity = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
    outArray[ctr]["AngularVelocity"] = msgClassPtr_angular_velocity->get_arr(factory, &currentElement_angular_velocity, loader);
    // linear_acceleration
    auto currentElement_linear_acceleration = (msg + ctr)->linear_acceleration;
    static auto msgClassPtr_linear_acceleration = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
    outArray[ctr]["LinearAcceleration"] = msgClassPtr_linear_acceleration->get_arr(factory, &currentElement_linear_acceleration, loader);
    // linear_velocity
    auto currentElement_linear_velocity = (msg + ctr)->linear_velocity;
    static auto msgClassPtr_linear_velocity = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Vector3>>("geometry_msgs_msg_Vector3_common");
    outArray[ctr]["LinearVelocity"] = msgClassPtr_linear_velocity->get_arr(factory, &currentElement_linear_velocity, loader);
    // geo
    auto currentElement_geo = (msg + ctr)->geo;
    static auto msgClassPtr_geo = loader->createInstance<MATLABROSMsgInterface<geographic_msgs::GeoPoint>>("geographic_msgs_msg_GeoPoint_common");
    outArray[ctr]["Geo"] = msgClassPtr_geo->get_arr(factory, &currentElement_geo, loader);
    // ind_airspeed
    auto currentElement_ind_airspeed = (msg + ctr)->ind_airspeed;
    outArray[ctr]["IndAirspeed"] = factory.createScalar(currentElement_ind_airspeed);
    // true_airspeed
    auto currentElement_true_airspeed = (msg + ctr)->true_airspeed;
    outArray[ctr]["TrueAirspeed"] = factory.createScalar(currentElement_true_airspeed);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_HilStateQuaternion_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_HilStateQuaternion_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_HilStateQuaternion_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::HilStateQuaternion,mavros_msgs_msg_HilStateQuaternion_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_HilStateQuaternion_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::HilStateQuaternion,mavros_msgs::HilStateQuaternion::ConstPtr,mavros_msgs_msg_HilStateQuaternion_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_HilStateQuaternion_common, MATLABROSMsgInterface<mavros_msgs::HilStateQuaternion>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_HilStateQuaternion_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1