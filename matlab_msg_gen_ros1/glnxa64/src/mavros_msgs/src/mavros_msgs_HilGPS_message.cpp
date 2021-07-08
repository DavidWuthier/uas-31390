// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/HilGPS
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
#include "mavros_msgs/HilGPS.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_HilGPS_common : public MATLABROSMsgInterface<mavros_msgs::HilGPS> {
  public:
    virtual ~mavros_msgs_msg_HilGPS_common(){}
    virtual void copy_from_struct(mavros_msgs::HilGPS* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::HilGPS* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_HilGPS_common::copy_from_struct(mavros_msgs::HilGPS* msg, const matlab::data::Struct& arr,
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
        //fix_type
        const matlab::data::TypedArray<uint8_t> fix_type_arr = arr["FixType"];
        msg->fix_type = fix_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FixType' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FixType' is wrong type; expected a uint8.");
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
        //eph
        const matlab::data::TypedArray<uint16_t> eph_arr = arr["Eph"];
        msg->eph = eph_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Eph' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Eph' is wrong type; expected a uint16.");
    }
    try {
        //epv
        const matlab::data::TypedArray<uint16_t> epv_arr = arr["Epv"];
        msg->epv = epv_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Epv' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Epv' is wrong type; expected a uint16.");
    }
    try {
        //vel
        const matlab::data::TypedArray<uint16_t> vel_arr = arr["Vel"];
        msg->vel = vel_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Vel' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Vel' is wrong type; expected a uint16.");
    }
    try {
        //vn
        const matlab::data::TypedArray<int16_t> vn_arr = arr["Vn"];
        msg->vn = vn_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Vn' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Vn' is wrong type; expected a int16.");
    }
    try {
        //ve
        const matlab::data::TypedArray<int16_t> ve_arr = arr["Ve"];
        msg->ve = ve_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Ve' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Ve' is wrong type; expected a int16.");
    }
    try {
        //vd
        const matlab::data::TypedArray<int16_t> vd_arr = arr["Vd"];
        msg->vd = vd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Vd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Vd' is wrong type; expected a int16.");
    }
    try {
        //cog
        const matlab::data::TypedArray<uint16_t> cog_arr = arr["Cog"];
        msg->cog = cog_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Cog' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Cog' is wrong type; expected a uint16.");
    }
    try {
        //satellites_visible
        const matlab::data::TypedArray<uint8_t> satellites_visible_arr = arr["SatellitesVisible"];
        msg->satellites_visible = satellites_visible_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'SatellitesVisible' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'SatellitesVisible' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_HilGPS_common::get_arr(MDFactory_T& factory, const mavros_msgs::HilGPS* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","FixType","Geo","Eph","Epv","Vel","Vn","Ve","Vd","Cog","SatellitesVisible"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/HilGPS");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // fix_type
    auto currentElement_fix_type = (msg + ctr)->fix_type;
    outArray[ctr]["FixType"] = factory.createScalar(currentElement_fix_type);
    // geo
    auto currentElement_geo = (msg + ctr)->geo;
    static auto msgClassPtr_geo = loader->createInstance<MATLABROSMsgInterface<geographic_msgs::GeoPoint>>("geographic_msgs_msg_GeoPoint_common");
    outArray[ctr]["Geo"] = msgClassPtr_geo->get_arr(factory, &currentElement_geo, loader);
    // eph
    auto currentElement_eph = (msg + ctr)->eph;
    outArray[ctr]["Eph"] = factory.createScalar(currentElement_eph);
    // epv
    auto currentElement_epv = (msg + ctr)->epv;
    outArray[ctr]["Epv"] = factory.createScalar(currentElement_epv);
    // vel
    auto currentElement_vel = (msg + ctr)->vel;
    outArray[ctr]["Vel"] = factory.createScalar(currentElement_vel);
    // vn
    auto currentElement_vn = (msg + ctr)->vn;
    outArray[ctr]["Vn"] = factory.createScalar(currentElement_vn);
    // ve
    auto currentElement_ve = (msg + ctr)->ve;
    outArray[ctr]["Ve"] = factory.createScalar(currentElement_ve);
    // vd
    auto currentElement_vd = (msg + ctr)->vd;
    outArray[ctr]["Vd"] = factory.createScalar(currentElement_vd);
    // cog
    auto currentElement_cog = (msg + ctr)->cog;
    outArray[ctr]["Cog"] = factory.createScalar(currentElement_cog);
    // satellites_visible
    auto currentElement_satellites_visible = (msg + ctr)->satellites_visible;
    outArray[ctr]["SatellitesVisible"] = factory.createScalar(currentElement_satellites_visible);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_HilGPS_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_HilGPS_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_HilGPS_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::HilGPS,mavros_msgs_msg_HilGPS_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_HilGPS_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::HilGPS,mavros_msgs::HilGPS::ConstPtr,mavros_msgs_msg_HilGPS_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_HilGPS_common, MATLABROSMsgInterface<mavros_msgs::HilGPS>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_HilGPS_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1