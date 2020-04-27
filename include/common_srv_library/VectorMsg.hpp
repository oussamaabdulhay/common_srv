#pragma once
#include "common_srv_library/DataMessage.hpp"
#include "common_srv_library/Vector3D.hpp"

class VectorMsg : public DataMessage{

public:

    VectorMsg();
    ~VectorMsg();
    msg_type getType();
    const int getSize();

    Vector3D<float> p1, p2;
};