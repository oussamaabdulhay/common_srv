# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "common_srv: 3 messages, 9 services")

set(MSG_I_FLAGS "-Icommon_srv:/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/melodic/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(common_srv_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg" ""
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv" ""
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv" "common_srv/Pose:common_srv/Poses:std_msgs/Float32:geometry_msgs/Point"
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv" ""
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg" "common_srv/Pose:std_msgs/Float32:geometry_msgs/Point"
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv" "common_srv/Pose:common_srv/Poses:std_msgs/Float32:geometry_msgs/Point"
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv" "geometry_msgs/Point"
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv" "geometry_msgs/Point"
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg" "std_msgs/Float32:geometry_msgs/Point"
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv" ""
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv" "common_srv/Pose:std_msgs/Float32:geometry_msgs/Point"
)

get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv" NAME_WE)
add_custom_target(_common_srv_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "common_srv" "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv" "geometry_msgs/Point"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)
_generate_msg_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)
_generate_msg_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)

### Generating Services
_generate_srv_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)
_generate_srv_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)
_generate_srv_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)
_generate_srv_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)
_generate_srv_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)
_generate_srv_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)
_generate_srv_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)
_generate_srv_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)
_generate_srv_cpp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
)

### Generating Module File
_generate_module_cpp(common_srv
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(common_srv_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(common_srv_generate_messages common_srv_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_cpp _common_srv_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(common_srv_gencpp)
add_dependencies(common_srv_gencpp common_srv_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS common_srv_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)
_generate_msg_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)
_generate_msg_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)

### Generating Services
_generate_srv_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)
_generate_srv_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)
_generate_srv_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)
_generate_srv_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)
_generate_srv_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)
_generate_srv_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)
_generate_srv_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)
_generate_srv_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)
_generate_srv_eus(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
)

### Generating Module File
_generate_module_eus(common_srv
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(common_srv_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(common_srv_generate_messages common_srv_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_eus _common_srv_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(common_srv_geneus)
add_dependencies(common_srv_geneus common_srv_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS common_srv_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)
_generate_msg_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)
_generate_msg_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)

### Generating Services
_generate_srv_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)
_generate_srv_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)
_generate_srv_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)
_generate_srv_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)
_generate_srv_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)
_generate_srv_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)
_generate_srv_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)
_generate_srv_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)
_generate_srv_lisp(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
)

### Generating Module File
_generate_module_lisp(common_srv
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(common_srv_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(common_srv_generate_messages common_srv_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_lisp _common_srv_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(common_srv_genlisp)
add_dependencies(common_srv_genlisp common_srv_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS common_srv_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)
_generate_msg_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)
_generate_msg_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)

### Generating Services
_generate_srv_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)
_generate_srv_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)
_generate_srv_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)
_generate_srv_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)
_generate_srv_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)
_generate_srv_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)
_generate_srv_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)
_generate_srv_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)
_generate_srv_nodejs(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
)

### Generating Module File
_generate_module_nodejs(common_srv
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(common_srv_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(common_srv_generate_messages common_srv_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_nodejs _common_srv_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(common_srv_gennodejs)
add_dependencies(common_srv_gennodejs common_srv_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS common_srv_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)
_generate_msg_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)
_generate_msg_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)

### Generating Services
_generate_srv_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)
_generate_srv_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)
_generate_srv_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)
_generate_srv_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)
_generate_srv_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)
_generate_srv_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)
_generate_srv_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)
_generate_srv_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv"
  "${MSG_I_FLAGS}"
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Float32.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)
_generate_srv_py(common_srv
  "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
)

### Generating Module File
_generate_module_py(common_srv
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(common_srv_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(common_srv_generate_messages common_srv_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Point2D.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_float.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_poses.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_int.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Poses.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_poses.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_point.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_vector.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/msg/Pose.msg" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/get_float.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_pose.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/pedrohrpbs/catkin_ws_NAVIO/src/common_srv/srv/set_points.srv" NAME_WE)
add_dependencies(common_srv_generate_messages_py _common_srv_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(common_srv_genpy)
add_dependencies(common_srv_genpy common_srv_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS common_srv_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/common_srv
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(common_srv_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(common_srv_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/common_srv
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(common_srv_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(common_srv_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/common_srv
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(common_srv_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(common_srv_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/common_srv
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(common_srv_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(common_srv_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/common_srv
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(common_srv_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(common_srv_generate_messages_py geometry_msgs_generate_messages_py)
endif()
