# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /opt/clion-2019.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build

# Include any dependencies generated for this target.
include CMakeFiles/06_observer_pattern_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/06_observer_pattern_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/06_observer_pattern_lib.dir/flags.make

CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.o: CMakeFiles/06_observer_pattern_lib.dir/flags.make
CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.o: ../src/Dummy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.o -c /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/src/Dummy.cpp

CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/src/Dummy.cpp > CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.i

CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/src/Dummy.cpp -o CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.s

# Object files for target 06_observer_pattern_lib
06_observer_pattern_lib_OBJECTS = \
"CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.o"

# External object files for target 06_observer_pattern_lib
06_observer_pattern_lib_EXTERNAL_OBJECTS =

lib06_observer_pattern_lib.a: CMakeFiles/06_observer_pattern_lib.dir/src/Dummy.cpp.o
lib06_observer_pattern_lib.a: CMakeFiles/06_observer_pattern_lib.dir/build.make
lib06_observer_pattern_lib.a: CMakeFiles/06_observer_pattern_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library lib06_observer_pattern_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/06_observer_pattern_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/06_observer_pattern_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/06_observer_pattern_lib.dir/build: lib06_observer_pattern_lib.a

.PHONY : CMakeFiles/06_observer_pattern_lib.dir/build

CMakeFiles/06_observer_pattern_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/06_observer_pattern_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/06_observer_pattern_lib.dir/clean

CMakeFiles/06_observer_pattern_lib.dir/depend:
	cd /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/CMakeFiles/06_observer_pattern_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/06_observer_pattern_lib.dir/depend

