# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = C:\JetBrains\apps\CLion\ch-0\212.5284.51\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\JetBrains\apps\CLion\ch-0\212.5284.51\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\ algorithm_study\cppPro"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\ algorithm_study\cppPro\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ssss.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ssss.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ssss.dir/flags.make

CMakeFiles/ssss.dir/ssss.cpp.obj: CMakeFiles/ssss.dir/flags.make
CMakeFiles/ssss.dir/ssss.cpp.obj: ../ssss.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\ algorithm_study\cppPro\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ssss.dir/ssss.cpp.obj"
	D:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ssss.dir\ssss.cpp.obj -c "D:\ algorithm_study\cppPro\ssss.cpp"

CMakeFiles/ssss.dir/ssss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ssss.dir/ssss.cpp.i"
	D:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\ algorithm_study\cppPro\ssss.cpp" > CMakeFiles\ssss.dir\ssss.cpp.i

CMakeFiles/ssss.dir/ssss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ssss.dir/ssss.cpp.s"
	D:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\ algorithm_study\cppPro\ssss.cpp" -o CMakeFiles\ssss.dir\ssss.cpp.s

# Object files for target ssss
ssss_OBJECTS = \
"CMakeFiles/ssss.dir/ssss.cpp.obj"

# External object files for target ssss
ssss_EXTERNAL_OBJECTS =

ssss.exe: CMakeFiles/ssss.dir/ssss.cpp.obj
ssss.exe: CMakeFiles/ssss.dir/build.make
ssss.exe: CMakeFiles/ssss.dir/linklibs.rsp
ssss.exe: CMakeFiles/ssss.dir/objects1.rsp
ssss.exe: CMakeFiles/ssss.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\ algorithm_study\cppPro\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ssss.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ssss.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ssss.dir/build: ssss.exe
.PHONY : CMakeFiles/ssss.dir/build

CMakeFiles/ssss.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ssss.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ssss.dir/clean

CMakeFiles/ssss.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\ algorithm_study\cppPro" "D:\ algorithm_study\cppPro" "D:\ algorithm_study\cppPro\cmake-build-debug" "D:\ algorithm_study\cppPro\cmake-build-debug" "D:\ algorithm_study\cppPro\cmake-build-debug\CMakeFiles\ssss.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ssss.dir/depend
