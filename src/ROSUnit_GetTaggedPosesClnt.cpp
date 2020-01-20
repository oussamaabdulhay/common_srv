#include "ROSUnit_GetTaggedPosesClnt.hpp"

ROSUnit_GetTaggedPosesClnt::ROSUnit_GetTaggedPosesClnt(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_client = t_main_handler.serviceClient<common_srv::set_int>(t_name);
}

ROSUnit_GetTaggedPosesClnt::~ROSUnit_GetTaggedPosesClnt()
{

}

void ROSUnit_GetTaggedPosesClnt::receive_msg_data(DataMessage* t_msg)
{
    if(t_msg->getType() == msg_type::TAGGEDPOSES)
    {
        common_srv::set_int t_srv;
        t_srv.request.data = ((TaggedPosesMsg*) t_msg)->tagged_poses.tag;
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