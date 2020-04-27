#pragma once
#include "common_srv/DataMessage.hpp"
#include "common_srv/Vector3D.hpp"
#include "common_srv/PoseMsg.hpp"
#include "common_srv/TaggedPoses.hpp"
#include <vector>

class TaggedPosesMsg : public DataMessage
{

public:

    TaggedPosesMsg();
    ~TaggedPosesMsg();
    msg_type getType();
    const int getSize();

    TaggedPoses tagged_poses;
};