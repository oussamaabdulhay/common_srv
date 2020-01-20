#include "ROSUnit_SetPoseSrv.hpp"

ROSUnit_SetPoseSrv* ROSUnit_SetPoseSrv ::m_ptr;

ROSUnit_SetPoseSrv::ROSUnit_SetPoseSrv (std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, srv_callback);
    m_ptr = this;
}

ROSUnit_SetPoseSrv::~ROSUnit_SetPoseSrv ()
{

}

bool ROSUnit_SetPoseSrv::srv_callback(common_srv::set_pose::Request& req, common_srv::set_pose::Response& res)
{
    //Change the code below to reflect your system
    PoseMsg t_msg;
    t_msg.pose.x = req.pose.point.x;
    t_msg.pose.y = req.pose.point.y;
    t_msg.pose.z = req.pose.point.z;
    t_msg.pose.yaw = req.pose.yaw.data;
    m_ptr->emit_message((DataMessage*) &t_msg);
    return true;
}