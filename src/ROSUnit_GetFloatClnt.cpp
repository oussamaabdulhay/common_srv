#include "ROSUnit_GetFloatClnt.hpp"

ROSUnit_GetFloatClnt::ROSUnit_GetFloatClnt(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_client = t_main_handler.serviceClient<std_srvs::Empty>(t_name);
}

ROSUnit_GetFloatClnt::~ROSUnit_GetFloatClnt()
{

}

void ROSUnit_GetFloatClnt::receive_msg_data(DataMessage* t_msg)
{
    if(t_msg->getType() == msg_type::FLOAT)
    {
        std_srvs::Empty t_srv;
        if(m_client.call(t_srv))
        {
            //TODO: add confirmation
        }
        else
        {
            //TODO: add error
        }
    }
}