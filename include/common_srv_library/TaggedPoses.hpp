#pragma once

#include "common_srv_library/Vector3D.hpp"
#include "common_srv_library/Poses.hpp"

class TaggedPoses
{
    
public:

    Poses poses;
    int tag;
};