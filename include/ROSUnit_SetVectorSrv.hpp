#pragma once

#include "ROSUnit.hpp"
#include "common_srv/set_vector.h"
//Change the msg type to match your received msg
#include "VectorMsg.hpp"

class ROSUnit_SetVectorSrv : public ROSUnit
{
    public:
    
        ROSUnit_SetVectorSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_SetVectorSrv();
        void receive_msg_data(DataMessage* t_msg) {};

    private:

        static ROSUnit_SetVectorSrv* m_ptr;
        ros::ServiceServer m_server;
        //Change the srv_callback code to reflect your system
        static bool srv_callback(common_srv::set_vector::Request&, common_srv::set_vector::Response&);
};