#pragma once
#include "ros/ros.h"
#include "common_srv_library/ROSUnit.hpp"
#include "common_srv_library/ROSUnit_FloatPub.hpp"
#include "common_srv_library/ROSUnit_FloatSub.hpp"
#include "common_srv_library/ROSUnit_Point2DPub.hpp"
#include "common_srv_library/ROSUnit_Point2DSub.hpp"
#include "common_srv_library/ROSUnit_PointPub.hpp"
#include "common_srv_library/ROSUnit_PointSub.hpp"
#include "common_srv_library/ROSUnit_EmptyClnt.hpp"
#include "common_srv_library/ROSUnit_EmptySrv.hpp"
#include "common_srv_library/ROSUnit_SetFloatClnt.hpp"
#include "common_srv_library/ROSUnit_SetFloatSrv.hpp"
#include "common_srv_library/ROSUnit_SetIntClnt.hpp"
#include "common_srv_library/ROSUnit_SetIntSrv.hpp"
#include "common_srv_library/ROSUnit_SetPointClnt.hpp"
#include "common_srv_library/ROSUnit_SetPointsClnt.hpp"
#include "common_srv_library/ROSUnit_SetPointSrv.hpp"
#include "common_srv_library/ROSUnit_SetPointsSrv.hpp"
#include "common_srv_library/ROSUnit_SetPoseClnt.hpp"
#include "common_srv_library/ROSUnit_SetPosesClnt.hpp"
#include "common_srv_library/ROSUnit_SetPoseSrv.hpp"
#include "common_srv_library/ROSUnit_SetPosesSrv.hpp"
#include "common_srv_library/ROSUnit_SetVectorClnt.hpp"
#include "common_srv_library/ROSUnit_SetVectorSrv.hpp"

#include <string>
enum ROSUnit_tx_rx_type {Client,Subscriber,Server,Publisher};
enum ROSUnit_msg_type {ROSUnit_Empty,ROSUnit_Float,ROSUnit_Int,ROSUnit_Point,ROSUnit_Points,ROSUnit_Pose,ROSUnit_Poses,ROSUnit_Vector,ROSUnit_Point2D};

class ROSUnit_Factory {
private:
    ros::NodeHandle nh;
    ROSUnit_Factory();
public:
    ROSUnit_Factory(ros::NodeHandle&);
    ROSUnit* CreateROSUnit(ROSUnit_tx_rx_type,ROSUnit_msg_type,std::string ROS_path);
};