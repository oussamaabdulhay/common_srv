#pragma once

#include "ROSUnit.hpp"
#include "common_srv/set_point.h"
//Change the msg type to match your received msg
#include "Vector3DMessage.hpp"

class ROSUnit_SetPointSrv : public ROSUnit
{
    public:

        ROSUnit_SetPointSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPointSrv();
        void receive_msg_data(DataMessage* t_msg){};

    private:

        static ROSUnit_SetPointSrv* m_ptr;
        ros::ServiceServer m_server;
        //Change the srv_callback code to reflect your system
        static bool srv_callback(common_srv::set_point::Request&, common_srv::set_point::Response&);
};