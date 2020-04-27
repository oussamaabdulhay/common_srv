#pragma once

#include "common_srv_library/DataMessage.hpp"
#include "common_srv_library/Vector3D.hpp"
#include <vector>

class PointsMsg : public DataMessage
{

public:

    PointsMsg();
    ~PointsMsg();
    msg_type getType();
    const int getSize();

    std::vector<Vector3D<float>> points;
};