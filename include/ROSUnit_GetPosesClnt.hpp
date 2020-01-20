#pragma once

#include "ROSUnit.hpp"
#include "std_srvs/Empty.h"
#include "PosesMsg.hpp"

class ROSUnit_GetPosesClnt : public ROSUnit
{
    public:

        ROSUnit_GetPosesClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_GetPosesClnt();
        void receive_msg_data(DataMessage* t_msg);

    private:
    
        ros::ServiceClient m_client;
};