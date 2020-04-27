#pragma once
#include "common_srv_library/DataMessage.hpp"

class BooleanMsg : public DataMessage{

public:

    BooleanMsg();
    ~BooleanMsg();

    msg_type getType();
    const int getSize();

    bool data;
};