#pragma once

#include "ROSUnit.hpp"
#include "common_srv/set_int.h"
#include "TaggedPosesMsg.hpp"

class ROSUnit_UpdateTaggedPosesClnt : public ROSUnit
{
    public:
    
        ROSUnit_UpdateTaggedPosesClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_UpdateTaggedPosesClnt();
        void receive_msg_data(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};