#include "ROSUnit_SetPointSrv.hpp"

ROSUnit_SetPointSrv* ROSUnit_SetPointSrv::m_ptr;

ROSUnit_SetPointSrv::ROSUnit_SetPointSrv(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, srv_callback);
    m_ptr = this;
}

ROSUnit_SetPointSrv::~ROSUnit_SetPointSrv()
{

}

bool ROSUnit_SetPointSrv::srv_callback(common_srv::set_point::Request& req, common_srv::set_point::Response& res)
{
    Vector3DMessage t_msg;
    Vector3D<float> t_vec;
    t_vec.x = req.p.x;
    t_vec.y = req.p.y;
    t_vec.z = req.p.z;
    t_msg.setVector3DMessage(t_vec);
    m_ptr->emit_message((DataMessage*) &t_msg);
    return true;
}