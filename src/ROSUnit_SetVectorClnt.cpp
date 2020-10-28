#include "common_srv/ROSUnit_SetVectorClnt.hpp"

ROSUnit_SetVectorClnt::ROSUnit_SetVectorClnt(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    _input_port_0 = new InputPort(ports_id::IP_0, this);
    _ports = {_input_port_0};
    m_client = t_main_handler.serviceClient<common_srv::set_vector>(t_name);
}

ROSUnit_SetVectorClnt::~ROSUnit_SetVectorClnt()
{

}

void ROSUnit_SetVectorClnt::process(DataMessage* t_msg, Port* t_port) {
    //Change the below code to match your received msg
    if(t_port->getID() == ports_id::IP_0)
    {
        common_srv::set_vector t_srv;
        VectorMsg* t_vector = (VectorMsg*) t_msg;
        t_srv.request.p1.x = t_vector->p1.x;
        t_srv.request.p1.y = t_vector->p1.y;
        t_srv.request.p1.z = t_vector->p1.z;
        t_srv.request.p1.x = t_vector->p2.x;
        t_srv.request.p1.y = t_vector->p2.y;
        t_srv.request.p1.z = t_vector->p2.z;
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