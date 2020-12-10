#include "common_srv/ROSUnit_Point2DPub.hpp"

ROSUnit_Point2DPub::ROSUnit_Point2DPub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_pub = t_main_handler.advertise<common_srv::Point2D>(t_name, 2, true);
}

ROSUnit_Point2DPub::~ROSUnit_Point2DPub()
{

}

void ROSUnit_Point2DPub::receiveMsgData(DataMessage* t_msg)
{
    //Change the below code to match your received msg
    if(t_msg->getType() == msg_type::VECTOR2D)
    {
        Vector2DMsg* t_vec = (Vector2DMsg*) t_msg;
        common_srv::Point2D t_point;
        t_point.x = t_vec->data.x;
        t_point.y = t_vec->data.y;
        m_pub.publish(t_point);
    }
}