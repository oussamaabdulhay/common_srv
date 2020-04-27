#pragma once

#include "common_srv_library/ROSUnit.hpp"
#include "common_srv/Point2D.h"
//Change the msg type to match your received msg
#include "common_srv_library/Vector2DMsg.hpp"

class ROSUnit_Point2DPub : public ROSUnit
{
    public:

        ROSUnit_Point2DPub(std::string, ros::NodeHandle&);
        ~ROSUnit_Point2DPub();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:

        ros::Publisher m_pub;
};