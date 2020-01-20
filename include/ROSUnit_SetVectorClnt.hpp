#pragma once

#include "ROSUnit.hpp"
#include "VectorMsg.hpp"
#include "common_srv/set_vector.h"

class ROSUnit_SetVectorClnt : public ROSUnit{

    public:
        ROSUnit_SetVectorClnt(std::string, ros::NodeHandle&);
        ~ROSUnit_SetVectorClnt();
        void receive_msg_data(DataMessage* t_msg);

    private:

        ros::ServiceClient m_client;
};