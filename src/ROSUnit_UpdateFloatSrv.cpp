#include "ROSUnit_UpdateFloatSrv.hpp"

ROSUnit_UpdateFloatSrv* ROSUnit_UpdateFloatSrv::m_ptr;

ROSUnit_UpdateFloatSrv::ROSUnit_UpdateFloatSrv(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, srv_callback);
    m_ptr = this;
}

ROSUnit_UpdateFloatSrv::~ROSUnit_UpdateFloatSrv()
{

}

bool ROSUnit_UpdateFloatSrv::srv_callback(std_srvs::Empty::Request& req, std_srvs::Empty::Response& res)
{
    FloatMsg t_msg;
    m_ptr->emit_message((DataMessage*) &t_msg);
    return true;
}