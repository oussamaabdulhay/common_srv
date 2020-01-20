#pragma once

#include "ROSUnit.hpp"
#include "common_srv/set_pose.h"
//Change the msg type to match your received msg
#include "PoseMsg.hpp"

class ROSUnit_SetPoseSrv : public ROSUnit
{
    public:
    
        ROSUnit_SetPoseSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPoseSrv();
        void receive_msg_data(DataMessage* t_msg){};

    private:

        static ROSUnit_SetPoseSrv* m_ptr;
        ros::ServiceServer m_server;
        //Change the srv_callback code to reflect your system
        static bool srv_callback(common_srv::set_pose::Request&, common_srv::set_pose::Response&);
};