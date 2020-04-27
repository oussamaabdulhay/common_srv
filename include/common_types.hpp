#pragma once
#include <stdint.h>

const struct tPacketProp{
	uint8_t pad_len = 3;
	uint8_t hdr_len = 2;
	uint8_t crc_len = 2;
	uint8_t pad_data[3] = { 0xFF, 0x00, 0xAA };
	uint8_t pad_EOH = 0xFF;
	uint8_t pad_EOP = 0xFF;
}PacketProp;

enum class msg_type {TESTMSG, SERIALDATA ,reference, THREEAXISSENSORMSG, VELOCITY, 
ACCELERATION, THERMALIMAGE, optitrack, FLIGHTSCENARIO, POSES, TAGGEDPOSES, POSE, 
POSITION, ATTITUDE, HEADING, NOZZLEMSG, UPDATECONTROLLER, RESETCONTROLLER, 
control_system, HEARTBEAT, CONTROLLEROUTPUTMSG, UPDATEPOSEREFERENCE, UPDATENOZZLEPOSEREFERENCE, 
controller, float_msg, FLOAT, BOOLEAN, INTEGER, switcher, VECTOR2D, VECTOR3D, 
POINT, POINTS, VECTOR, external_reference, ack,internal_msg_start, ROS, EMPTY, VECTORDOUBLE};
