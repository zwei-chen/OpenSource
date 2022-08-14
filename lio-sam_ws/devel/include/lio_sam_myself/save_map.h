// Generated by gencpp from file lio_sam_myself/save_map.msg
// DO NOT EDIT!


#ifndef LIO_SAM_MYSELF_MESSAGE_SAVE_MAP_H
#define LIO_SAM_MYSELF_MESSAGE_SAVE_MAP_H

#include <ros/service_traits.h>


#include <lio_sam_myself/save_mapRequest.h>
#include <lio_sam_myself/save_mapResponse.h>


namespace lio_sam_myself
{

struct save_map
{

typedef save_mapRequest Request;
typedef save_mapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct save_map
} // namespace lio_sam_myself


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::lio_sam_myself::save_map > {
  static const char* value()
  {
    return "9b82c64d089149d300598523af304f22";
  }

  static const char* value(const ::lio_sam_myself::save_map&) { return value(); }
};

template<>
struct DataType< ::lio_sam_myself::save_map > {
  static const char* value()
  {
    return "lio_sam_myself/save_map";
  }

  static const char* value(const ::lio_sam_myself::save_map&) { return value(); }
};


// service_traits::MD5Sum< ::lio_sam_myself::save_mapRequest> should match
// service_traits::MD5Sum< ::lio_sam_myself::save_map >
template<>
struct MD5Sum< ::lio_sam_myself::save_mapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::lio_sam_myself::save_map >::value();
  }
  static const char* value(const ::lio_sam_myself::save_mapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::lio_sam_myself::save_mapRequest> should match
// service_traits::DataType< ::lio_sam_myself::save_map >
template<>
struct DataType< ::lio_sam_myself::save_mapRequest>
{
  static const char* value()
  {
    return DataType< ::lio_sam_myself::save_map >::value();
  }
  static const char* value(const ::lio_sam_myself::save_mapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::lio_sam_myself::save_mapResponse> should match
// service_traits::MD5Sum< ::lio_sam_myself::save_map >
template<>
struct MD5Sum< ::lio_sam_myself::save_mapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::lio_sam_myself::save_map >::value();
  }
  static const char* value(const ::lio_sam_myself::save_mapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::lio_sam_myself::save_mapResponse> should match
// service_traits::DataType< ::lio_sam_myself::save_map >
template<>
struct DataType< ::lio_sam_myself::save_mapResponse>
{
  static const char* value()
  {
    return DataType< ::lio_sam_myself::save_map >::value();
  }
  static const char* value(const ::lio_sam_myself::save_mapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LIO_SAM_MYSELF_MESSAGE_SAVE_MAP_H
