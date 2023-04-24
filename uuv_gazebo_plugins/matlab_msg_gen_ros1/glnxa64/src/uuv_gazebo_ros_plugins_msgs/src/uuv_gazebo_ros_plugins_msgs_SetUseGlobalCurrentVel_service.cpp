// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for uuv_gazebo_ros_plugins_msgs/SetUseGlobalCurrentVelRequest
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
#include "uuv_gazebo_ros_plugins_msgs/SetUseGlobalCurrentVel.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class UUV_GAZEBO_ROS_PLUGINS_MSGS_EXPORT uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelRequest_common : public MATLABROSMsgInterface<uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request> {
  public:
    virtual ~uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelRequest_common(){}
    virtual void copy_from_struct(uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelRequest_common::copy_from_struct(uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //use_global
        const matlab::data::TypedArray<bool> use_global_arr = arr["UseGlobal"];
        msg->use_global = use_global_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'UseGlobal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'UseGlobal' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelRequest_common::get_arr(MDFactory_T& factory, const uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","UseGlobal"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("uuv_gazebo_ros_plugins_msgs/SetUseGlobalCurrentVelRequest");
    // use_global
    auto currentElement_use_global = (msg + ctr)->use_global;
    outArray[ctr]["UseGlobal"] = factory.createScalar(static_cast<bool>(currentElement_use_global));
    }
    return std::move(outArray);
  }
class UUV_GAZEBO_ROS_PLUGINS_MSGS_EXPORT uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelResponse_common : public MATLABROSMsgInterface<uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response> {
  public:
    virtual ~uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelResponse_common(){}
    virtual void copy_from_struct(uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelResponse_common::copy_from_struct(uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr["Success"];
        msg->success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Success' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Success' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelResponse_common::get_arr(MDFactory_T& factory, const uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("uuv_gazebo_ros_plugins_msgs/SetUseGlobalCurrentVelResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    }
    return std::move(outArray);
  } 
class UUV_GAZEBO_ROS_PLUGINS_MSGS_EXPORT uuv_gazebo_ros_plugins_msgs_SetUseGlobalCurrentVel_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~uuv_gazebo_ros_plugins_msgs_SetUseGlobalCurrentVel_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          uuv_gazebo_ros_plugins_msgs_SetUseGlobalCurrentVel_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request,uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response,uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          uuv_gazebo_ros_plugins_msgs_SetUseGlobalCurrentVel_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request,uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request::ConstPtr,uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response,uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response::ConstPtr,uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          uuv_gazebo_ros_plugins_msgs_SetUseGlobalCurrentVel_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request,uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response,uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelRequest_common,uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          uuv_gazebo_ros_plugins_msgs_SetUseGlobalCurrentVel_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel,uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request,uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response,uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelRequest_common,uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelRequest_common, MATLABROSMsgInterface<uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Request>)
CLASS_LOADER_REGISTER_CLASS(uuv_gazebo_ros_plugins_msgs_msg_SetUseGlobalCurrentVelResponse_common, MATLABROSMsgInterface<uuv_gazebo_ros_plugins_msgs::SetUseGlobalCurrentVel::Response>)
CLASS_LOADER_REGISTER_CLASS(uuv_gazebo_ros_plugins_msgs_SetUseGlobalCurrentVel_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
