#pragma once
#include "common_srv/DataMessage.hpp"
#include "common_srv/Pose.hpp"

class PoseMsg : public DataMessage{

public:

    PoseMsg();
    ~PoseMsg();
    msg_type getType();
    const int getSize();

    Pose pose;
};