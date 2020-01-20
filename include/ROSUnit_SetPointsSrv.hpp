#pragma once

#include "ROSUnit.hpp"
#include "common_srv/set_points.h"
//Change the msg type to match your received msg
#include "PointsMsg.hpp"

class ROSUnit_SetPointsSrv : public ROSUnit
{
    public:

        ROSUnit_SetPointsSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPointsSrv();
        void receive_msg_data(DataMessage* t_msg){};

    private:

        static ROSUnit_SetPointsSrv* m_ptr;
        ros::ServiceServer m_server;
        //Change the srv_callback code to reflect your system
        static bool srv_callback(common_srv::set_points::Request&, common_srv::set_points::Response&);
};