#pragma once

#include "ROSUnit.hpp"
#include "std_srvs/Empty.h"
#include "PosesMsg.hpp"

class ROSUnit_UpdatePosesClnt : public ROSUnit
{
    public:

        ROSUnit_UpdatePosesClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_UpdatePosesClnt();
        void receive_msg_data(DataMessage* t_msg);

    private:
    
        ros::ServiceClient m_client;
};