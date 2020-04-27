#pragma once

#include "common_srv_library/ROSUnit.hpp"
#include "std_msgs/Float32.h"
//Change the msg type to match your received msg
#include "common_srv_library/FloatMsg.hpp"

class ROSUnit_FloatPub : public ROSUnit
{
    public:

        ROSUnit_FloatPub(std::string, ros::NodeHandle&);
        ~ROSUnit_FloatPub();
        //Change the receiveMsgData code to reflect your system
        void receiveMsgData(DataMessage* t_msg);

    private:

        ros::Publisher m_pub;
};