#pragma once

#include "ROSUnit.hpp"
#include "common_srv/set_int.h"
#include "TaggedPosesMsg.hpp"

class ROSUnit_GetTaggedPosesClnt : public ROSUnit
{
    public:
    
        ROSUnit_GetTaggedPosesClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_GetTaggedPosesClnt();
        void receive_msg_data(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};