#pragma once
#include "ros/ros.h"
#include <iostream>
#include <string>
#include "std_msgs/String.h"
#include "common_srv_library/MsgReceiver.hpp"
#include "common_srv_library/MsgEmitter.hpp"
#include "common_srv_library/common_types.hpp"

const int ROSUnit_capacity=7;
class ROSUnit : public MsgEmitter, public MsgReceiver{

    private:
        ros::NodeHandle _main_handler;

    public:
        ros::NodeHandle getNodeHandle();
        virtual void receiveMsgData(DataMessage* t_msg) = 0;

        ROSUnit(ros::NodeHandle&);
        ~ROSUnit();
    protected:
        
        
};