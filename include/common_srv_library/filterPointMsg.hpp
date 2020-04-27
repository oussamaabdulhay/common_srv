#pragma once
#include "common_srv_library/DataMessage.hpp"
#include "common_srv_library/Vector3D.hpp"

enum class building_sides {side1,side2,side3,side4};

class filterPointMsg : public DataMessage {

public:
    Vector3D<float> filterPoint;
    building_sides side_of_hit;
    msg_type getType();
    const int getSize();
    void setFilterMessage(Vector3D<float>);
    filterPointMsg();
    ~filterPointMsg();
};