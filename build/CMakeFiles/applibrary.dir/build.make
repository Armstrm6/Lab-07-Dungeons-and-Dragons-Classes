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
CMAKE_SOURCE_DIR = /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build

# Include any dependencies generated for this target.
include CMakeFiles/applibrary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/applibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/applibrary.dir/flags.make

CMakeFiles/applibrary.dir/Elves.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/Elves.cpp.o: ../Elves.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/applibrary.dir/Elves.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/applibrary.dir/Elves.cpp.o -c /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Elves.cpp

CMakeFiles/applibrary.dir/Elves.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/Elves.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Elves.cpp > CMakeFiles/applibrary.dir/Elves.cpp.i

CMakeFiles/applibrary.dir/Elves.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/Elves.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Elves.cpp -o CMakeFiles/applibrary.dir/Elves.cpp.s

CMakeFiles/applibrary.dir/Dwarves.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/Dwarves.cpp.o: ../Dwarves.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/applibrary.dir/Dwarves.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/applibrary.dir/Dwarves.cpp.o -c /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Dwarves.cpp

CMakeFiles/applibrary.dir/Dwarves.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/Dwarves.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Dwarves.cpp > CMakeFiles/applibrary.dir/Dwarves.cpp.i

CMakeFiles/applibrary.dir/Dwarves.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/Dwarves.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Dwarves.cpp -o CMakeFiles/applibrary.dir/Dwarves.cpp.s

CMakeFiles/applibrary.dir/Humans.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/Humans.cpp.o: ../Humans.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/applibrary.dir/Humans.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/applibrary.dir/Humans.cpp.o -c /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Humans.cpp

CMakeFiles/applibrary.dir/Humans.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/Humans.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Humans.cpp > CMakeFiles/applibrary.dir/Humans.cpp.i

CMakeFiles/applibrary.dir/Humans.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/Humans.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Humans.cpp -o CMakeFiles/applibrary.dir/Humans.cpp.s

CMakeFiles/applibrary.dir/Halflings.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/Halflings.cpp.o: ../Halflings.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/applibrary.dir/Halflings.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/applibrary.dir/Halflings.cpp.o -c /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Halflings.cpp

CMakeFiles/applibrary.dir/Halflings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/Halflings.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Halflings.cpp > CMakeFiles/applibrary.dir/Halflings.cpp.i

CMakeFiles/applibrary.dir/Halflings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/Halflings.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/Halflings.cpp -o CMakeFiles/applibrary.dir/Halflings.cpp.s

CMakeFiles/applibrary.dir/IRace.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/IRace.cpp.o: ../IRace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/applibrary.dir/IRace.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/applibrary.dir/IRace.cpp.o -c /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/IRace.cpp

CMakeFiles/applibrary.dir/IRace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/IRace.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/IRace.cpp > CMakeFiles/applibrary.dir/IRace.cpp.i

CMakeFiles/applibrary.dir/IRace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/IRace.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/IRace.cpp -o CMakeFiles/applibrary.dir/IRace.cpp.s

CMakeFiles/applibrary.dir/ICharacter.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/ICharacter.cpp.o: ../ICharacter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/applibrary.dir/ICharacter.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/applibrary.dir/ICharacter.cpp.o -c /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/ICharacter.cpp

CMakeFiles/applibrary.dir/ICharacter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/ICharacter.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/ICharacter.cpp > CMakeFiles/applibrary.dir/ICharacter.cpp.i

CMakeFiles/applibrary.dir/ICharacter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/ICharacter.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/ICharacter.cpp -o CMakeFiles/applibrary.dir/ICharacter.cpp.s

CMakeFiles/applibrary.dir/PartyForming.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/PartyForming.cpp.o: ../PartyForming.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/applibrary.dir/PartyForming.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/applibrary.dir/PartyForming.cpp.o -c /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/PartyForming.cpp

CMakeFiles/applibrary.dir/PartyForming.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/PartyForming.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/PartyForming.cpp > CMakeFiles/applibrary.dir/PartyForming.cpp.i

CMakeFiles/applibrary.dir/PartyForming.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/PartyForming.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/PartyForming.cpp -o CMakeFiles/applibrary.dir/PartyForming.cpp.s

CMakeFiles/applibrary.dir/CharacterFactory.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/CharacterFactory.cpp.o: ../CharacterFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/applibrary.dir/CharacterFactory.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/applibrary.dir/CharacterFactory.cpp.o -c /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/CharacterFactory.cpp

CMakeFiles/applibrary.dir/CharacterFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/CharacterFactory.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/CharacterFactory.cpp > CMakeFiles/applibrary.dir/CharacterFactory.cpp.i

CMakeFiles/applibrary.dir/CharacterFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/CharacterFactory.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/CharacterFactory.cpp -o CMakeFiles/applibrary.dir/CharacterFactory.cpp.s

# Object files for target applibrary
applibrary_OBJECTS = \
"CMakeFiles/applibrary.dir/Elves.cpp.o" \
"CMakeFiles/applibrary.dir/Dwarves.cpp.o" \
"CMakeFiles/applibrary.dir/Humans.cpp.o" \
"CMakeFiles/applibrary.dir/Halflings.cpp.o" \
"CMakeFiles/applibrary.dir/IRace.cpp.o" \
"CMakeFiles/applibrary.dir/ICharacter.cpp.o" \
"CMakeFiles/applibrary.dir/PartyForming.cpp.o" \
"CMakeFiles/applibrary.dir/CharacterFactory.cpp.o"

# External object files for target applibrary
applibrary_EXTERNAL_OBJECTS =

libapplibrary.a: CMakeFiles/applibrary.dir/Elves.cpp.o
libapplibrary.a: CMakeFiles/applibrary.dir/Dwarves.cpp.o
libapplibrary.a: CMakeFiles/applibrary.dir/Humans.cpp.o
libapplibrary.a: CMakeFiles/applibrary.dir/Halflings.cpp.o
libapplibrary.a: CMakeFiles/applibrary.dir/IRace.cpp.o
libapplibrary.a: CMakeFiles/applibrary.dir/ICharacter.cpp.o
libapplibrary.a: CMakeFiles/applibrary.dir/PartyForming.cpp.o
libapplibrary.a: CMakeFiles/applibrary.dir/CharacterFactory.cpp.o
libapplibrary.a: CMakeFiles/applibrary.dir/build.make
libapplibrary.a: CMakeFiles/applibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX static library libapplibrary.a"
	$(CMAKE_COMMAND) -P CMakeFiles/applibrary.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/applibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/applibrary.dir/build: libapplibrary.a

.PHONY : CMakeFiles/applibrary.dir/build

CMakeFiles/applibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/applibrary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/applibrary.dir/clean

CMakeFiles/applibrary.dir/depend:
	cd /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build /home/konstantinos/Desktop/Labs/Lab07/Lab07Actual/build/CMakeFiles/applibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/applibrary.dir/depend

