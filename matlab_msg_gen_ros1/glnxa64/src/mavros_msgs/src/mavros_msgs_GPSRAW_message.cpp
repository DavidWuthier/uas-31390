// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for mavros_msgs/GPSRAW
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
#include "mavros_msgs/GPSRAW.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class MAVROS_MSGS_EXPORT mavros_msgs_msg_GPSRAW_common : public MATLABROSMsgInterface<mavros_msgs::GPSRAW> {
  public:
    virtual ~mavros_msgs_msg_GPSRAW_common(){}
    virtual void copy_from_struct(mavros_msgs::GPSRAW* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const mavros_msgs::GPSRAW* msg, MultiLibLoader loader, size_t size = 1);
};
  void mavros_msgs_msg_GPSRAW_common::copy_from_struct(mavros_msgs::GPSRAW* msg, const matlab::data::Struct& arr,
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
        //lat
        const matlab::data::TypedArray<int32_t> lat_arr = arr["Lat"];
        msg->lat = lat_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Lat' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Lat' is wrong type; expected a int32.");
    }
    try {
        //lon
        const matlab::data::TypedArray<int32_t> lon_arr = arr["Lon"];
        msg->lon = lon_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Lon' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Lon' is wrong type; expected a int32.");
    }
    try {
        //alt
        const matlab::data::TypedArray<int32_t> alt_arr = arr["Alt"];
        msg->alt = alt_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Alt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Alt' is wrong type; expected a int32.");
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
    try {
        //alt_ellipsoid
        const matlab::data::TypedArray<int32_t> alt_ellipsoid_arr = arr["AltEllipsoid"];
        msg->alt_ellipsoid = alt_ellipsoid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'AltEllipsoid' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'AltEllipsoid' is wrong type; expected a int32.");
    }
    try {
        //h_acc
        const matlab::data::TypedArray<uint32_t> h_acc_arr = arr["HAcc"];
        msg->h_acc = h_acc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'HAcc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'HAcc' is wrong type; expected a uint32.");
    }
    try {
        //v_acc
        const matlab::data::TypedArray<uint32_t> v_acc_arr = arr["VAcc"];
        msg->v_acc = v_acc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'VAcc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'VAcc' is wrong type; expected a uint32.");
    }
    try {
        //vel_acc
        const matlab::data::TypedArray<uint32_t> vel_acc_arr = arr["VelAcc"];
        msg->vel_acc = vel_acc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'VelAcc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'VelAcc' is wrong type; expected a uint32.");
    }
    try {
        //hdg_acc
        const matlab::data::TypedArray<int32_t> hdg_acc_arr = arr["HdgAcc"];
        msg->hdg_acc = hdg_acc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'HdgAcc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'HdgAcc' is wrong type; expected a int32.");
    }
    try {
        //dgps_numch
        const matlab::data::TypedArray<uint8_t> dgps_numch_arr = arr["DgpsNumch"];
        msg->dgps_numch = dgps_numch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'DgpsNumch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'DgpsNumch' is wrong type; expected a uint8.");
    }
    try {
        //dgps_age
        const matlab::data::TypedArray<uint32_t> dgps_age_arr = arr["DgpsAge"];
        msg->dgps_age = dgps_age_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'DgpsAge' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'DgpsAge' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T mavros_msgs_msg_GPSRAW_common::get_arr(MDFactory_T& factory, const mavros_msgs::GPSRAW* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Header","GPSFIXTYPENOGPS","GPSFIXTYPENOFIX","GPSFIXTYPE2DFIX","GPSFIXTYPE3DFIX","GPSFIXTYPEDGPS","GPSFIXTYPERTKFLOATR","GPSFIXTYPERTKFIXEDR","GPSFIXTYPESTATIC","GPSFIXTYPEPPP","FixType","Lat","Lon","Alt","Eph","Epv","Vel","Cog","SatellitesVisible","AltEllipsoid","HAcc","VAcc","VelAcc","HdgAcc","DgpsNumch","DgpsAge"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("mavros_msgs/GPSRAW");
    // header
    auto currentElement_header = (msg + ctr)->header;
    static auto msgClassPtr_header = loader->createInstance<MATLABROSMsgInterface<std_msgs::Header>>("std_msgs_msg_Header_common");
    outArray[ctr]["Header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // GPS_FIX_TYPE_NO_GPS
    auto currentElement_GPS_FIX_TYPE_NO_GPS = (msg + ctr)->GPS_FIX_TYPE_NO_GPS;
    outArray[ctr]["GPSFIXTYPENOGPS"] = factory.createScalar(static_cast<uint8_t>(currentElement_GPS_FIX_TYPE_NO_GPS));
    // GPS_FIX_TYPE_NO_FIX
    auto currentElement_GPS_FIX_TYPE_NO_FIX = (msg + ctr)->GPS_FIX_TYPE_NO_FIX;
    outArray[ctr]["GPSFIXTYPENOFIX"] = factory.createScalar(static_cast<uint8_t>(currentElement_GPS_FIX_TYPE_NO_FIX));
    // GPS_FIX_TYPE_2D_FIX
    auto currentElement_GPS_FIX_TYPE_2D_FIX = (msg + ctr)->GPS_FIX_TYPE_2D_FIX;
    outArray[ctr]["GPSFIXTYPE2DFIX"] = factory.createScalar(static_cast<uint8_t>(currentElement_GPS_FIX_TYPE_2D_FIX));
    // GPS_FIX_TYPE_3D_FIX
    auto currentElement_GPS_FIX_TYPE_3D_FIX = (msg + ctr)->GPS_FIX_TYPE_3D_FIX;
    outArray[ctr]["GPSFIXTYPE3DFIX"] = factory.createScalar(static_cast<uint8_t>(currentElement_GPS_FIX_TYPE_3D_FIX));
    // GPS_FIX_TYPE_DGPS
    auto currentElement_GPS_FIX_TYPE_DGPS = (msg + ctr)->GPS_FIX_TYPE_DGPS;
    outArray[ctr]["GPSFIXTYPEDGPS"] = factory.createScalar(static_cast<uint8_t>(currentElement_GPS_FIX_TYPE_DGPS));
    // GPS_FIX_TYPE_RTK_FLOATR
    auto currentElement_GPS_FIX_TYPE_RTK_FLOATR = (msg + ctr)->GPS_FIX_TYPE_RTK_FLOATR;
    outArray[ctr]["GPSFIXTYPERTKFLOATR"] = factory.createScalar(static_cast<uint8_t>(currentElement_GPS_FIX_TYPE_RTK_FLOATR));
    // GPS_FIX_TYPE_RTK_FIXEDR
    auto currentElement_GPS_FIX_TYPE_RTK_FIXEDR = (msg + ctr)->GPS_FIX_TYPE_RTK_FIXEDR;
    outArray[ctr]["GPSFIXTYPERTKFIXEDR"] = factory.createScalar(static_cast<uint8_t>(currentElement_GPS_FIX_TYPE_RTK_FIXEDR));
    // GPS_FIX_TYPE_STATIC
    auto currentElement_GPS_FIX_TYPE_STATIC = (msg + ctr)->GPS_FIX_TYPE_STATIC;
    outArray[ctr]["GPSFIXTYPESTATIC"] = factory.createScalar(static_cast<uint8_t>(currentElement_GPS_FIX_TYPE_STATIC));
    // GPS_FIX_TYPE_PPP
    auto currentElement_GPS_FIX_TYPE_PPP = (msg + ctr)->GPS_FIX_TYPE_PPP;
    outArray[ctr]["GPSFIXTYPEPPP"] = factory.createScalar(static_cast<uint8_t>(currentElement_GPS_FIX_TYPE_PPP));
    // fix_type
    auto currentElement_fix_type = (msg + ctr)->fix_type;
    outArray[ctr]["FixType"] = factory.createScalar(currentElement_fix_type);
    // lat
    auto currentElement_lat = (msg + ctr)->lat;
    outArray[ctr]["Lat"] = factory.createScalar(currentElement_lat);
    // lon
    auto currentElement_lon = (msg + ctr)->lon;
    outArray[ctr]["Lon"] = factory.createScalar(currentElement_lon);
    // alt
    auto currentElement_alt = (msg + ctr)->alt;
    outArray[ctr]["Alt"] = factory.createScalar(currentElement_alt);
    // eph
    auto currentElement_eph = (msg + ctr)->eph;
    outArray[ctr]["Eph"] = factory.createScalar(currentElement_eph);
    // epv
    auto currentElement_epv = (msg + ctr)->epv;
    outArray[ctr]["Epv"] = factory.createScalar(currentElement_epv);
    // vel
    auto currentElement_vel = (msg + ctr)->vel;
    outArray[ctr]["Vel"] = factory.createScalar(currentElement_vel);
    // cog
    auto currentElement_cog = (msg + ctr)->cog;
    outArray[ctr]["Cog"] = factory.createScalar(currentElement_cog);
    // satellites_visible
    auto currentElement_satellites_visible = (msg + ctr)->satellites_visible;
    outArray[ctr]["SatellitesVisible"] = factory.createScalar(currentElement_satellites_visible);
    // alt_ellipsoid
    auto currentElement_alt_ellipsoid = (msg + ctr)->alt_ellipsoid;
    outArray[ctr]["AltEllipsoid"] = factory.createScalar(currentElement_alt_ellipsoid);
    // h_acc
    auto currentElement_h_acc = (msg + ctr)->h_acc;
    outArray[ctr]["HAcc"] = factory.createScalar(currentElement_h_acc);
    // v_acc
    auto currentElement_v_acc = (msg + ctr)->v_acc;
    outArray[ctr]["VAcc"] = factory.createScalar(currentElement_v_acc);
    // vel_acc
    auto currentElement_vel_acc = (msg + ctr)->vel_acc;
    outArray[ctr]["VelAcc"] = factory.createScalar(currentElement_vel_acc);
    // hdg_acc
    auto currentElement_hdg_acc = (msg + ctr)->hdg_acc;
    outArray[ctr]["HdgAcc"] = factory.createScalar(currentElement_hdg_acc);
    // dgps_numch
    auto currentElement_dgps_numch = (msg + ctr)->dgps_numch;
    outArray[ctr]["DgpsNumch"] = factory.createScalar(currentElement_dgps_numch);
    // dgps_age
    auto currentElement_dgps_age = (msg + ctr)->dgps_age;
    outArray[ctr]["DgpsAge"] = factory.createScalar(currentElement_dgps_age);
    }
    return std::move(outArray);
  } 
class MAVROS_MSGS_EXPORT mavros_msgs_GPSRAW_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~mavros_msgs_GPSRAW_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          mavros_msgs_GPSRAW_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<mavros_msgs::GPSRAW,mavros_msgs_msg_GPSRAW_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         mavros_msgs_GPSRAW_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<mavros_msgs::GPSRAW,mavros_msgs::GPSRAW::ConstPtr,mavros_msgs_msg_GPSRAW_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_msg_GPSRAW_common, MATLABROSMsgInterface<mavros_msgs::GPSRAW>)
CLASS_LOADER_REGISTER_CLASS(mavros_msgs_GPSRAW_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1