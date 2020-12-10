#pragma once

#include "common_srv/ROSUnit.hpp"
#include "common_srv/set_int.h"
//Change the msg type to match your received msg
#include "common_srv/IntegerMsg.hpp"

class ROSUnit_SetIntClnt : public ROSUnit
{
    public:
    
        ROSUnit_SetIntClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetIntClnt();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};