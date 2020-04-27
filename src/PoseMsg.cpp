#include "common_srv_library/PoseMsg.hpp"

PoseMsg::PoseMsg()
{

}

PoseMsg::~PoseMsg()
{

}

msg_type PoseMsg::getType()
{
    return msg_type::POSE;
}

const int PoseMsg::getSize()
{
    return sizeof(PoseMsg);
}