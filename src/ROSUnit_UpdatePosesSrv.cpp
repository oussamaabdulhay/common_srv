#include "ROSUnit_UpdatePosesSrv.hpp"

ROSUnit_UpdatePosesSrv* ROSUnit_UpdatePosesSrv::m_ptr;

ROSUnit_UpdatePosesSrv::ROSUnit_UpdatePosesSrv(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, srv_callback);
    m_ptr = this;
}

ROSUnit_UpdatePosesSrv::~ROSUnit_UpdatePosesSrv()
{

}

bool ROSUnit_UpdatePosesSrv::srv_callback(std_srvs::Empty::Request& req, std_srvs::Empty::Response& res)
{
    PosesMsg t_msg;
    m_ptr->emit_message((DataMessage*) &t_msg);
    return true;
}