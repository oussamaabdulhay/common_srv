#pragma once
#include "common_srv_library/DataMessage.hpp"
#include "common_srv_library/Vector3D.hpp"
#include "common_srv_library/PoseMsg.hpp"
#include "common_srv_library/TaggedPoses.hpp"
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