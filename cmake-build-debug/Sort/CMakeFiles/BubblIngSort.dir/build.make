# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/liyp/CLionProjects/DataStruct

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liyp/CLionProjects/DataStruct/cmake-build-debug

# Include any dependencies generated for this target.
include Sort/CMakeFiles/BubblIngSort.dir/depend.make
# Include the progress variables for this target.
include Sort/CMakeFiles/BubblIngSort.dir/progress.make

# Include the compile flags for this target's objects.
include Sort/CMakeFiles/BubblIngSort.dir/flags.make

Sort/CMakeFiles/BubblIngSort.dir/BubblIngSort.c.o: Sort/CMakeFiles/BubblIngSort.dir/flags.make
Sort/CMakeFiles/BubblIngSort.dir/BubblIngSort.c.o: ../Sort/BubblIngSort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liyp/CLionProjects/DataStruct/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Sort/CMakeFiles/BubblIngSort.dir/BubblIngSort.c.o"
	cd /home/liyp/CLionProjects/DataStruct/cmake-build-debug/Sort && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/BubblIngSort.dir/BubblIngSort.c.o -c /home/liyp/CLionProjects/DataStruct/Sort/BubblIngSort.c

Sort/CMakeFiles/BubblIngSort.dir/BubblIngSort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BubblIngSort.dir/BubblIngSort.c.i"
	cd /home/liyp/CLionProjects/DataStruct/cmake-build-debug/Sort && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/liyp/CLionProjects/DataStruct/Sort/BubblIngSort.c > CMakeFiles/BubblIngSort.dir/BubblIngSort.c.i

Sort/CMakeFiles/BubblIngSort.dir/BubblIngSort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BubblIngSort.dir/BubblIngSort.c.s"
	cd /home/liyp/CLionProjects/DataStruct/cmake-build-debug/Sort && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/liyp/CLionProjects/DataStruct/Sort/BubblIngSort.c -o CMakeFiles/BubblIngSort.dir/BubblIngSort.c.s

# Object files for target BubblIngSort
BubblIngSort_OBJECTS = \
"CMakeFiles/BubblIngSort.dir/BubblIngSort.c.o"

# External object files for target BubblIngSort
BubblIngSort_EXTERNAL_OBJECTS =

Sort/BubblIngSort: Sort/CMakeFiles/BubblIngSort.dir/BubblIngSort.c.o
Sort/BubblIngSort: Sort/CMakeFiles/BubblIngSort.dir/build.make
Sort/BubblIngSort: Sort/CMakeFiles/BubblIngSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/liyp/CLionProjects/DataStruct/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BubblIngSort"
	cd /home/liyp/CLionProjects/DataStruct/cmake-build-debug/Sort && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BubblIngSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Sort/CMakeFiles/BubblIngSort.dir/build: Sort/BubblIngSort
.PHONY : Sort/CMakeFiles/BubblIngSort.dir/build

Sort/CMakeFiles/BubblIngSort.dir/clean:
	cd /home/liyp/CLionProjects/DataStruct/cmake-build-debug/Sort && $(CMAKE_COMMAND) -P CMakeFiles/BubblIngSort.dir/cmake_clean.cmake
.PHONY : Sort/CMakeFiles/BubblIngSort.dir/clean

Sort/CMakeFiles/BubblIngSort.dir/depend:
	cd /home/liyp/CLionProjects/DataStruct/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liyp/CLionProjects/DataStruct /home/liyp/CLionProjects/DataStruct/Sort /home/liyp/CLionProjects/DataStruct/cmake-build-debug /home/liyp/CLionProjects/DataStruct/cmake-build-debug/Sort /home/liyp/CLionProjects/DataStruct/cmake-build-debug/Sort/CMakeFiles/BubblIngSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Sort/CMakeFiles/BubblIngSort.dir/depend

