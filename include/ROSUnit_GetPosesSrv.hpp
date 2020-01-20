#pragma once

#include "ROSUnit.hpp"
#include "std_srvs/Empty.h"
#include "PosesMsg.hpp"

class ROSUnit_GetPosesSrv : public ROSUnit
{

    public:
        ROSUnit_GetPosesSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_GetPosesSrv();
        void receive_msg_data(DataMessage* t_msg) {};

    private:

        static ROSUnit_GetPosesSrv* m_ptr;

        ros::ServiceServer m_server;

        static bool srv_callback(std_srvs::Empty::Request&, std_srvs::Empty::Response&);
};