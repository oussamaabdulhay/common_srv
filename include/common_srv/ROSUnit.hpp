#pragma once
#include "ros/ros.h"
#include <iostream>
#include <string>
#include "std_msgs/String.h"
#include "common_srv/MsgReceiver.hpp"
#include "common_srv/MsgEmitter.hpp"
#include "common_srv/msg_types.hpp"
#include "Block.hpp"

const int ROSUnit_capacity=7;
class ROSUnit : public MsgEmitter, public Block{

    private:
        ros::NodeHandle _main_handler;

    public:
        ros::NodeHandle getNodeHandle();
        virtual void receiveMsgData(DataMessage* t_msg) = 0;

        ROSUnit(ros::NodeHandle&);
        ~ROSUnit();

        //TODO Refactor below
        block_id getID() {}
        block_type getType() {}
        void switchIn(DataMessage*) {}
        DataMessage* switchOut() {}
        DataMessage* runTask(DataMessage*) {}
        void process(DataMessage* t_msg, Port* t_port) {}
        std::vector<Port*> getPorts() {}
        
    protected:
        
        
};