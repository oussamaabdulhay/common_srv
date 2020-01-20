#include "ROSUnit_EmptySrv.hpp"

ROSUnit_EmptySrv* ROSUnit_EmptySrv::m_ptr;

ROSUnit_EmptySrv::ROSUnit_EmptySrv(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, srv_callback);
    m_ptr = this;
}

ROSUnit_EmptySrv::~ROSUnit_EmptySrv()
{

}

bool ROSUnit_EmptySrv::srv_callback(std_srvs::Empty::Request& req, std_srvs::Empty::Response& res)
{
    //Change the code below to reflect your system
    EmptyMsg t_msg;
    m_ptr->emit_message((DataMessage*) &t_msg);
    return true;
}