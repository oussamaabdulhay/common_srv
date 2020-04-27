#pragma once

#include "common_srv_library/ROSUnit.hpp"
#include "common_srv/Pose.h"
#include "common_srv/set_poses.h"
//Change the msg type code to reflect your system
#include "common_srv_library/PosesMsg.hpp"

class ROSUnit_SetPosesClnt : public ROSUnit
{
    public:

        ROSUnit_SetPosesClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPosesClnt();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};