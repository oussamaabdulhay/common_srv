#pragma once

#include "common_srv/ROSUnit.hpp"
#include "geometry_msgs/Point.h"
//Change the msg type to match your received msg
#include "common_srv/Vector3DMessage.hpp"

class ROSUnit_PointPub : public ROSUnit
{
    public:
        enum ports_id {IP_0};
        void process(DataMessage* t_msg, Port* t_port);
        std::vector<Port*> getPorts() {return _ports;};
        ROSUnit_PointPub(std::string, ros::NodeHandle&);
        ~ROSUnit_PointPub();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:
        Port* _input_port_0;
        std::vector<Port*> _ports;
        ros::Publisher m_pub;
};