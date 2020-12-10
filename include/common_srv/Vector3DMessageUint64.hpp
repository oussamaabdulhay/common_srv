#pragma once
#include "common_srv/DataMessage.hpp"
#include "common_srv/Vector3D.hpp"

class Vector3DMessageUint64 : public DataMessage{

private:
    msg_type _type;
    Vector3D<float> _data;

public:

    msg_type getType();
    const int getSize();
    Vector3D<float> getData();
    
    Vector3DMessageUint64();
    ~Vector3DMessageUint64();

    void setVector3DMessageUint64(Vector3D<float>);
};