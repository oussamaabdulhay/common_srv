#pragma once

#include "common_srv/ROSUnit.hpp"
#include "common_srv/Point2D.h"
//Change the msg type to match your received msg
#include "common_srv/Vector2DMsg.hpp"

class ROSUnit_Point2DSub : public ROSUnit
{
    public:
        enum ports_id {OP_0, OP_1, OP_2, OP_3, OP_4};
        void process(DataMessage* t_msg, Port* t_port) {};
        ROSUnit_Point2DSub(std::string, ros::NodeHandle&);
        ~ROSUnit_Point2DSub();

    private:

        static Port* _output_port_0;
        static Port* _output_port_1;
        static Port* _output_port_2;
        static Port* _output_port_3;
        static Port* _output_port_4;
        
        ros::Subscriber m_sub;
        static int internal_counter;
        static ROSUnit_Point2DSub* m_ptr[ROSUnit_capacity];
        //Change the callback code to reflect your system
        //static void callback(const common_srv::Point2D::ConstPtr&);
        static void(*callbackFunctionPointer[ROSUnit_capacity])(const common_srv::Point2D::ConstPtr&);
        static void callback1(const common_srv::Point2D::ConstPtr&);//TODO refactor through templates
        static void callback2(const common_srv::Point2D::ConstPtr&);
        static void callback3(const common_srv::Point2D::ConstPtr&);
        static void callback4(const common_srv::Point2D::ConstPtr&);
        static void callback5(const common_srv::Point2D::ConstPtr&);
};