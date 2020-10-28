#pragma once

#include "common_srv/ROSUnit.hpp"
#include "common_srv/Vector3DMessage.hpp"
//Change the msg type code to reflect your system
#include "common_srv/set_point.h"

class ROSUnit_SetPointClnt : public ROSUnit
{
    public:
        enum ports_id {IP_0};
        void process(DataMessage* t_msg, Port* t_port);

        ROSUnit_SetPointClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPointClnt();

    private:
        Port* _input_port_0;
        ros::ServiceClient m_client;
};