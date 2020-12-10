#pragma once

#include "common_srv/ROSUnit.hpp"
#include "geometry_msgs/PointStamped.h"
//Change the msg type to match your received msg
#include "common_srv/Vector3DMessage.hpp"
#include "common_srv/Vector3DMessageUint64.hpp"

class ROSUnit_PointUint64Pub : public ROSUnit
{
    public:

        ROSUnit_PointUint64Pub(std::string, ros::NodeHandle&);
        ~ROSUnit_PointUint64Pub();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:

        ros::Publisher m_pub;
};