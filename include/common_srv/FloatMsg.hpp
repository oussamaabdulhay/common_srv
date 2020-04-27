#pragma once
#include "common_srv/DataMessage.hpp"

class FloatMsg : public DataMessage
{
public:

    FloatMsg();
    ~FloatMsg();

    msg_type getType();
    const int getSize();

    float data;
    
};