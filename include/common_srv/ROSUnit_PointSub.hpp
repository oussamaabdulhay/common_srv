#pragma once

#include "common_srv/ROSUnit.hpp"
#include "geometry_msgs/Point.h"
//Change the msg type to match your received msg
#include "common_srv/Vector3DMessage.hpp"

class ROSUnit_PointSub : public ROSUnit
{
    public:
        enum ports_id {OP_0, OP_1, OP_2, OP_3, OP_4, OP_5, OP_6};
        void process(DataMessage* t_msg, Port* t_port) {};

        ROSUnit_PointSub(std::string, ros::NodeHandle&);
        ~ROSUnit_PointSub();

    private:

        static Port* _output_port_0;
        static Port* _output_port_1;
        static Port* _output_port_2;
        static Port* _output_port_3;
        static Port* _output_port_4;
        static Port* _output_port_5;
        static Port* _output_port_6;
        static std::vector<Port*> _ports;

        ros::Subscriber m_sub;
        static int internal_counter;
        static ROSUnit_PointSub* m_ptr[ROSUnit_capacity];
        //Change the callback code to reflect your system
        //static void callback(const geometry_msgs::Point::ConstPtr&);
        static void(*callbackFunctionPointer[ROSUnit_capacity])(const geometry_msgs::Point::ConstPtr&);
        static void callback1(const geometry_msgs::Point::ConstPtr&);//TODO refactor through templates
        static void callback2(const geometry_msgs::Point::ConstPtr&);
        static void callback3(const geometry_msgs::Point::ConstPtr&);
        static void callback4(const geometry_msgs::Point::ConstPtr&);
        static void callback5(const geometry_msgs::Point::ConstPtr&);
        static void callback6(const geometry_msgs::Point::ConstPtr&);
        static void callback7(const geometry_msgs::Point::ConstPtr&);
};