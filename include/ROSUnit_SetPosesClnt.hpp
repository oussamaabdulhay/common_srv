#pragma once

#include "ROSUnit.hpp"
#include "PosesMsg.hpp"
#include "common_srv/Pose.h"
#include "common_srv/set_poses.h"

class ROSUnit_SetPosesClnt : public ROSUnit{

    public:
        ROSUnit_SetPosesClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPosesClnt();
        void receive_msg_data(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};