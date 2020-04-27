#pragma once
#include "common_srv_library/DataMessage.hpp"
#include "common_srv_library/Pose.hpp"

class PoseMsg : public DataMessage{

public:

    PoseMsg();
    ~PoseMsg();
    msg_type getType();
    const int getSize();

    Pose pose;
};