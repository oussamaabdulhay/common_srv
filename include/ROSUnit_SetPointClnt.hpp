#pragma once

#include "ROSUnit.hpp"
#include "Vector3DMessage.hpp"
#include "common_srv/set_point.h"

class ROSUnit_SetPointClnt : public ROSUnit{

    public:
        ROSUnit_SetPointClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPointClnt();
        void receive_msg_data(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};