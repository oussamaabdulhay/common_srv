#include "common_srv/Vector3DMessageUint64.hpp"

Vector3DMessageUint64::Vector3DMessageUint64() {
}

Vector3DMessageUint64::~Vector3DMessageUint64() {

}

msg_type Vector3DMessageUint64::getType(){
    return _type;
}

const int Vector3DMessageUint64::getSize()
{
    return sizeof(this);
}

Vector3D<float> Vector3DMessageUint64::getData(){
    return _data;
}

void Vector3DMessageUint64::setVector3DMessageUint64(Vector3D<float> t_data) {
    _type = msg_type::Vector3DUINT64;
    _data = t_data;
}
