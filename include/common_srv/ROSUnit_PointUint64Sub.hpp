#pragma once

#include "common_srv/ROSUnit.hpp"
#include "geometry_msgs/PointStamped.h"
//Change the msg type to match your received msg
#include "common_srv/Vector3DMessage.hpp"
#include "common_srv/Vector3DMessageUint64.hpp"

class ROSUnit_PointUint64Sub : public ROSUnit
{
    public:

        ROSUnit_PointUint64Sub(std::string, ros::NodeHandle&);
        ~ROSUnit_PointUint64Sub();
        void receiveMsgData(DataMessage* t_msg) {};

    private:

        ros::Subscriber m_sub;
        static int internal_counter;
        static ROSUnit_PointUint64Sub* m_ptr[ROSUnit_capacity];
        //Change the callback code to reflect your system
        //static void callback(const geometry_msgs::Point::ConstPtr&);
        static void(*callbackFunctionPointer[ROSUnit_capacity])(const geometry_msgs::PointStamped::ConstPtr&);
        static void callback1(const geometry_msgs::PointStamped::ConstPtr&);//TODO refactor through templates
        static void callback2(const geometry_msgs::PointStamped::ConstPtr&);
        static void callback3(const geometry_msgs::PointStamped::ConstPtr&);
        static void callback4(const geometry_msgs::PointStamped::ConstPtr&);
        static void callback5(const geometry_msgs::PointStamped::ConstPtr&);
        static void callback6(const geometry_msgs::PointStamped::ConstPtr&);
        static void callback7(const geometry_msgs::PointStamped::ConstPtr&);
};