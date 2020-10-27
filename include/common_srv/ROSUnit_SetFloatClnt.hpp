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
        std::vector<Port*> getPorts() {return _ports;};
        ROSUnit_SetFloatClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetFloatClnt();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:
        Port* _input_port_0;
        std::vector<Port*> _ports;
        ros::ServiceClient m_client;
};