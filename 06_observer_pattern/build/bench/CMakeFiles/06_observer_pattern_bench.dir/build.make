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
include bench/CMakeFiles/06_observer_pattern_bench.dir/depend.make

# Include the progress variables for this target.
include bench/CMakeFiles/06_observer_pattern_bench.dir/progress.make

# Include the compile flags for this target's objects.
include bench/CMakeFiles/06_observer_pattern_bench.dir/flags.make

bench/CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.o: bench/CMakeFiles/06_observer_pattern_bench.dir/flags.make
bench/CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.o: ../bench/src/DummyBench.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object bench/CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.o"
	cd /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/bench && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.o -c /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/bench/src/DummyBench.cpp

bench/CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.i"
	cd /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/bench && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/bench/src/DummyBench.cpp > CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.i

bench/CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.s"
	cd /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/bench && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/bench/src/DummyBench.cpp -o CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.s

# Object files for target 06_observer_pattern_bench
06_observer_pattern_bench_OBJECTS = \
"CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.o"

# External object files for target 06_observer_pattern_bench
06_observer_pattern_bench_EXTERNAL_OBJECTS =

bench/06_observer_pattern_bench: bench/CMakeFiles/06_observer_pattern_bench.dir/src/DummyBench.cpp.o
bench/06_observer_pattern_bench: bench/CMakeFiles/06_observer_pattern_bench.dir/build.make
bench/06_observer_pattern_bench: lib06_observer_pattern_lib.a
bench/06_observer_pattern_bench: external/benchmark/src/libbenchmark.a
bench/06_observer_pattern_bench: external/benchmark/src/libbenchmark_main.a
bench/06_observer_pattern_bench: external/benchmark/src/libbenchmark.a
bench/06_observer_pattern_bench: /usr/lib/x86_64-linux-gnu/librt.so
bench/06_observer_pattern_bench: bench/CMakeFiles/06_observer_pattern_bench.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 06_observer_pattern_bench"
	cd /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/bench && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/06_observer_pattern_bench.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bench/CMakeFiles/06_observer_pattern_bench.dir/build: bench/06_observer_pattern_bench

.PHONY : bench/CMakeFiles/06_observer_pattern_bench.dir/build

bench/CMakeFiles/06_observer_pattern_bench.dir/clean:
	cd /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/bench && $(CMAKE_COMMAND) -P CMakeFiles/06_observer_pattern_bench.dir/cmake_clean.cmake
.PHONY : bench/CMakeFiles/06_observer_pattern_bench.dir/clean

bench/CMakeFiles/06_observer_pattern_bench.dir/depend:
	cd /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/bench /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/bench /home/student/oop_2019_g2_adam_pilichowski/06_observer_pattern/build/bench/CMakeFiles/06_observer_pattern_bench.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bench/CMakeFiles/06_observer_pattern_bench.dir/depend
