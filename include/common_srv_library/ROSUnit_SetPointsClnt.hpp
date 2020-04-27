#pragma once

#include "common_srv_library/ROSUnit.hpp"
#include "geometry_msgs/Point.h"
#include "common_srv/set_points.h"
//Change the msg type code to reflect your system
#include "common_srv_library/PointsMsg.hpp"

class ROSUnit_SetPointsClnt : public ROSUnit
{
    public:

        ROSUnit_SetPointsClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPointsClnt();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};