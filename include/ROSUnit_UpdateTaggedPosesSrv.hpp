#pragma once

#include "ROSUnit.hpp"
#include "common_srv/set_int.h"
#include "TaggedPosesMsg.hpp"

class ROSUnit_UpdateTaggedPosesSrv : public ROSUnit
{

    public:
    
        ROSUnit_UpdateTaggedPosesSrv(std::string, ros::NodeHandle&);
        ~ROSUnit_UpdateTaggedPosesSrv();
        void receive_msg_data(DataMessage* t_msg) {};

    private:

        static ROSUnit_UpdateTaggedPosesSrv* m_ptr;

        ros::ServiceServer m_server;
        
        static bool srv_callback(common_srv::set_int::Request&, common_srv::set_int::Response&);
};