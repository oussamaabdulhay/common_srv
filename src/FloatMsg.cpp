#include "common_srv/FloatMsg.hpp"

FloatMsg::FloatMsg()
{
}

FloatMsg::~FloatMsg()
{

}

msg_type FloatMsg::getType()
{
    return msg_type::FLOAT;
}

const int FloatMsg::getSize()
{
    return sizeof(FloatMsg);
}

float FloatMsg::getData(){
    return _data;
}

void FloatMsg::setFloatMsg(float t_data) {
    _type = msg_type::FLOAT;
    _data = t_data;
}