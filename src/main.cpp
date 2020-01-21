#include "ros/ros.h"
#include "iostream"
#include "ROSUnit_Factory.hpp"
#include "ROSUnit_EmptyClnt.hpp"
#include "ROSUnit_EmptySrv.hpp"
#include "ROSUnit_SetFloatClnt.hpp"
#include "ROSUnit_SetFloatSrv.hpp"
#include "ROSUnit_SetIntClnt.hpp"
#include "ROSUnit_SetIntSrv.hpp"
#include "ROSUnit_SetPointClnt.hpp"
#include "ROSUnit_SetPointSrv.hpp"
#include "ROSUnit_SetPointsClnt.hpp"
#include "ROSUnit_SetPointsSrv.hpp"
#include "ROSUnit_SetPoseClnt.hpp"
#include "ROSUnit_SetPoseSrv.hpp"
#include "ROSUnit_SetPosesClnt.hpp"
#include "ROSUnit_SetPosesSrv.hpp"
#include "ROSUnit_SetVectorClnt.hpp"
#include "ROSUnit_SetVectorSrv.hpp"


int main(int argc, char **argv)
{
	ros::init(argc, argv, "common_srv");

	ros::NodeHandle nh;

	// ROSUnit_EmptyClnt tmp1("/tmp1", nh);
	// ROSUnit_EmptySrv tmp2("/tmp1", nh);
	// ROSUnit_SetFloatClnt tmp3("/tmp3", nh);
	// ROSUnit_SetFloatSrv tmp4("/tmp3", nh);
	// ROSUnit_SetIntClnt tmp5("/tmp5", nh);
	// ROSUnit_SetIntSrv tmp6("/tmp5", nh);
	// ROSUnit_SetPointClnt tmp7("/tmp7", nh);
	// ROSUnit_SetPointSrv tmp8("/tmp7", nh);
	// ROSUnit_SetPointsClnt tmp9("/tmp9", nh);
	// ROSUnit_SetPointsSrv tmp10("/tmp9", nh);
	// ROSUnit_SetPoseClnt tmp11("/tmp11", nh);
	// ROSUnit_SetPoseSrv tmp12("/tmp11", nh);
	// ROSUnit_SetPosesClnt tmp13("/tmp13", nh);
	// ROSUnit_SetPosesSrv tmp14("/tmp13", nh);
	// ROSUnit_SetVectorClnt tmp15("/tmp15", nh);
	// ROSUnit_SetVectorSrv tmp16("/tmp15", nh);

	ROSUnit_Factory ROSUnit_Factory_main{nh};

	std::cout << "HI (:" << std::endl;

	while (ros::ok())
	{
		ros::spinOnce();
	}
	
}
