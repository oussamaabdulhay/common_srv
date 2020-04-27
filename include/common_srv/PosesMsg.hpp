#pragma once
#include "common_srv/DataMessage.hpp"
#include "common_srv/Vector3D.hpp"
#include "common_srv/Poses.hpp"

class PosesMsg : public DataMessage
{

public:

    PosesMsg();
    ~PosesMsg();
    msg_type getType();
    const int getSize();

    Poses p;
};