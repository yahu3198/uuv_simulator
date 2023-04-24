// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for uuv_gazebo_ros_plugins_msgs/SetFloatRequest
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
#include "uuv_gazebo_ros_plugins_msgs/SetFloat.h"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROSPubSubTemplates.hpp"
#include "ROSServiceTemplates.hpp"
class UUV_GAZEBO_ROS_PLUGINS_MSGS_EXPORT uuv_gazebo_ros_plugins_msgs_msg_SetFloatRequest_common : public MATLABROSMsgInterface<uuv_gazebo_ros_plugins_msgs::SetFloat::Request> {
  public:
    virtual ~uuv_gazebo_ros_plugins_msgs_msg_SetFloatRequest_common(){}
    virtual void copy_from_struct(uuv_gazebo_ros_plugins_msgs::SetFloat::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const uuv_gazebo_ros_plugins_msgs::SetFloat::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void uuv_gazebo_ros_plugins_msgs_msg_SetFloatRequest_common::copy_from_struct(uuv_gazebo_ros_plugins_msgs::SetFloat::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //data
        const matlab::data::TypedArray<double> data_arr = arr["Data"];
        msg->data = data_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Data' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T uuv_gazebo_ros_plugins_msgs_msg_SetFloatRequest_common::get_arr(MDFactory_T& factory, const uuv_gazebo_ros_plugins_msgs::SetFloat::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Data"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("uuv_gazebo_ros_plugins_msgs/SetFloatRequest");
    // data
    auto currentElement_data = (msg + ctr)->data;
    outArray[ctr]["Data"] = factory.createScalar(currentElement_data);
    }
    return std::move(outArray);
  }
class UUV_GAZEBO_ROS_PLUGINS_MSGS_EXPORT uuv_gazebo_ros_plugins_msgs_msg_SetFloatResponse_common : public MATLABROSMsgInterface<uuv_gazebo_ros_plugins_msgs::SetFloat::Response> {
  public:
    virtual ~uuv_gazebo_ros_plugins_msgs_msg_SetFloatResponse_common(){}
    virtual void copy_from_struct(uuv_gazebo_ros_plugins_msgs::SetFloat::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const uuv_gazebo_ros_plugins_msgs::SetFloat::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void uuv_gazebo_ros_plugins_msgs_msg_SetFloatResponse_common::copy_from_struct(uuv_gazebo_ros_plugins_msgs::SetFloat::Response* msg, const matlab::data::Struct& arr,
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
    try {
        //message
        const matlab::data::CharArray message_arr = arr["Message"];
        msg->message = message_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Message' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'Message' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T uuv_gazebo_ros_plugins_msgs_msg_SetFloatResponse_common::get_arr(MDFactory_T& factory, const uuv_gazebo_ros_plugins_msgs::SetFloat::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","Success","Message"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("uuv_gazebo_ros_plugins_msgs/SetFloatResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["Success"] = factory.createScalar(static_cast<bool>(currentElement_success));
    // message
    auto currentElement_message = (msg + ctr)->message;
    outArray[ctr]["Message"] = factory.createCharArray(currentElement_message);
    }
    return std::move(outArray);
  } 
class UUV_GAZEBO_ROS_PLUGINS_MSGS_EXPORT uuv_gazebo_ros_plugins_msgs_SetFloat_service : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~uuv_gazebo_ros_plugins_msgs_SetFloat_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
};  
  std::shared_ptr<MATLABPublisherInterface> 
          uuv_gazebo_ros_plugins_msgs_SetFloat_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSPublisherImpl<uuv_gazebo_ros_plugins_msgs::SetFloat::Request,uuv_gazebo_ros_plugins_msgs_msg_SetFloatRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSPublisherImpl<uuv_gazebo_ros_plugins_msgs::SetFloat::Response,uuv_gazebo_ros_plugins_msgs_msg_SetFloatResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          uuv_gazebo_ros_plugins_msgs_SetFloat_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROSSubscriberImpl<uuv_gazebo_ros_plugins_msgs::SetFloat::Request,uuv_gazebo_ros_plugins_msgs::SetFloat::Request::ConstPtr,uuv_gazebo_ros_plugins_msgs_msg_SetFloatRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROSSubscriberImpl<uuv_gazebo_ros_plugins_msgs::SetFloat::Response,uuv_gazebo_ros_plugins_msgs::SetFloat::Response::ConstPtr,uuv_gazebo_ros_plugins_msgs_msg_SetFloatResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          uuv_gazebo_ros_plugins_msgs_SetFloat_service::generateSvcServerInterface(){
    return std::make_shared<ROSSvcServerImpl<uuv_gazebo_ros_plugins_msgs::SetFloat::Request,uuv_gazebo_ros_plugins_msgs::SetFloat::Response,uuv_gazebo_ros_plugins_msgs_msg_SetFloatRequest_common,uuv_gazebo_ros_plugins_msgs_msg_SetFloatResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          uuv_gazebo_ros_plugins_msgs_SetFloat_service::generateSvcClientInterface(){
    return std::make_shared<ROSSvcClientImpl<uuv_gazebo_ros_plugins_msgs::SetFloat,uuv_gazebo_ros_plugins_msgs::SetFloat::Request,uuv_gazebo_ros_plugins_msgs::SetFloat::Response,uuv_gazebo_ros_plugins_msgs_msg_SetFloatRequest_common,uuv_gazebo_ros_plugins_msgs_msg_SetFloatResponse_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(uuv_gazebo_ros_plugins_msgs_msg_SetFloatRequest_common, MATLABROSMsgInterface<uuv_gazebo_ros_plugins_msgs::SetFloat::Request>)
CLASS_LOADER_REGISTER_CLASS(uuv_gazebo_ros_plugins_msgs_msg_SetFloatResponse_common, MATLABROSMsgInterface<uuv_gazebo_ros_plugins_msgs::SetFloat::Response>)
CLASS_LOADER_REGISTER_CLASS(uuv_gazebo_ros_plugins_msgs_SetFloat_service, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
