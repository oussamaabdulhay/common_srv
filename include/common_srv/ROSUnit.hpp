#pragma once
#include "ros/ros.h"
#include <iostream>
#include <string>
#include "std_msgs/String.h"
#include "common_srv/MsgReceiver.hpp"
#include "common_srv/MsgEmitter.hpp"
#include "common_srv/msg_types.hpp"
#include "Block.hpp"
#include "common_srv/InputPort.hpp"
#include "common_srv/OutputPort.hpp"

const int ROSUnit_capacity=15;
class ROSUnit : public Block{

    private:
        ros::NodeHandle _main_handler;

    public:
        ros::NodeHandle getNodeHandle();
        ROSUnit(ros::NodeHandle&);
        ~ROSUnit();
        //CHECK
        void process(DataMessage* t_msg, Port* t_port) {}
};