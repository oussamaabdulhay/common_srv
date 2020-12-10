#include "common_srv/ROSUnit_PointUint64Pub.hpp"

ROSUnit_PointUint64Pub::ROSUnit_PointUint64Pub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_pub = t_main_handler.advertise<geometry_msgs::PointStamped>(t_name, 2, true);
}

ROSUnit_PointUint64Pub::~ROSUnit_PointUint64Pub()
{

}

void ROSUnit_PointUint64Pub::receiveMsgData(DataMessage* t_msg)
{
    //Change the below code to match your received msg
    if(t_msg->getType() == msg_type::Vector3DUINT64)
    {
        Vector3DMessageUint64* t_vec = (Vector3DMessageUint64*) t_msg;
        geometry_msgs::PointStamped t_point;
        t_point.point.x = t_vec->getData().x;
        t_point.point.y = t_vec->getData().y;
        t_point.point.z = t_vec->getData().z;
        t_point.header.stamp=t_vec->getData().time;
        m_pub.publish(t_point);
    }
}