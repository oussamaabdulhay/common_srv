#pragma once

#include "common_srv/ROSUnit.hpp"
#include "common_srv/set_vector.h"
//Change the msg type code to reflect your system
#include "common_srv/VectorMsg.hpp"

class ROSUnit_SetVectorClnt : public ROSUnit
{
    public:
        enum ports_id {IP_0};
        void process(DataMessage* t_msg, Port* t_port);
        ROSUnit_SetVectorClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetVectorClnt();

    private:
        Port* _input_port_0;
        ros::ServiceClient m_client;
};