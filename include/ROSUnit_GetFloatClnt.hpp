#pragma once

#include "ROSUnit.hpp"
#include "std_srvs/Empty.h"
#include "FloatMsg.hpp"

class ROSUnit_GetFloatClnt : public ROSUnit
{
    public:
    
        ROSUnit_GetFloatClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_GetFloatClnt();
        void receive_msg_data(DataMessage* t_msg);

    private:
        
        ros::ServiceClient m_client;
};