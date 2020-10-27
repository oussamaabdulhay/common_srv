#include "common_srv/ROSUnit_SetPointClnt.hpp"

ROSUnit_SetPointClnt::ROSUnit_SetPointClnt(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    _input_port_0 = new InputPort(ports_id::IP_0, this);
    _ports = {_input_port_0};
    m_client = t_main_handler.serviceClient<common_srv::set_point>(t_name);
}

ROSUnit_SetPointClnt::~ROSUnit_SetPointClnt()
{

}

void ROSUnit_SetPointClnt::process(DataMessage* t_msg, Port* t_port) {
    //Change the below code to match your received msg
    if(t_port->getID() == ports_id::IP_0)
    {
        common_srv::set_point t_srv;
        Vector3DMessage* t_vector = (Vector3DMessage*) t_msg;
        t_srv.request.p.x = t_vector->getData().x;
        t_srv.request.p.y = t_vector->getData().y;
        t_srv.request.p.z = t_vector->getData().z;
        if(m_client.call(t_srv))
        {
            //TODO: add success condition
        }
        else
        {
            //TODO: add error
        }
    }
}
