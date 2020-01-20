#pragma once

#include "ROSUnit.hpp"
#include "std_srvs/Empty.h"
#include "FloatMsg.hpp"

class ROSUnit_UpdateFloatSrv : public ROSUnit
{

    public:

        ROSUnit_UpdateFloatSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_UpdateFloatSrv();
        void receive_msg_data(DataMessage* t_msg){};

    private:

        static ROSUnit_UpdateFloatSrv* m_ptr;

        ros::ServiceServer m_server;

        static bool srv_callback(std_srvs::Empty::Request&, std_srvs::Empty::Response&);
};