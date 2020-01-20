#pragma once

#include "ROSUnit.hpp"
#include "common_srv/set_float.h"
#include "FloatMsg.hpp"

class ROSUnit_SetFloatClnt : public ROSUnit{

    public:
        ROSUnit_SetFloatClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetFloatClnt();
        void receive_msg_data(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};