#pragma once

#include "ROSUnit.hpp"
#include "Vector3DMessage.hpp"
#include "common_srv/set_point.h"

class ROSUnit_SetPointSrv : public ROSUnit{

    public:
        ROSUnit_SetPointSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_SetPointSrv();
        void receive_msg_data(DataMessage* t_msg){};

    private:

        static ROSUnit_SetPointSrv* m_ptr;
        ros::ServiceServer m_server;
        static bool srv_callback(common_srv::set_point::Request&, common_srv::set_point::Response&);
};