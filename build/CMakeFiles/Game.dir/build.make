# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/krishom/Workspace/collab/Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/krishom/Workspace/collab/Game/build

# Include any dependencies generated for this target.
include CMakeFiles/Game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Game.dir/flags.make

CMakeFiles/Game.dir/source/Bot.c++.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/source/Bot.c++.o: /home/krishom/Workspace/collab/Game/source/Bot.c++
CMakeFiles/Game.dir/source/Bot.c++.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krishom/Workspace/collab/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game.dir/source/Bot.c++.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/source/Bot.c++.o -MF CMakeFiles/Game.dir/source/Bot.c++.o.d -o CMakeFiles/Game.dir/source/Bot.c++.o -c /home/krishom/Workspace/collab/Game/source/Bot.c++

CMakeFiles/Game.dir/source/Bot.c++.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/Bot.c++.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krishom/Workspace/collab/Game/source/Bot.c++ > CMakeFiles/Game.dir/source/Bot.c++.i

CMakeFiles/Game.dir/source/Bot.c++.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/Bot.c++.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krishom/Workspace/collab/Game/source/Bot.c++ -o CMakeFiles/Game.dir/source/Bot.c++.s

CMakeFiles/Game.dir/source/Game.c++.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/source/Game.c++.o: /home/krishom/Workspace/collab/Game/source/Game.c++
CMakeFiles/Game.dir/source/Game.c++.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krishom/Workspace/collab/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Game.dir/source/Game.c++.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/source/Game.c++.o -MF CMakeFiles/Game.dir/source/Game.c++.o.d -o CMakeFiles/Game.dir/source/Game.c++.o -c /home/krishom/Workspace/collab/Game/source/Game.c++

CMakeFiles/Game.dir/source/Game.c++.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/Game.c++.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krishom/Workspace/collab/Game/source/Game.c++ > CMakeFiles/Game.dir/source/Game.c++.i

CMakeFiles/Game.dir/source/Game.c++.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/Game.c++.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krishom/Workspace/collab/Game/source/Game.c++ -o CMakeFiles/Game.dir/source/Game.c++.s

CMakeFiles/Game.dir/source/Players.c++.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/source/Players.c++.o: /home/krishom/Workspace/collab/Game/source/Players.c++
CMakeFiles/Game.dir/source/Players.c++.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krishom/Workspace/collab/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Game.dir/source/Players.c++.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/source/Players.c++.o -MF CMakeFiles/Game.dir/source/Players.c++.o.d -o CMakeFiles/Game.dir/source/Players.c++.o -c /home/krishom/Workspace/collab/Game/source/Players.c++

CMakeFiles/Game.dir/source/Players.c++.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/Players.c++.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krishom/Workspace/collab/Game/source/Players.c++ > CMakeFiles/Game.dir/source/Players.c++.i

CMakeFiles/Game.dir/source/Players.c++.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/Players.c++.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krishom/Workspace/collab/Game/source/Players.c++ -o CMakeFiles/Game.dir/source/Players.c++.s

CMakeFiles/Game.dir/source/User_Player.c++.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/source/User_Player.c++.o: /home/krishom/Workspace/collab/Game/source/User_Player.c++
CMakeFiles/Game.dir/source/User_Player.c++.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krishom/Workspace/collab/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Game.dir/source/User_Player.c++.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/source/User_Player.c++.o -MF CMakeFiles/Game.dir/source/User_Player.c++.o.d -o CMakeFiles/Game.dir/source/User_Player.c++.o -c /home/krishom/Workspace/collab/Game/source/User_Player.c++

CMakeFiles/Game.dir/source/User_Player.c++.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/source/User_Player.c++.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krishom/Workspace/collab/Game/source/User_Player.c++ > CMakeFiles/Game.dir/source/User_Player.c++.i

CMakeFiles/Game.dir/source/User_Player.c++.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/source/User_Player.c++.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krishom/Workspace/collab/Game/source/User_Player.c++ -o CMakeFiles/Game.dir/source/User_Player.c++.s

CMakeFiles/Game.dir/Main.c++.o: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/Main.c++.o: /home/krishom/Workspace/collab/Game/Main.c++
CMakeFiles/Game.dir/Main.c++.o: CMakeFiles/Game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/krishom/Workspace/collab/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Game.dir/Main.c++.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Game.dir/Main.c++.o -MF CMakeFiles/Game.dir/Main.c++.o.d -o CMakeFiles/Game.dir/Main.c++.o -c /home/krishom/Workspace/collab/Game/Main.c++

CMakeFiles/Game.dir/Main.c++.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Game.dir/Main.c++.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/krishom/Workspace/collab/Game/Main.c++ > CMakeFiles/Game.dir/Main.c++.i

CMakeFiles/Game.dir/Main.c++.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Game.dir/Main.c++.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/krishom/Workspace/collab/Game/Main.c++ -o CMakeFiles/Game.dir/Main.c++.s

# Object files for target Game
Game_OBJECTS = \
"CMakeFiles/Game.dir/source/Bot.c++.o" \
"CMakeFiles/Game.dir/source/Game.c++.o" \
"CMakeFiles/Game.dir/source/Players.c++.o" \
"CMakeFiles/Game.dir/source/User_Player.c++.o" \
"CMakeFiles/Game.dir/Main.c++.o"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

Game: CMakeFiles/Game.dir/source/Bot.c++.o
Game: CMakeFiles/Game.dir/source/Game.c++.o
Game: CMakeFiles/Game.dir/source/Players.c++.o
Game: CMakeFiles/Game.dir/source/User_Player.c++.o
Game: CMakeFiles/Game.dir/Main.c++.o
Game: CMakeFiles/Game.dir/build.make
Game: CMakeFiles/Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/krishom/Workspace/collab/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Game.dir/build: Game
.PHONY : CMakeFiles/Game.dir/build

CMakeFiles/Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Game.dir/clean

CMakeFiles/Game.dir/depend:
	cd /home/krishom/Workspace/collab/Game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/krishom/Workspace/collab/Game /home/krishom/Workspace/collab/Game /home/krishom/Workspace/collab/Game/build /home/krishom/Workspace/collab/Game/build /home/krishom/Workspace/collab/Game/build/CMakeFiles/Game.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Game.dir/depend

