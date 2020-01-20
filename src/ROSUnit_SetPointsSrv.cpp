#include "ROSUnit_SetPointsSrv.hpp"

ROSUnit_SetPointsSrv* ROSUnit_SetPointsSrv::m_ptr;

ROSUnit_SetPointsSrv::ROSUnit_SetPointsSrv(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, srv_callback);
    m_ptr = this;
}

ROSUnit_SetPointsSrv::~ROSUnit_SetPointsSrv()
{

}

bool ROSUnit_SetPointsSrv::srv_callback(common_srv::set_points::Request& req, common_srv::set_points::Response& res)
{
    //Change the code below to reflect your system
    PointsMsg t_msg;
    for(int i = 0; i < req.p.size(); i++)
    {
        Vector3D<float> t_vec;
        t_vec.x = req.p.at(i).x;
        t_vec.y = req.p.at(i).y;
        t_vec.z = req.p.at(i).z;
        t_msg.points.push_back(t_vec);
    }
    m_ptr->emit_message((DataMessage*) &t_msg);
    return true;
}