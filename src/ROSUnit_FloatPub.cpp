#include "common_srv/ROSUnit_FloatPub.hpp"

ROSUnit_FloatPub::ROSUnit_FloatPub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_pub = t_main_handler.advertise<std_msgs::Float32>(t_name, 2, true);
}

ROSUnit_FloatPub::~ROSUnit_FloatPub()
{

}

void ROSUnit_FloatPub::receiveMsgData(DataMessage* t_msg)
{
    //Change the below code to match your received msg
    if(t_msg->getType() == msg_type::FLOAT)
    {
        std_msgs::Float32 t_data;
        t_data.data = ((FloatMsg*) t_msg)->data;
        m_pub.publish(t_data);
    }
}