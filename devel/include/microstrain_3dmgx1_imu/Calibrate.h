// Generated by gencpp from file microstrain_3dmgx1_imu/Calibrate.msg
// DO NOT EDIT!


#ifndef MICROSTRAIN_3DMGX1_IMU_MESSAGE_CALIBRATE_H
#define MICROSTRAIN_3DMGX1_IMU_MESSAGE_CALIBRATE_H

#include <ros/service_traits.h>


#include <microstrain_3dmgx1_imu/CalibrateRequest.h>
#include <microstrain_3dmgx1_imu/CalibrateResponse.h>


namespace microstrain_3dmgx1_imu
{

struct Calibrate
{

typedef CalibrateRequest Request;
typedef CalibrateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Calibrate
} // namespace microstrain_3dmgx1_imu


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::microstrain_3dmgx1_imu::Calibrate > {
  static const char* value()
  {
    return "4c715151b405532ed910c498c3183c86";
  }

  static const char* value(const ::microstrain_3dmgx1_imu::Calibrate&) { return value(); }
};

template<>
struct DataType< ::microstrain_3dmgx1_imu::Calibrate > {
  static const char* value()
  {
    return "microstrain_3dmgx1_imu/Calibrate";
  }

  static const char* value(const ::microstrain_3dmgx1_imu::Calibrate&) { return value(); }
};


// service_traits::MD5Sum< ::microstrain_3dmgx1_imu::CalibrateRequest> should match 
// service_traits::MD5Sum< ::microstrain_3dmgx1_imu::Calibrate > 
template<>
struct MD5Sum< ::microstrain_3dmgx1_imu::CalibrateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::microstrain_3dmgx1_imu::Calibrate >::value();
  }
  static const char* value(const ::microstrain_3dmgx1_imu::CalibrateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::microstrain_3dmgx1_imu::CalibrateRequest> should match 
// service_traits::DataType< ::microstrain_3dmgx1_imu::Calibrate > 
template<>
struct DataType< ::microstrain_3dmgx1_imu::CalibrateRequest>
{
  static const char* value()
  {
    return DataType< ::microstrain_3dmgx1_imu::Calibrate >::value();
  }
  static const char* value(const ::microstrain_3dmgx1_imu::CalibrateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::microstrain_3dmgx1_imu::CalibrateResponse> should match 
// service_traits::MD5Sum< ::microstrain_3dmgx1_imu::Calibrate > 
template<>
struct MD5Sum< ::microstrain_3dmgx1_imu::CalibrateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::microstrain_3dmgx1_imu::Calibrate >::value();
  }
  static const char* value(const ::microstrain_3dmgx1_imu::CalibrateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::microstrain_3dmgx1_imu::CalibrateResponse> should match 
// service_traits::DataType< ::microstrain_3dmgx1_imu::Calibrate > 
template<>
struct DataType< ::microstrain_3dmgx1_imu::CalibrateResponse>
{
  static const char* value()
  {
    return DataType< ::microstrain_3dmgx1_imu::Calibrate >::value();
  }
  static const char* value(const ::microstrain_3dmgx1_imu::CalibrateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MICROSTRAIN_3DMGX1_IMU_MESSAGE_CALIBRATE_H
