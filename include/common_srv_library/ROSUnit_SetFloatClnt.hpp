#pragma once

#include "common_srv_library/ROSUnit.hpp"
#include "common_srv/set_float.h"
//Change the msg type to match your received msg
#include "common_srv_library/FloatMsg.hpp"

class ROSUnit_SetFloatClnt : public ROSUnit
{
    public:

        ROSUnit_SetFloatClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetFloatClnt();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};