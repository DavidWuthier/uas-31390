// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/LandingTarget
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
#include "mavros_msgs/LandingTarget.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_LandingTarget_common : public MATLABROSMsgInterface<mavros_msgs::LandingTarget> {
  public:
    virtual ~mavros_msgs_msg_LandingTarget_common(){}
    virtual void copy_from_struct(mavros_msgs::LandingTarget* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::LandingTarget* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_LandingTarget_common::copy_from_struct(mavros_msgs::LandingTarget* msg, const matlab::data::Struct& arr,
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
        //target_num
        const matlab::data::TypedArray<uint8_t> target_num_arr = arr["TargetNum"];
        msg->target_num = target_num_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'TargetNum' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'TargetNum' is wrong type; expected a uint8.");
    }
    try {
        //frame
        const matlab::data::TypedArray<uint8_t> frame_arr = arr["Frame"];
        msg->frame = frame_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Frame' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Frame' is wrong type; expected a uint8.");
    }
    try {
        //angle
        const matlab::data::TypedArray<float> angle_arr = arr["Angle"];
        size_t nelem = 2;
        	std::copy(angle_arr.begin(), angle_arr.begin()+nelem, msg->angle.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Angle' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Angle' is wrong type; expected a single.");
    }
    try {
        //distance
        const matlab::data::TypedArray<float> distance_arr = arr["Distance"];
        msg->distance = distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Distance' is wrong type; expected a single.");
    }
    try {
        //size
        const matlab::data::TypedArray<float> size_arr = arr["Size"];
        size_t nelem = 2;
        	std::copy(size_arr.begin(), size_arr.begin()+nelem, msg->size.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Size' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Size' is wrong type; expected a single.");
    }
    try {
        //pose
        const matlab::data::StructArray pose_arr = arr["Pose"];
        static auto msgClassPtr_pose = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Pose>>("geometry_msgs_msg_Pose_common");
        msgClassPtr_pose->copy_from_struct(&msg->pose,pose_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Pose' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Pose' is wrong type; expected a struct.");
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
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_LandingTarget_common::get_arr(MDFactory_T& factory, const mavros_msgs::LandingTarget* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","GLOBAL","LOCALNED","MISSION","GLOBALRELATIVEALT","LOCALENU","GLOBALINT","GLOBALRELATIVEALTINT","LOCALOFFSETNED","BODYNED","BODYOFFSETNED","GLOBALTERRAINALT","GLOBALTERRAINALTINT","LIGHTBEACON","RADIOBEACON","VISIONFIDUCIAL","VISIONOTHER","TargetNum","Frame","Angle","Distance","Size","Pose","Type"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/LandingTarget");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // GLOBAL
    auto currentElement_GLOBAL = (msg + ctr)->GLOBAL;
    outArray[ctr]["GLOBAL"] = factory.createScalar(static_cast<uint8_t>(currentElement_GLOBAL));
    // LOCAL_NED
    auto currentElement_LOCAL_NED = (msg + ctr)->LOCAL_NED;
    outArray[ctr]["LOCALNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_LOCAL_NED));
    // MISSION
    auto currentElement_MISSION = (msg + ctr)->MISSION;
    outArray[ctr]["MISSION"] = factory.createScalar(static_cast<uint8_t>(currentElement_MISSION));
    // GLOBAL_RELATIVE_ALT
    auto currentElement_GLOBAL_RELATIVE_ALT = (msg + ctr)->GLOBAL_RELATIVE_ALT;
    outArray[ctr]["GLOBALRELATIVEALT"] = factory.createScalar(static_cast<uint8_t>(currentElement_GLOBAL_RELATIVE_ALT));
    // LOCAL_ENU
    auto currentElement_LOCAL_ENU = (msg + ctr)->LOCAL_ENU;
    outArray[ctr]["LOCALENU"] = factory.createScalar(static_cast<uint8_t>(currentElement_LOCAL_ENU));
    // GLOBAL_INT
    auto currentElement_GLOBAL_INT = (msg + ctr)->GLOBAL_INT;
    outArray[ctr]["GLOBALINT"] = factory.createScalar(static_cast<uint8_t>(currentElement_GLOBAL_INT));
    // GLOBAL_RELATIVE_ALT_INT
    auto currentElement_GLOBAL_RELATIVE_ALT_INT = (msg + ctr)->GLOBAL_RELATIVE_ALT_INT;
    outArray[ctr]["GLOBALRELATIVEALTINT"] = factory.createScalar(static_cast<uint8_t>(currentElement_GLOBAL_RELATIVE_ALT_INT));
    // LOCAL_OFFSET_NED
    auto currentElement_LOCAL_OFFSET_NED = (msg + ctr)->LOCAL_OFFSET_NED;
    outArray[ctr]["LOCALOFFSETNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_LOCAL_OFFSET_NED));
    // BODY_NED
    auto currentElement_BODY_NED = (msg + ctr)->BODY_NED;
    outArray[ctr]["BODYNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_BODY_NED));
    // BODY_OFFSET_NED
    auto currentElement_BODY_OFFSET_NED = (msg + ctr)->BODY_OFFSET_NED;
    outArray[ctr]["BODYOFFSETNED"] = factory.createScalar(static_cast<uint8_t>(currentElement_BODY_OFFSET_NED));
    // GLOBAL_TERRAIN_ALT
    auto currentElement_GLOBAL_TERRAIN_ALT = (msg + ctr)->GLOBAL_TERRAIN_ALT;
    outArray[ctr]["GLOBALTERRAINALT"] = factory.createScalar(static_cast<uint8_t>(currentElement_GLOBAL_TERRAIN_ALT));
    // GLOBAL_TERRAIN_ALT_INT
    auto currentElement_GLOBAL_TERRAIN_ALT_INT = (msg + ctr)->GLOBAL_TERRAIN_ALT_INT;
    outArray[ctr]["GLOBALTERRAINALTINT"] = factory.createScalar(static_cast<uint8_t>(currentElement_GLOBAL_TERRAIN_ALT_INT));
    // LIGHT_BEACON
    auto currentElement_LIGHT_BEACON = (msg + ctr)->LIGHT_BEACON;
    outArray[ctr]["LIGHTBEACON"] = factory.createScalar(static_cast<uint8_t>(currentElement_LIGHT_BEACON));
    // RADIO_BEACON
    auto currentElement_RADIO_BEACON = (msg + ctr)->RADIO_BEACON;
    outArray[ctr]["RADIOBEACON"] = factory.createScalar(static_cast<uint8_t>(currentElement_RADIO_BEACON));
    // VISION_FIDUCIAL
    auto currentElement_VISION_FIDUCIAL = (msg + ctr)->VISION_FIDUCIAL;
    outArray[ctr]["VISIONFIDUCIAL"] = factory.createScalar(static_cast<uint8_t>(currentElement_VISION_FIDUCIAL));
    // VISION_OTHER
    auto currentElement_VISION_OTHER = (msg + ctr)->VISION_OTHER;
    outArray[ctr]["VISIONOTHER"] = factory.createScalar(static_cast<uint8_t>(currentElement_VISION_OTHER));
    // target_num
    auto currentElement_target_num = (msg + ctr)->target_num;
    outArray[ctr]["TargetNum"] = factory.createScalar(currentElement_target_num);
    // frame
    auto currentElement_frame = (msg + ctr)->frame;
    outArray[ctr]["Frame"] = factory.createScalar(currentElement_frame);
    // angle
    auto currentElement_angle = (msg + ctr)->angle;
    outArray[ctr]["Angle"] = factory.createArray<mavros_msgs::LandingTarget::_angle_type::const_iterator, float>({currentElement_angle.size(),1}, currentElement_angle.begin(), currentElement_angle.end());
    // distance
    auto currentElement_distance = (msg + ctr)->distance;
    outArray[ctr]["Distance"] = factory.createScalar(currentElement_distance);
    // size
    auto currentElement_size = (msg + ctr)->size;
    outArray[ctr]["Size"] = factory.createArray<mavros_msgs::LandingTarget::_size_type::const_iterator, float>({currentElement_size.size(),1}, currentElement_size.begin(), currentElement_size.end());
    // pose
    auto currentElement_pose = (msg + ctr)->pose;
    static auto msgClassPtr_pose = loader->createInstance<MATLABROSMsgInterface<geometry_msgs::Pose>>("geometry_msgs_msg_Pose_common");
    outArray[ctr]["Pose"] = msgClassPtr_pose->get_arr(factory, &currentElement_pose, loader);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["Type"] = factory.createScalar(currentElement_type);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_LandingTarget_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_LandingTarget_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_LandingTarget_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::LandingTarget,mavros_msgs_msg_LandingTarget_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_LandingTarget_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::LandingTarget,mavros_msgs::LandingTarget::ConstPtr,mavros_msgs_msg_LandingTarget_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_LandingTarget_common, MATLABROSMsgInterface<mavros_msgs::LandingTarget>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_LandingTarget_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1