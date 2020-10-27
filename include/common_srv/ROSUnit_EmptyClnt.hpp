#pragma once

#include "common_srv/ROSUnit.hpp"
#include "std_srvs/Empty.h"
//Change the msg type to match your received msg
#include "common_srv/EmptyMsg.hpp"

class ROSUnit_EmptyClnt : public ROSUnit
{
    public:

        enum ports_id {IP_0};
        ROSUnit_EmptyClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_EmptyClnt();
        //Change the receiveMsgData code to reflect your system
        void process(DataMessage* t_msg, Port* t_port);
        //void receiveMsgData(DataMessage* t_msg);
        std::vector<Port*> getPorts();

    private:
        Port* _input_port_0;
        std::vector<Port*> _ports;
        ros::ServiceClient m_client;
};