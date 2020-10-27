#pragma once

#include "common_srv/ROSUnit.hpp"
#include "common_srv/set_int.h"
//Change the msg type to match your received msg
#include "common_srv/IntegerMsg.hpp"

class ROSUnit_SetIntClnt : public ROSUnit
{
    public:
        enum ports_id {IP_0};
        void process(DataMessage* t_msg, Port* t_port);
        std::vector<Port*> getPorts() {return _ports;};
        ROSUnit_SetIntClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetIntClnt();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:
        Port* _input_port_0;
        std::vector<Port*> _ports;
        ros::ServiceClient m_client;
};