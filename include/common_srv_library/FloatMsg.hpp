#pragma once
#include "common_srv_library/DataMessage.hpp"

class FloatMsg : public DataMessage
{
public:

    FloatMsg();
    ~FloatMsg();

    msg_type getType();
    const int getSize();

    float data;
    
};