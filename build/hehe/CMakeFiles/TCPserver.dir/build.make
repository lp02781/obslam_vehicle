# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mfikih15/obslam_vehicle/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mfikih15/obslam_vehicle/build

# Include any dependencies generated for this target.
include hehe/CMakeFiles/TCPserver.dir/depend.make

# Include the progress variables for this target.
include hehe/CMakeFiles/TCPserver.dir/progress.make

# Include the compile flags for this target's objects.
include hehe/CMakeFiles/TCPserver.dir/flags.make

hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o: hehe/CMakeFiles/TCPserver.dir/flags.make
hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o: /home/mfikih15/obslam_vehicle/src/hehe/src/TCPserver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mfikih15/obslam_vehicle/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o"
	cd /home/mfikih15/obslam_vehicle/build/hehe && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o -c /home/mfikih15/obslam_vehicle/src/hehe/src/TCPserver.cpp

hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TCPserver.dir/src/TCPserver.cpp.i"
	cd /home/mfikih15/obslam_vehicle/build/hehe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mfikih15/obslam_vehicle/src/hehe/src/TCPserver.cpp > CMakeFiles/TCPserver.dir/src/TCPserver.cpp.i

hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TCPserver.dir/src/TCPserver.cpp.s"
	cd /home/mfikih15/obslam_vehicle/build/hehe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mfikih15/obslam_vehicle/src/hehe/src/TCPserver.cpp -o CMakeFiles/TCPserver.dir/src/TCPserver.cpp.s

hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o.requires:

.PHONY : hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o.requires

hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o.provides: hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o.requires
	$(MAKE) -f hehe/CMakeFiles/TCPserver.dir/build.make hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o.provides.build
.PHONY : hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o.provides

hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o.provides.build: hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o


# Object files for target TCPserver
TCPserver_OBJECTS = \
"CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o"

# External object files for target TCPserver
TCPserver_EXTERNAL_OBJECTS =

/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: hehe/CMakeFiles/TCPserver.dir/build.make
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /opt/ros/melodic/lib/libroscpp.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /opt/ros/melodic/lib/librosconsole.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /opt/ros/melodic/lib/librostime.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /opt/ros/melodic/lib/libcpp_common.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver: hehe/CMakeFiles/TCPserver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mfikih15/obslam_vehicle/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver"
	cd /home/mfikih15/obslam_vehicle/build/hehe && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TCPserver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
hehe/CMakeFiles/TCPserver.dir/build: /home/mfikih15/obslam_vehicle/devel/lib/hehe/TCPserver

.PHONY : hehe/CMakeFiles/TCPserver.dir/build

hehe/CMakeFiles/TCPserver.dir/requires: hehe/CMakeFiles/TCPserver.dir/src/TCPserver.cpp.o.requires

.PHONY : hehe/CMakeFiles/TCPserver.dir/requires

hehe/CMakeFiles/TCPserver.dir/clean:
	cd /home/mfikih15/obslam_vehicle/build/hehe && $(CMAKE_COMMAND) -P CMakeFiles/TCPserver.dir/cmake_clean.cmake
.PHONY : hehe/CMakeFiles/TCPserver.dir/clean

hehe/CMakeFiles/TCPserver.dir/depend:
	cd /home/mfikih15/obslam_vehicle/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mfikih15/obslam_vehicle/src /home/mfikih15/obslam_vehicle/src/hehe /home/mfikih15/obslam_vehicle/build /home/mfikih15/obslam_vehicle/build/hehe /home/mfikih15/obslam_vehicle/build/hehe/CMakeFiles/TCPserver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : hehe/CMakeFiles/TCPserver.dir/depend

