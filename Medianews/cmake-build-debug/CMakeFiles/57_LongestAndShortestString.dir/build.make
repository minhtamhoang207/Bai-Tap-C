# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\FPT SHOP\CLionProjects\untitled1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/57_LongestAndShortestString.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/57_LongestAndShortestString.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/57_LongestAndShortestString.dir/flags.make

CMakeFiles/57_LongestAndShortestString.dir/57_LongestAndShortestString.cpp.obj: CMakeFiles/57_LongestAndShortestString.dir/flags.make
CMakeFiles/57_LongestAndShortestString.dir/57_LongestAndShortestString.cpp.obj: ../57_LongestAndShortestString.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/57_LongestAndShortestString.dir/57_LongestAndShortestString.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\57_LongestAndShortestString.dir\57_LongestAndShortestString.cpp.obj -c "C:\Users\FPT SHOP\CLionProjects\untitled1\57_LongestAndShortestString.cpp"

CMakeFiles/57_LongestAndShortestString.dir/57_LongestAndShortestString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/57_LongestAndShortestString.dir/57_LongestAndShortestString.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\FPT SHOP\CLionProjects\untitled1\57_LongestAndShortestString.cpp" > CMakeFiles\57_LongestAndShortestString.dir\57_LongestAndShortestString.cpp.i

CMakeFiles/57_LongestAndShortestString.dir/57_LongestAndShortestString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/57_LongestAndShortestString.dir/57_LongestAndShortestString.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\FPT SHOP\CLionProjects\untitled1\57_LongestAndShortestString.cpp" -o CMakeFiles\57_LongestAndShortestString.dir\57_LongestAndShortestString.cpp.s

# Object files for target 57_LongestAndShortestString
57_LongestAndShortestString_OBJECTS = \
"CMakeFiles/57_LongestAndShortestString.dir/57_LongestAndShortestString.cpp.obj"

# External object files for target 57_LongestAndShortestString
57_LongestAndShortestString_EXTERNAL_OBJECTS =

57_LongestAndShortestString.exe: CMakeFiles/57_LongestAndShortestString.dir/57_LongestAndShortestString.cpp.obj
57_LongestAndShortestString.exe: CMakeFiles/57_LongestAndShortestString.dir/build.make
57_LongestAndShortestString.exe: CMakeFiles/57_LongestAndShortestString.dir/linklibs.rsp
57_LongestAndShortestString.exe: CMakeFiles/57_LongestAndShortestString.dir/objects1.rsp
57_LongestAndShortestString.exe: CMakeFiles/57_LongestAndShortestString.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 57_LongestAndShortestString.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\57_LongestAndShortestString.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/57_LongestAndShortestString.dir/build: 57_LongestAndShortestString.exe

.PHONY : CMakeFiles/57_LongestAndShortestString.dir/build

CMakeFiles/57_LongestAndShortestString.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\57_LongestAndShortestString.dir\cmake_clean.cmake
.PHONY : CMakeFiles/57_LongestAndShortestString.dir/clean

CMakeFiles/57_LongestAndShortestString.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles\57_LongestAndShortestString.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/57_LongestAndShortestString.dir/depend

