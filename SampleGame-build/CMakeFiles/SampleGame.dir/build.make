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
CMAKE_SOURCE_DIR = /home/redy9567/RedEngine/SampleGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/redy9567/RedEngine/SampleGame-build

# Include any dependencies generated for this target.
include CMakeFiles/SampleGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SampleGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SampleGame.dir/flags.make

CMakeFiles/SampleGame.dir/Unit.cpp.o: CMakeFiles/SampleGame.dir/flags.make
CMakeFiles/SampleGame.dir/Unit.cpp.o: /home/redy9567/RedEngine/SampleGame/Unit.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/redy9567/RedEngine/SampleGame-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SampleGame.dir/Unit.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SampleGame.dir/Unit.cpp.o -c /home/redy9567/RedEngine/SampleGame/Unit.cpp

CMakeFiles/SampleGame.dir/Unit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SampleGame.dir/Unit.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/redy9567/RedEngine/SampleGame/Unit.cpp > CMakeFiles/SampleGame.dir/Unit.cpp.i

CMakeFiles/SampleGame.dir/Unit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SampleGame.dir/Unit.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/redy9567/RedEngine/SampleGame/Unit.cpp -o CMakeFiles/SampleGame.dir/Unit.cpp.s

CMakeFiles/SampleGame.dir/Game.cpp.o: CMakeFiles/SampleGame.dir/flags.make
CMakeFiles/SampleGame.dir/Game.cpp.o: /home/redy9567/RedEngine/SampleGame/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/redy9567/RedEngine/SampleGame-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SampleGame.dir/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SampleGame.dir/Game.cpp.o -c /home/redy9567/RedEngine/SampleGame/Game.cpp

CMakeFiles/SampleGame.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SampleGame.dir/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/redy9567/RedEngine/SampleGame/Game.cpp > CMakeFiles/SampleGame.dir/Game.cpp.i

CMakeFiles/SampleGame.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SampleGame.dir/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/redy9567/RedEngine/SampleGame/Game.cpp -o CMakeFiles/SampleGame.dir/Game.cpp.s

CMakeFiles/SampleGame.dir/main.cpp.o: CMakeFiles/SampleGame.dir/flags.make
CMakeFiles/SampleGame.dir/main.cpp.o: /home/redy9567/RedEngine/SampleGame/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/redy9567/RedEngine/SampleGame-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SampleGame.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SampleGame.dir/main.cpp.o -c /home/redy9567/RedEngine/SampleGame/main.cpp

CMakeFiles/SampleGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SampleGame.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/redy9567/RedEngine/SampleGame/main.cpp > CMakeFiles/SampleGame.dir/main.cpp.i

CMakeFiles/SampleGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SampleGame.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/redy9567/RedEngine/SampleGame/main.cpp -o CMakeFiles/SampleGame.dir/main.cpp.s

# Object files for target SampleGame
SampleGame_OBJECTS = \
"CMakeFiles/SampleGame.dir/Unit.cpp.o" \
"CMakeFiles/SampleGame.dir/Game.cpp.o" \
"CMakeFiles/SampleGame.dir/main.cpp.o"

# External object files for target SampleGame
SampleGame_EXTERNAL_OBJECTS =

SampleGame: CMakeFiles/SampleGame.dir/Unit.cpp.o
SampleGame: CMakeFiles/SampleGame.dir/Game.cpp.o
SampleGame: CMakeFiles/SampleGame.dir/main.cpp.o
SampleGame: CMakeFiles/SampleGame.dir/build.make
SampleGame: _deps/raylib-build/raylib/libraylib.a
SampleGame: /home/redy9567/RedEngine/RedLib-build/libRedLib.a
SampleGame: /home/redy9567/RedEngine/RedEngine-build/libRedEngine.a
SampleGame: _deps/raylib-build/raylib/libraylib.a
SampleGame: /usr/lib/x86_64-linux-gnu/libGL.so
SampleGame: _deps/raylib-build/raylib/external/glfw/src/libglfw3.a
SampleGame: /usr/lib/x86_64-linux-gnu/librt.so
SampleGame: /usr/lib/x86_64-linux-gnu/libm.so
SampleGame: /usr/lib/x86_64-linux-gnu/libX11.so
SampleGame: /home/redy9567/RedEngine/RedLib-build/libRedLib.a
SampleGame: CMakeFiles/SampleGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/redy9567/RedEngine/SampleGame-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable SampleGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SampleGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SampleGame.dir/build: SampleGame

.PHONY : CMakeFiles/SampleGame.dir/build

CMakeFiles/SampleGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SampleGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SampleGame.dir/clean

CMakeFiles/SampleGame.dir/depend:
	cd /home/redy9567/RedEngine/SampleGame-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/redy9567/RedEngine/SampleGame /home/redy9567/RedEngine/SampleGame /home/redy9567/RedEngine/SampleGame-build /home/redy9567/RedEngine/SampleGame-build /home/redy9567/RedEngine/SampleGame-build/CMakeFiles/SampleGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SampleGame.dir/depend

