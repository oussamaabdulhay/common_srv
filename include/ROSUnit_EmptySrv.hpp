#pragma once

#include "ROSUnit.hpp"
#include "std_srvs/Empty.h"
//Change the msg type to match your received msg
#include "EmptyMsg.hpp"

class ROSUnit_EmptySrv : public ROSUnit
{
    public:
    
        ROSUnit_EmptySrv(std::string, ros::NodeHandle&);
        ~ROSUnit_EmptySrv();
        void receive_msg_data(DataMessage* t_msg) {};

    private:

        static ROSUnit_EmptySrv* m_ptr;
        ros::ServiceServer m_server;
        //Change the srv_callback code to reflect your system
        static bool srv_callback(std_srvs::Empty::Request&, std_srvs::Empty::Response&);
};