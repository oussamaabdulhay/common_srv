#pragma once

#include "common_srv/ROSUnit.hpp"
#include "common_srv/set_poses.h"
//Change the msg type to match your received msg
#include "common_srv/PosesMsg.hpp"

class ROSUnit_SetPosesSrv : public ROSUnit
{
public:

    ROSUnit_SetPosesSrv(std::string, ros::NodeHandle&);
    ~ROSUnit_SetPosesSrv();
    void receiveMsgData(DataMessage* t_msg){};

private:

    ros::ServiceServer m_server;

    static int internal_counter;
    static ROSUnit_SetPosesSrv* m_ptr[ROSUnit_capacity];
    //Change the srv_callback code to reflect your system
    static bool(*callbackFunctionPointer[ROSUnit_capacity])(common_srv::set_poses::Request&, common_srv::set_poses::Response&);
    static bool srv_callback1(common_srv::set_poses::Request&, common_srv::set_poses::Response&);//TODO refactor through templates
    static bool srv_callback2(common_srv::set_poses::Request&, common_srv::set_poses::Response&);
    static bool srv_callback3(common_srv::set_poses::Request&, common_srv::set_poses::Response&);
    static bool srv_callback4(common_srv::set_poses::Request&, common_srv::set_poses::Response&);
    static bool srv_callback5(common_srv::set_poses::Request&, common_srv::set_poses::Response&);


};