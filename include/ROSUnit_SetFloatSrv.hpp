#pragma once

#include "ROSUnit.hpp"
#include "common_srv/set_float.h"
//Change the msg type to match your received msg
#include "FloatMsg.hpp"

class ROSUnit_SetFloatSrv : public ROSUnit
{
    public:

        ROSUnit_SetFloatSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_SetFloatSrv();
        void receive_msg_data(DataMessage* t_msg) {};

    private:

        static ROSUnit_SetFloatSrv* m_ptr;
        ros::ServiceServer m_server;
        //Change the srv_callback code to reflect your system
        static bool srv_callback(common_srv::set_float::Request&, common_srv::set_float::Response&);
};