#pragma once

#include "ROSUnit.hpp"
#include "std_srvs/Empty.h"
#include "FloatMsg.hpp"

class ROSUnit_GetFloatSrv : public ROSUnit
{

    public:

        ROSUnit_GetFloatSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_GetFloatSrv();
        void receive_msg_data(DataMessage* t_msg){};

    private:

        static ROSUnit_GetFloatSrv* m_ptr;

        ros::ServiceServer m_server;

        static bool srv_callback(std_srvs::Empty::Request&, std_srvs::Empty::Response&);
};