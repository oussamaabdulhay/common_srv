#pragma once

#include "ROSUnit.hpp"
#include "std_srvs/Empty.h"
#include "FloatMsg.hpp"

class ROSUnit_UpdateFloatClnt : public ROSUnit
{
    public:
    
        ROSUnit_UpdateFloatClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_UpdateFloatClnt();
        void receive_msg_data(DataMessage* t_msg);

    private:
        
        ros::ServiceClient m_client;
};