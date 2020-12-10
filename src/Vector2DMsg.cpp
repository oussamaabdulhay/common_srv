#include "common_srv/Vector2DMsg.hpp"

Vector2DMsg::Vector2DMsg() {
}

Vector2DMsg::~Vector2DMsg() {

}

msg_type Vector2DMsg::getType(){
    return msg_type::VECTOR2D;
}

const int Vector2DMsg::getSize()
{
    return sizeof(*this);
}

Vector2D<float> Vector2DMsg::getData(){
    return _data;
}

void Vector2DMsg::setVector2DMsg(Vector2D<float> t_data) {
    _type = msg_type::VECTOR2D;
    _data = t_data;
}