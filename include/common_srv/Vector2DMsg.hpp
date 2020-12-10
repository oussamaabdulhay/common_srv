#pragma once
#include "common_srv/DataMessage.hpp"
#include "common_srv/Vector2D.hpp"

class Vector2DMsg : public DataMessage
{
private:
    msg_type _type;
    Vector2D<float> _data;

public:
    Vector2DMsg();
    ~Vector2DMsg();

    msg_type getType();
    const int getSize();
    Vector2D<float> getData();

    Vector2D<float> data;

    void setVector2DMsg(Vector2D<float>);
};