cmake_minimum_required(VERSION 2.8.3)
project(common_srv)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  geometry_msgs
  message_generation
  genmsg
)

add_message_files(
  FILES
  Pose.msg
  Poses.msg
  Point2D.msg
)

add_service_files(
   FILES
   get_float.srv
   get_poses.srv
   set_float.srv
   set_int.srv
   set_point.srv
   set_points.srv
   set_pose.srv
   set_poses.srv
   set_vector.srv
) 

generate_messages(
   DEPENDENCIES
   std_msgs
   geometry_msgs
)

catkin_package(
  INCLUDE_DIRS 
  LIBRARIES
  CATKIN_DEPENDS
    roscpp
    std_msgs
  DEPENDS
    system_lib
)


include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${catkin_INCLUDE_DIRS}
  include
)


FILE(GLOB SOURCE_FILES *.hpp *.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        )


add_executable(${PROJECT_NAME} ${SOURCE_FILES})
add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS})
add_dependencies(${PROJECT_NAME} ${catkin_EXPORTED_TARGETS})
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})
