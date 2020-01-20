#pragma once

#include "ROSUnit.hpp"
#include "PosesMsg.hpp"
#include "common_srv/set_poses.h"

class ROSUnit_SetPosesSrv : public ROSUnit{

    public:
        ROSUnit_SetPosesSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPosesSrv();
        void receive_msg_data(DataMessage* t_msg){};

    private:

        static ROSUnit_SetPosesSrv* m_ptr;
        ros::ServiceServer m_server;
        static bool srv_callback(common_srv::set_poses::Request&, common_srv::set_poses::Response&);
};