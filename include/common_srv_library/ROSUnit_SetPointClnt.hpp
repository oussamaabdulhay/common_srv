#pragma once

#include "common_srv_library/ROSUnit.hpp"
#include "common_srv_library/Vector3DMessage.hpp"
//Change the msg type code to reflect your system
#include "common_srv/set_point.h"

class ROSUnit_SetPointClnt : public ROSUnit
{
    public:

        ROSUnit_SetPointClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPointClnt();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};