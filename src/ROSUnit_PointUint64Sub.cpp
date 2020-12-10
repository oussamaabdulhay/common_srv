#include "common_srv/ROSUnit_PointUint64Sub.hpp"

ROSUnit_PointUint64Sub* ROSUnit_PointUint64Sub::m_ptr[ROSUnit_capacity];
int ROSUnit_PointUint64Sub::internal_counter=0;

void(*ROSUnit_PointUint64Sub::callbackFunctionPointer[ROSUnit_capacity])(const geometry_msgs::PointStamped::ConstPtr& t_rec){
  ROSUnit_PointUint64Sub::callback1,
  ROSUnit_PointUint64Sub::callback2,
  ROSUnit_PointUint64Sub::callback3,
  ROSUnit_PointUint64Sub::callback4,
  ROSUnit_PointUint64Sub::callback5,
  ROSUnit_PointUint64Sub::callback6,
  ROSUnit_PointUint64Sub::callback7
};

ROSUnit_PointUint64Sub::ROSUnit_PointUint64Sub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_sub = t_main_handler.subscribe(t_name, 2, ROSUnit_PointUint64Sub::callbackFunctionPointer[internal_counter]);
    m_ptr[internal_counter] = this;
    internal_counter++;
}

ROSUnit_PointUint64Sub::~ROSUnit_PointUint64Sub()
{

}

void ROSUnit_PointUint64Sub::callback1(const geometry_msgs::PointStamped::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector3DMessageUint64 t_msg;
    Vector3D<float> t_vec;
    t_vec.x = t_rec->point.x;
    t_vec.y = t_rec->point.y;
    t_vec.z = t_rec->point.z;
    t_vec.time=t_rec->header.stamp;
    t_msg.setVector3DMessageUint64(t_vec);
    m_ptr[0]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}

void ROSUnit_PointUint64Sub::callback2(const geometry_msgs::PointStamped::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector3DMessageUint64 t_msg;
    Vector3D<float> t_vec;
    t_vec.x = t_rec->point.x;
    t_vec.y = t_rec->point.y;
    t_vec.z = t_rec->point.z;
    t_vec.time=t_rec->header.stamp;
    t_msg.setVector3DMessageUint64(t_vec);
    m_ptr[1]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}

void ROSUnit_PointUint64Sub::callback3(const geometry_msgs::PointStamped::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector3DMessageUint64 t_msg;
    Vector3D<float> t_vec;
    t_vec.x = t_rec->point.x;
    t_vec.y = t_rec->point.y;
    t_vec.z = t_rec->point.z;
    t_vec.time=t_rec->header.stamp;
    t_msg.setVector3DMessageUint64(t_vec);
    m_ptr[2]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}

void ROSUnit_PointUint64Sub::callback4(const geometry_msgs::PointStamped::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector3DMessageUint64 t_msg;
    Vector3D<float> t_vec;
    t_vec.x = t_rec->point.x;
    t_vec.y = t_rec->point.y;
    t_vec.z = t_rec->point.z;
    t_vec.time=t_rec->header.stamp;
    t_msg.setVector3DMessageUint64(t_vec);
    m_ptr[3]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}

void ROSUnit_PointUint64Sub::callback5(const geometry_msgs::PointStamped::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector3DMessageUint64 t_msg;
    Vector3D<float> t_vec;
    t_vec.x = t_rec->point.x;
    t_vec.y = t_rec->point.y;
    t_vec.z = t_rec->point.z;
    t_vec.time=t_rec->header.stamp;
    t_msg.setVector3DMessageUint64(t_vec);
    m_ptr[4]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}

void ROSUnit_PointUint64Sub::callback6(const geometry_msgs::PointStamped::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector3DMessageUint64 t_msg;
    Vector3D<float> t_vec;
    t_vec.x = t_rec->point.x;
    t_vec.y = t_rec->point.y;
    t_vec.z = t_rec->point.z;
    t_vec.time=t_rec->header.stamp;
    t_msg.setVector3DMessageUint64(t_vec);
    m_ptr[5]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}

void ROSUnit_PointUint64Sub::callback7(const geometry_msgs::PointStamped::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector3DMessageUint64 t_msg;
    Vector3D<float> t_vec;
    t_vec.x = t_rec->point.x;
    t_vec.y = t_rec->point.y;
    t_vec.z = t_rec->point.z;
    t_vec.time=t_rec->header.stamp;
    t_msg.setVector3DMessageUint64(t_vec);
    m_ptr[6]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}