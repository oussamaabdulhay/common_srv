#pragma once

#include "common_srv/ROSUnit.hpp"
#include "geometry_msgs/Point.h"
#include "common_srv/set_points.h"
//Change the msg type code to reflect your system
#include "common_srv/PointsMsg.hpp"

class ROSUnit_SetPointsClnt : public ROSUnit
{
    public:
        enum ports_id {IP_0};
        void process(DataMessage* t_msg, Port* t_port);
        ROSUnit_SetPointsClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPointsClnt();

    private:
        Port* _input_port_0;
        std::vector<Port*> _ports;
        ros::ServiceClient m_client;
};