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
include demo/lesson08/CMakeFiles/containers1.dir/depend.make

# Include the progress variables for this target.
include demo/lesson08/CMakeFiles/containers1.dir/progress.make

# Include the compile flags for this target's objects.
include demo/lesson08/CMakeFiles/containers1.dir/flags.make

demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o: demo/lesson08/CMakeFiles/containers1.dir/flags.make
demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o: demo/lesson08/containers1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phuongdung/CAdvanced/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o"
	cd /home/phuongdung/CAdvanced/demo/lesson08 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/containers1.dir/containers1.c.o   -c /home/phuongdung/CAdvanced/demo/lesson08/containers1.c

demo/lesson08/CMakeFiles/containers1.dir/containers1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/containers1.dir/containers1.c.i"
	cd /home/phuongdung/CAdvanced/demo/lesson08 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phuongdung/CAdvanced/demo/lesson08/containers1.c > CMakeFiles/containers1.dir/containers1.c.i

demo/lesson08/CMakeFiles/containers1.dir/containers1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/containers1.dir/containers1.c.s"
	cd /home/phuongdung/CAdvanced/demo/lesson08 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phuongdung/CAdvanced/demo/lesson08/containers1.c -o CMakeFiles/containers1.dir/containers1.c.s

demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o.requires:

.PHONY : demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o.requires

demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o.provides: demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o.requires
	$(MAKE) -f demo/lesson08/CMakeFiles/containers1.dir/build.make demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o.provides.build
.PHONY : demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o.provides

demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o.provides.build: demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o


# Object files for target containers1
containers1_OBJECTS = \
"CMakeFiles/containers1.dir/containers1.c.o"

# External object files for target containers1
containers1_EXTERNAL_OBJECTS =

demo/lesson08/containers1: demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o
demo/lesson08/containers1: demo/lesson08/CMakeFiles/containers1.dir/build.make
demo/lesson08/containers1: libfdr/libfdr.a
demo/lesson08/containers1: DebugPrintf/libdebug_printf.a
demo/lesson08/containers1: demo/lesson08/CMakeFiles/containers1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/phuongdung/CAdvanced/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable containers1"
	cd /home/phuongdung/CAdvanced/demo/lesson08 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/containers1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
demo/lesson08/CMakeFiles/containers1.dir/build: demo/lesson08/containers1

.PHONY : demo/lesson08/CMakeFiles/containers1.dir/build

demo/lesson08/CMakeFiles/containers1.dir/requires: demo/lesson08/CMakeFiles/containers1.dir/containers1.c.o.requires

.PHONY : demo/lesson08/CMakeFiles/containers1.dir/requires

demo/lesson08/CMakeFiles/containers1.dir/clean:
	cd /home/phuongdung/CAdvanced/demo/lesson08 && $(CMAKE_COMMAND) -P CMakeFiles/containers1.dir/cmake_clean.cmake
.PHONY : demo/lesson08/CMakeFiles/containers1.dir/clean

demo/lesson08/CMakeFiles/containers1.dir/depend:
	cd /home/phuongdung/CAdvanced && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/phuongdung/CAdvanced /home/phuongdung/CAdvanced/demo/lesson08 /home/phuongdung/CAdvanced /home/phuongdung/CAdvanced/demo/lesson08 /home/phuongdung/CAdvanced/demo/lesson08/CMakeFiles/containers1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : demo/lesson08/CMakeFiles/containers1.dir/depend

