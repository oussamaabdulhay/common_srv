#pragma once

#include "common_srv/ROSUnit.hpp"
#include "common_srv/set_float.h"
//Change the msg type to match your received msg
#include "common_srv/FloatMsg.hpp"

class ROSUnit_SetFloatClnt : public ROSUnit
{
    public:
        enum ports_id {IP_0};
        void process(DataMessage* t_msg, Port* t_port);
        ROSUnit_SetFloatClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetFloatClnt();

    private:
        Port* _input_port_0;
        ros::ServiceClient m_client;
};