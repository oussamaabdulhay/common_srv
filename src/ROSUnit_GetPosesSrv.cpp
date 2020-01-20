#include "ROSUnit_GetPosesSrv.hpp"

ROSUnit_GetPosesSrv* ROSUnit_GetPosesSrv::m_ptr;

ROSUnit_GetPosesSrv::ROSUnit_GetPosesSrv(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, srv_callback);
    m_ptr = this;
}

ROSUnit_GetPosesSrv::~ROSUnit_GetPosesSrv()
{

}

bool ROSUnit_GetPosesSrv::srv_callback(std_srvs::Empty::Request& req, std_srvs::Empty::Response& res)
{
    PosesMsg t_msg;
    m_ptr->emit_message((DataMessage*) &t_msg);
    return true;
}