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
include CMakeFiles/224_TamGiacK.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/224_TamGiacK.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/224_TamGiacK.dir/flags.make

CMakeFiles/224_TamGiacK.dir/224_TamGiacK.c.obj: CMakeFiles/224_TamGiacK.dir/flags.make
CMakeFiles/224_TamGiacK.dir/224_TamGiacK.c.obj: ../224_TamGiacK.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/224_TamGiacK.dir/224_TamGiacK.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\224_TamGiacK.dir\224_TamGiacK.c.obj   -c "C:\Users\FPT SHOP\CLionProjects\untitled1\224_TamGiacK.c"

CMakeFiles/224_TamGiacK.dir/224_TamGiacK.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/224_TamGiacK.dir/224_TamGiacK.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\FPT SHOP\CLionProjects\untitled1\224_TamGiacK.c" > CMakeFiles\224_TamGiacK.dir\224_TamGiacK.c.i

CMakeFiles/224_TamGiacK.dir/224_TamGiacK.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/224_TamGiacK.dir/224_TamGiacK.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\FPT SHOP\CLionProjects\untitled1\224_TamGiacK.c" -o CMakeFiles\224_TamGiacK.dir\224_TamGiacK.c.s

# Object files for target 224_TamGiacK
224_TamGiacK_OBJECTS = \
"CMakeFiles/224_TamGiacK.dir/224_TamGiacK.c.obj"

# External object files for target 224_TamGiacK
224_TamGiacK_EXTERNAL_OBJECTS =

224_TamGiacK.exe: CMakeFiles/224_TamGiacK.dir/224_TamGiacK.c.obj
224_TamGiacK.exe: CMakeFiles/224_TamGiacK.dir/build.make
224_TamGiacK.exe: CMakeFiles/224_TamGiacK.dir/linklibs.rsp
224_TamGiacK.exe: CMakeFiles/224_TamGiacK.dir/objects1.rsp
224_TamGiacK.exe: CMakeFiles/224_TamGiacK.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 224_TamGiacK.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\224_TamGiacK.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/224_TamGiacK.dir/build: 224_TamGiacK.exe

.PHONY : CMakeFiles/224_TamGiacK.dir/build

CMakeFiles/224_TamGiacK.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\224_TamGiacK.dir\cmake_clean.cmake
.PHONY : CMakeFiles/224_TamGiacK.dir/clean

CMakeFiles/224_TamGiacK.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles\224_TamGiacK.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/224_TamGiacK.dir/depend
