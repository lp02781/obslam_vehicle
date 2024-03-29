# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "hehe: 3 messages, 0 services")

set(MSG_I_FLAGS "-Ihehe:/home/mfikih15/obslam_vehicle/src/hehe/msg;-Imavros_msgs:/opt/ros/melodic/share/mavros_msgs/cmake/../msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/melodic/share/sensor_msgs/cmake/../msg;-Igeographic_msgs:/opt/ros/melodic/share/geographic_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/melodic/share/geometry_msgs/cmake/../msg;-Iuuid_msgs:/opt/ros/melodic/share/uuid_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(hehe_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg" NAME_WE)
add_custom_target(_hehe_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "hehe" "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg" ""
)

get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg" NAME_WE)
add_custom_target(_hehe_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "hehe" "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg" ""
)

get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg" NAME_WE)
add_custom_target(_hehe_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "hehe" "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/hehe
)
_generate_msg_cpp(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/hehe
)
_generate_msg_cpp(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/hehe
)

### Generating Services

### Generating Module File
_generate_module_cpp(hehe
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/hehe
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(hehe_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(hehe_generate_messages hehe_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg" NAME_WE)
add_dependencies(hehe_generate_messages_cpp _hehe_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg" NAME_WE)
add_dependencies(hehe_generate_messages_cpp _hehe_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg" NAME_WE)
add_dependencies(hehe_generate_messages_cpp _hehe_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(hehe_gencpp)
add_dependencies(hehe_gencpp hehe_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS hehe_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/hehe
)
_generate_msg_eus(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/hehe
)
_generate_msg_eus(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/hehe
)

### Generating Services

### Generating Module File
_generate_module_eus(hehe
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/hehe
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(hehe_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(hehe_generate_messages hehe_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg" NAME_WE)
add_dependencies(hehe_generate_messages_eus _hehe_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg" NAME_WE)
add_dependencies(hehe_generate_messages_eus _hehe_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg" NAME_WE)
add_dependencies(hehe_generate_messages_eus _hehe_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(hehe_geneus)
add_dependencies(hehe_geneus hehe_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS hehe_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/hehe
)
_generate_msg_lisp(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/hehe
)
_generate_msg_lisp(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/hehe
)

### Generating Services

### Generating Module File
_generate_module_lisp(hehe
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/hehe
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(hehe_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(hehe_generate_messages hehe_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg" NAME_WE)
add_dependencies(hehe_generate_messages_lisp _hehe_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg" NAME_WE)
add_dependencies(hehe_generate_messages_lisp _hehe_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg" NAME_WE)
add_dependencies(hehe_generate_messages_lisp _hehe_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(hehe_genlisp)
add_dependencies(hehe_genlisp hehe_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS hehe_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/hehe
)
_generate_msg_nodejs(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/hehe
)
_generate_msg_nodejs(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/hehe
)

### Generating Services

### Generating Module File
_generate_module_nodejs(hehe
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/hehe
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(hehe_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(hehe_generate_messages hehe_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg" NAME_WE)
add_dependencies(hehe_generate_messages_nodejs _hehe_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg" NAME_WE)
add_dependencies(hehe_generate_messages_nodejs _hehe_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg" NAME_WE)
add_dependencies(hehe_generate_messages_nodejs _hehe_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(hehe_gennodejs)
add_dependencies(hehe_gennodejs hehe_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS hehe_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/hehe
)
_generate_msg_py(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/hehe
)
_generate_msg_py(hehe
  "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/hehe
)

### Generating Services

### Generating Module File
_generate_module_py(hehe
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/hehe
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(hehe_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(hehe_generate_messages hehe_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/sensor.msg" NAME_WE)
add_dependencies(hehe_generate_messages_py _hehe_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/pixhawk.msg" NAME_WE)
add_dependencies(hehe_generate_messages_py _hehe_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mfikih15/obslam_vehicle/src/hehe/msg/lidar.msg" NAME_WE)
add_dependencies(hehe_generate_messages_py _hehe_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(hehe_genpy)
add_dependencies(hehe_genpy hehe_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS hehe_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/hehe)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/hehe
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET mavros_msgs_generate_messages_cpp)
  add_dependencies(hehe_generate_messages_cpp mavros_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(hehe_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(hehe_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/hehe)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/hehe
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET mavros_msgs_generate_messages_eus)
  add_dependencies(hehe_generate_messages_eus mavros_msgs_generate_messages_eus)
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(hehe_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET sensor_msgs_generate_messages_eus)
  add_dependencies(hehe_generate_messages_eus sensor_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/hehe)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/hehe
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET mavros_msgs_generate_messages_lisp)
  add_dependencies(hehe_generate_messages_lisp mavros_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(hehe_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(hehe_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/hehe)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/hehe
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET mavros_msgs_generate_messages_nodejs)
  add_dependencies(hehe_generate_messages_nodejs mavros_msgs_generate_messages_nodejs)
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(hehe_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET sensor_msgs_generate_messages_nodejs)
  add_dependencies(hehe_generate_messages_nodejs sensor_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/hehe)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/hehe\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/hehe
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET mavros_msgs_generate_messages_py)
  add_dependencies(hehe_generate_messages_py mavros_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(hehe_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(hehe_generate_messages_py sensor_msgs_generate_messages_py)
endif()
