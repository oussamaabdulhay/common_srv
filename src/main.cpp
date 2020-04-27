#include "ros/ros.h"
#include "common_srv_library/iostream"

#include "common_srv_library/ROSUnit_Factory.hpp"

int main(int argc, char **argv)
{
	ros::init(argc, argv, "common_srv");

	ros::NodeHandle nh;

	std::cout << "HI (:" << std::endl;

	while (ros::ok())
	{
		ros::spinOnce();
	}
	
}
