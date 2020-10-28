#pragma once

#include "common_srv/ROSUnit.hpp"
#include "common_srv/Point2D.h"
//Change the msg type to match your received msg
#include "common_srv/Vector2DMsg.hpp"

class ROSUnit_Point2DPub : public ROSUnit
{
    public:

        enum ports_id {IP_0};
        void process(DataMessage* t_msg, Port* t_port);
        ROSUnit_Point2DPub(std::string, ros::NodeHandle&);
        ~ROSUnit_Point2DPub();
        //Change the receiveMsgData code to reflect your system

    private:

        Port* _input_port_0;
        ros::Publisher m_pub;
};