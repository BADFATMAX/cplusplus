# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.18

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ASUS\CLionProjects\cplusplus\learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ASUS\CLionProjects\cplusplus\learn\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/learn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/learn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/learn.dir/flags.make

CMakeFiles/learn.dir/main.cpp.obj: CMakeFiles/learn.dir/flags.make
CMakeFiles/learn.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\cplusplus\learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/learn.dir/main.cpp.obj"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\learn.dir\main.cpp.obj -c C:\Users\ASUS\CLionProjects\cplusplus\learn\main.cpp

CMakeFiles/learn.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/learn.dir/main.cpp.i"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\cplusplus\learn\main.cpp > CMakeFiles\learn.dir\main.cpp.i

CMakeFiles/learn.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/learn.dir/main.cpp.s"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ASUS\CLionProjects\cplusplus\learn\main.cpp -o CMakeFiles\learn.dir\main.cpp.s

CMakeFiles/learn.dir/variables.cpp.obj: CMakeFiles/learn.dir/flags.make
CMakeFiles/learn.dir/variables.cpp.obj: ../variables.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\cplusplus\learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/learn.dir/variables.cpp.obj"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\learn.dir\variables.cpp.obj -c C:\Users\ASUS\CLionProjects\cplusplus\learn\variables.cpp

CMakeFiles/learn.dir/variables.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/learn.dir/variables.cpp.i"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\cplusplus\learn\variables.cpp > CMakeFiles\learn.dir\variables.cpp.i

CMakeFiles/learn.dir/variables.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/learn.dir/variables.cpp.s"
	C:\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ASUS\CLionProjects\cplusplus\learn\variables.cpp -o CMakeFiles\learn.dir\variables.cpp.s

# Object files for target learn
learn_OBJECTS = \
"CMakeFiles/learn.dir/main.cpp.obj" \
"CMakeFiles/learn.dir/variables.cpp.obj"

# External object files for target learn
learn_EXTERNAL_OBJECTS =

learn.exe: CMakeFiles/learn.dir/main.cpp.obj
learn.exe: CMakeFiles/learn.dir/variables.cpp.obj
learn.exe: CMakeFiles/learn.dir/build.make
learn.exe: CMakeFiles/learn.dir/linklibs.rsp
learn.exe: CMakeFiles/learn.dir/objects1.rsp
learn.exe: CMakeFiles/learn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ASUS\CLionProjects\cplusplus\learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable learn.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\learn.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/learn.dir/build: learn.exe

.PHONY : CMakeFiles/learn.dir/build

CMakeFiles/learn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\learn.dir\cmake_clean.cmake
.PHONY : CMakeFiles/learn.dir/clean

CMakeFiles/learn.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ASUS\CLionProjects\cplusplus\learn C:\Users\ASUS\CLionProjects\cplusplus\learn C:\Users\ASUS\CLionProjects\cplusplus\learn\cmake-build-debug C:\Users\ASUS\CLionProjects\cplusplus\learn\cmake-build-debug C:\Users\ASUS\CLionProjects\cplusplus\learn\cmake-build-debug\CMakeFiles\learn.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/learn.dir/depend

