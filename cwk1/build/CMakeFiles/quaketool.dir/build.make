# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /workspaces/User-Interfaces/cwk1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/User-Interfaces/cwk1/build

# Include any dependencies generated for this target.
include CMakeFiles/quaketool.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/quaketool.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/quaketool.dir/flags.make

CMakeFiles/quaketool.dir/main.cpp.o: CMakeFiles/quaketool.dir/flags.make
CMakeFiles/quaketool.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/User-Interfaces/cwk1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/quaketool.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/quaketool.dir/main.cpp.o -c /workspaces/User-Interfaces/cwk1/main.cpp

CMakeFiles/quaketool.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quaketool.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/User-Interfaces/cwk1/main.cpp > CMakeFiles/quaketool.dir/main.cpp.i

CMakeFiles/quaketool.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quaketool.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/User-Interfaces/cwk1/main.cpp -o CMakeFiles/quaketool.dir/main.cpp.s

CMakeFiles/quaketool.dir/quake.cpp.o: CMakeFiles/quaketool.dir/flags.make
CMakeFiles/quaketool.dir/quake.cpp.o: ../quake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/User-Interfaces/cwk1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/quaketool.dir/quake.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/quaketool.dir/quake.cpp.o -c /workspaces/User-Interfaces/cwk1/quake.cpp

CMakeFiles/quaketool.dir/quake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quaketool.dir/quake.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/User-Interfaces/cwk1/quake.cpp > CMakeFiles/quaketool.dir/quake.cpp.i

CMakeFiles/quaketool.dir/quake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quaketool.dir/quake.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/User-Interfaces/cwk1/quake.cpp -o CMakeFiles/quaketool.dir/quake.cpp.s

CMakeFiles/quaketool.dir/dataset.cpp.o: CMakeFiles/quaketool.dir/flags.make
CMakeFiles/quaketool.dir/dataset.cpp.o: ../dataset.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/User-Interfaces/cwk1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/quaketool.dir/dataset.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/quaketool.dir/dataset.cpp.o -c /workspaces/User-Interfaces/cwk1/dataset.cpp

CMakeFiles/quaketool.dir/dataset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quaketool.dir/dataset.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/User-Interfaces/cwk1/dataset.cpp > CMakeFiles/quaketool.dir/dataset.cpp.i

CMakeFiles/quaketool.dir/dataset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quaketool.dir/dataset.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/User-Interfaces/cwk1/dataset.cpp -o CMakeFiles/quaketool.dir/dataset.cpp.s

# Object files for target quaketool
quaketool_OBJECTS = \
"CMakeFiles/quaketool.dir/main.cpp.o" \
"CMakeFiles/quaketool.dir/quake.cpp.o" \
"CMakeFiles/quaketool.dir/dataset.cpp.o"

# External object files for target quaketool
quaketool_EXTERNAL_OBJECTS =

quaketool: CMakeFiles/quaketool.dir/main.cpp.o
quaketool: CMakeFiles/quaketool.dir/quake.cpp.o
quaketool: CMakeFiles/quaketool.dir/dataset.cpp.o
quaketool: CMakeFiles/quaketool.dir/build.make
quaketool: CMakeFiles/quaketool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/User-Interfaces/cwk1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable quaketool"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/quaketool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/quaketool.dir/build: quaketool

.PHONY : CMakeFiles/quaketool.dir/build

CMakeFiles/quaketool.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/quaketool.dir/cmake_clean.cmake
.PHONY : CMakeFiles/quaketool.dir/clean

CMakeFiles/quaketool.dir/depend:
	cd /workspaces/User-Interfaces/cwk1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/User-Interfaces/cwk1 /workspaces/User-Interfaces/cwk1 /workspaces/User-Interfaces/cwk1/build /workspaces/User-Interfaces/cwk1/build /workspaces/User-Interfaces/cwk1/build/CMakeFiles/quaketool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/quaketool.dir/depend

