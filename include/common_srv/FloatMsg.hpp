#pragma once
#include "common_srv/DataMessage.hpp"

class FloatMsg : public DataMessage
{

private:
    msg_type _type;
    float _data;

public:

    FloatMsg();
    ~FloatMsg();

    msg_type getType();
    const int getSize();
    float getData();
    void setFloatMsg(float );

    float data;
    
};