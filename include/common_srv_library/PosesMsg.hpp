#pragma once
#include "common_srv_library/DataMessage.hpp"
#include "common_srv_library/Vector3D.hpp"
#include "common_srv_library/Poses.hpp"

class PosesMsg : public DataMessage
{

public:

    PosesMsg();
    ~PosesMsg();
    msg_type getType();
    const int getSize();

    Poses p;
};