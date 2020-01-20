#include "ROSUnit_SetFloatSrv.hpp"

ROSUnit_SetFloatSrv* ROSUnit_SetFloatSrv::m_ptr;

ROSUnit_SetFloatSrv::ROSUnit_SetFloatSrv(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, srv_callback);
    m_ptr = this;
}

ROSUnit_SetFloatSrv::~ROSUnit_SetFloatSrv()
{

}

bool ROSUnit_SetFloatSrv::srv_callback(common_srv::set_float::Request& req, common_srv::set_float::Response& res)
{
    FloatMsg t_msg;
    t_msg.data = req.data;
    m_ptr->emit_message((DataMessage*) &t_msg);
    return true;
}