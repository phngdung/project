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
CMAKE_SOURCE_DIR = /home/phuongdung/CAdvanced

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/phuongdung/CAdvanced

# Include any dependencies generated for this target.
include demo/lesson06/CMakeFiles/containers.dir/depend.make

# Include the progress variables for this target.
include demo/lesson06/CMakeFiles/containers.dir/progress.make

# Include the compile flags for this target's objects.
include demo/lesson06/CMakeFiles/containers.dir/flags.make

demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o: demo/lesson06/CMakeFiles/containers.dir/flags.make
demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o: demo/lesson06/demo_containers.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phuongdung/CAdvanced/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o"
	cd /home/phuongdung/CAdvanced/demo/lesson06 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/containers.dir/demo_containers.c.o   -c /home/phuongdung/CAdvanced/demo/lesson06/demo_containers.c

demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/containers.dir/demo_containers.c.i"
	cd /home/phuongdung/CAdvanced/demo/lesson06 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phuongdung/CAdvanced/demo/lesson06/demo_containers.c > CMakeFiles/containers.dir/demo_containers.c.i

demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/containers.dir/demo_containers.c.s"
	cd /home/phuongdung/CAdvanced/demo/lesson06 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phuongdung/CAdvanced/demo/lesson06/demo_containers.c -o CMakeFiles/containers.dir/demo_containers.c.s

demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o.requires:

.PHONY : demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o.requires

demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o.provides: demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o.requires
	$(MAKE) -f demo/lesson06/CMakeFiles/containers.dir/build.make demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o.provides.build
.PHONY : demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o.provides

demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o.provides.build: demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o


# Object files for target containers
containers_OBJECTS = \
"CMakeFiles/containers.dir/demo_containers.c.o"

# External object files for target containers
containers_EXTERNAL_OBJECTS =

demo/lesson06/containers: demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o
demo/lesson06/containers: demo/lesson06/CMakeFiles/containers.dir/build.make
demo/lesson06/containers: libfdr/libfdr.a
demo/lesson06/containers: DebugPrintf/libdebug_printf.a
demo/lesson06/containers: demo/lesson06/CMakeFiles/containers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/phuongdung/CAdvanced/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable containers"
	cd /home/phuongdung/CAdvanced/demo/lesson06 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/containers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
demo/lesson06/CMakeFiles/containers.dir/build: demo/lesson06/containers

.PHONY : demo/lesson06/CMakeFiles/containers.dir/build

demo/lesson06/CMakeFiles/containers.dir/requires: demo/lesson06/CMakeFiles/containers.dir/demo_containers.c.o.requires

.PHONY : demo/lesson06/CMakeFiles/containers.dir/requires

demo/lesson06/CMakeFiles/containers.dir/clean:
	cd /home/phuongdung/CAdvanced/demo/lesson06 && $(CMAKE_COMMAND) -P CMakeFiles/containers.dir/cmake_clean.cmake
.PHONY : demo/lesson06/CMakeFiles/containers.dir/clean

demo/lesson06/CMakeFiles/containers.dir/depend:
	cd /home/phuongdung/CAdvanced && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/phuongdung/CAdvanced /home/phuongdung/CAdvanced/demo/lesson06 /home/phuongdung/CAdvanced /home/phuongdung/CAdvanced/demo/lesson06 /home/phuongdung/CAdvanced/demo/lesson06/CMakeFiles/containers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : demo/lesson06/CMakeFiles/containers.dir/depend

