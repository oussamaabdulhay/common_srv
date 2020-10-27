#pragma once
class Block;
#include "common_srv/Port.hpp"
#include "common_types.hpp"
#include <iostream>
#include <vector>
#include "common_srv/DataMessage.hpp"
#include "common_srv/MsgReceiver.hpp"


class Block {

    public:

        virtual void process(DataMessage* t_msg, Port* t_port) = 0;
        Block();
        ~Block();
        std::vector<Port*> getPorts() {return _ports;}

    protected:

        static std::vector<Port*> _ports;
};