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
include CMakeFiles/11_KhoangCachNhoNhat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/11_KhoangCachNhoNhat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/11_KhoangCachNhoNhat.dir/flags.make

CMakeFiles/11_KhoangCachNhoNhat.dir/11_KhoangCachNhoNhat.cpp.obj: CMakeFiles/11_KhoangCachNhoNhat.dir/flags.make
CMakeFiles/11_KhoangCachNhoNhat.dir/11_KhoangCachNhoNhat.cpp.obj: ../11_KhoangCachNhoNhat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/11_KhoangCachNhoNhat.dir/11_KhoangCachNhoNhat.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\11_KhoangCachNhoNhat.dir\11_KhoangCachNhoNhat.cpp.obj -c "C:\Users\FPT SHOP\CLionProjects\untitled1\11_KhoangCachNhoNhat.cpp"

CMakeFiles/11_KhoangCachNhoNhat.dir/11_KhoangCachNhoNhat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/11_KhoangCachNhoNhat.dir/11_KhoangCachNhoNhat.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\FPT SHOP\CLionProjects\untitled1\11_KhoangCachNhoNhat.cpp" > CMakeFiles\11_KhoangCachNhoNhat.dir\11_KhoangCachNhoNhat.cpp.i

CMakeFiles/11_KhoangCachNhoNhat.dir/11_KhoangCachNhoNhat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/11_KhoangCachNhoNhat.dir/11_KhoangCachNhoNhat.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\FPT SHOP\CLionProjects\untitled1\11_KhoangCachNhoNhat.cpp" -o CMakeFiles\11_KhoangCachNhoNhat.dir\11_KhoangCachNhoNhat.cpp.s

# Object files for target 11_KhoangCachNhoNhat
11_KhoangCachNhoNhat_OBJECTS = \
"CMakeFiles/11_KhoangCachNhoNhat.dir/11_KhoangCachNhoNhat.cpp.obj"

# External object files for target 11_KhoangCachNhoNhat
11_KhoangCachNhoNhat_EXTERNAL_OBJECTS =

11_KhoangCachNhoNhat.exe: CMakeFiles/11_KhoangCachNhoNhat.dir/11_KhoangCachNhoNhat.cpp.obj
11_KhoangCachNhoNhat.exe: CMakeFiles/11_KhoangCachNhoNhat.dir/build.make
11_KhoangCachNhoNhat.exe: CMakeFiles/11_KhoangCachNhoNhat.dir/linklibs.rsp
11_KhoangCachNhoNhat.exe: CMakeFiles/11_KhoangCachNhoNhat.dir/objects1.rsp
11_KhoangCachNhoNhat.exe: CMakeFiles/11_KhoangCachNhoNhat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 11_KhoangCachNhoNhat.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\11_KhoangCachNhoNhat.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/11_KhoangCachNhoNhat.dir/build: 11_KhoangCachNhoNhat.exe

.PHONY : CMakeFiles/11_KhoangCachNhoNhat.dir/build

CMakeFiles/11_KhoangCachNhoNhat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\11_KhoangCachNhoNhat.dir\cmake_clean.cmake
.PHONY : CMakeFiles/11_KhoangCachNhoNhat.dir/clean

CMakeFiles/11_KhoangCachNhoNhat.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles\11_KhoangCachNhoNhat.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/11_KhoangCachNhoNhat.dir/depend

