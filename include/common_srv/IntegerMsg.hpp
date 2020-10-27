#pragma once
#include "common_srv/DataMessage.hpp"

class IntegerMsg : public DataMessage
{
public:

    IntegerMsg();
    ~IntegerMsg();

    msg_type getType();
    const int getSize();

    int data;
    
};