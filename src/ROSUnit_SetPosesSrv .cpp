#include "ROSUnit_SetPosesSrv.hpp"

ROSUnit_SetPosesSrv* ROSUnit_SetPosesSrv ::m_ptr;

ROSUnit_SetPosesSrv::ROSUnit_SetPosesSrv (std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, srv_callback);
    m_ptr = this;
}

ROSUnit_SetPosesSrv::~ROSUnit_SetPosesSrv ()
{

}

bool ROSUnit_SetPosesSrv::srv_callback(common_srv::set_poses::Request& req, common_srv::set_poses::Response& res)
{
    PosesMsg t_msg;
    for(int i = 0; i < req.poses.pose.size(); i++)
    {
        Pose t_pose;
        t_pose.x = req.poses.pose.at(i).point.x;
        t_pose.y = req.poses.pose.at(i).point.y;
        t_pose.z = req.poses.pose.at(i).point.z;
        t_pose.yaw = req.poses.pose.at(i).yaw.data;
        t_msg.p.poses.push_back(t_pose);
    }
    m_ptr->emit_message((DataMessage*) &t_msg);
    return true;
}