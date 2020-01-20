#include "ROSUnit_UpdateTaggedPosesSrv.hpp"

ROSUnit_UpdateTaggedPosesSrv* ROSUnit_UpdateTaggedPosesSrv::m_ptr;

ROSUnit_UpdateTaggedPosesSrv::ROSUnit_UpdateTaggedPosesSrv(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, srv_callback);
    m_ptr = this;
}

ROSUnit_UpdateTaggedPosesSrv::~ROSUnit_UpdateTaggedPosesSrv()
{

}

bool ROSUnit_UpdateTaggedPosesSrv::srv_callback(common_srv::set_int::Request& req, common_srv::set_int::Response& res)
{
    TaggedPosesMsg t_msg;
    t_msg.tagged_poses.tag = req.data;
    m_ptr->emit_message((DataMessage*) &t_msg);
    return true;
}