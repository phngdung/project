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
include CMakeFiles/bt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bt.dir/flags.make

CMakeFiles/bt.dir/2015.c.o: CMakeFiles/bt.dir/flags.make
CMakeFiles/bt.dir/2015.c.o: 2015.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phuongdung/CAdvanced/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bt.dir/2015.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/bt.dir/2015.c.o   -c /home/phuongdung/CAdvanced/2015.c

CMakeFiles/bt.dir/2015.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bt.dir/2015.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phuongdung/CAdvanced/2015.c > CMakeFiles/bt.dir/2015.c.i

CMakeFiles/bt.dir/2015.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bt.dir/2015.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phuongdung/CAdvanced/2015.c -o CMakeFiles/bt.dir/2015.c.s

CMakeFiles/bt.dir/2015.c.o.requires:

.PHONY : CMakeFiles/bt.dir/2015.c.o.requires

CMakeFiles/bt.dir/2015.c.o.provides: CMakeFiles/bt.dir/2015.c.o.requires
	$(MAKE) -f CMakeFiles/bt.dir/build.make CMakeFiles/bt.dir/2015.c.o.provides.build
.PHONY : CMakeFiles/bt.dir/2015.c.o.provides

CMakeFiles/bt.dir/2015.c.o.provides.build: CMakeFiles/bt.dir/2015.c.o


# Object files for target bt
bt_OBJECTS = \
"CMakeFiles/bt.dir/2015.c.o"

# External object files for target bt
bt_EXTERNAL_OBJECTS =

bt: CMakeFiles/bt.dir/2015.c.o
bt: CMakeFiles/bt.dir/build.make
bt: libfdr/libfdr.a
bt: binaries/libigraph.a
bt: CMakeFiles/bt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/phuongdung/CAdvanced/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bt.dir/build: bt

.PHONY : CMakeFiles/bt.dir/build

CMakeFiles/bt.dir/requires: CMakeFiles/bt.dir/2015.c.o.requires

.PHONY : CMakeFiles/bt.dir/requires

CMakeFiles/bt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bt.dir/clean

CMakeFiles/bt.dir/depend:
	cd /home/phuongdung/CAdvanced && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/phuongdung/CAdvanced /home/phuongdung/CAdvanced /home/phuongdung/CAdvanced /home/phuongdung/CAdvanced /home/phuongdung/CAdvanced/CMakeFiles/bt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bt.dir/depend

