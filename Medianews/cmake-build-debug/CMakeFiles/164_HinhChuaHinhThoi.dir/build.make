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
include CMakeFiles/164_HinhChuaHinhThoi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/164_HinhChuaHinhThoi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/164_HinhChuaHinhThoi.dir/flags.make

CMakeFiles/164_HinhChuaHinhThoi.dir/164_HinhChuaHinhThoi.cpp.obj: CMakeFiles/164_HinhChuaHinhThoi.dir/flags.make
CMakeFiles/164_HinhChuaHinhThoi.dir/164_HinhChuaHinhThoi.cpp.obj: ../164_HinhChuaHinhThoi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/164_HinhChuaHinhThoi.dir/164_HinhChuaHinhThoi.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\164_HinhChuaHinhThoi.dir\164_HinhChuaHinhThoi.cpp.obj -c "C:\Users\FPT SHOP\CLionProjects\untitled1\164_HinhChuaHinhThoi.cpp"

CMakeFiles/164_HinhChuaHinhThoi.dir/164_HinhChuaHinhThoi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/164_HinhChuaHinhThoi.dir/164_HinhChuaHinhThoi.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\FPT SHOP\CLionProjects\untitled1\164_HinhChuaHinhThoi.cpp" > CMakeFiles\164_HinhChuaHinhThoi.dir\164_HinhChuaHinhThoi.cpp.i

CMakeFiles/164_HinhChuaHinhThoi.dir/164_HinhChuaHinhThoi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/164_HinhChuaHinhThoi.dir/164_HinhChuaHinhThoi.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\FPT SHOP\CLionProjects\untitled1\164_HinhChuaHinhThoi.cpp" -o CMakeFiles\164_HinhChuaHinhThoi.dir\164_HinhChuaHinhThoi.cpp.s

# Object files for target 164_HinhChuaHinhThoi
164_HinhChuaHinhThoi_OBJECTS = \
"CMakeFiles/164_HinhChuaHinhThoi.dir/164_HinhChuaHinhThoi.cpp.obj"

# External object files for target 164_HinhChuaHinhThoi
164_HinhChuaHinhThoi_EXTERNAL_OBJECTS =

164_HinhChuaHinhThoi.exe: CMakeFiles/164_HinhChuaHinhThoi.dir/164_HinhChuaHinhThoi.cpp.obj
164_HinhChuaHinhThoi.exe: CMakeFiles/164_HinhChuaHinhThoi.dir/build.make
164_HinhChuaHinhThoi.exe: CMakeFiles/164_HinhChuaHinhThoi.dir/linklibs.rsp
164_HinhChuaHinhThoi.exe: CMakeFiles/164_HinhChuaHinhThoi.dir/objects1.rsp
164_HinhChuaHinhThoi.exe: CMakeFiles/164_HinhChuaHinhThoi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 164_HinhChuaHinhThoi.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\164_HinhChuaHinhThoi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/164_HinhChuaHinhThoi.dir/build: 164_HinhChuaHinhThoi.exe

.PHONY : CMakeFiles/164_HinhChuaHinhThoi.dir/build

CMakeFiles/164_HinhChuaHinhThoi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\164_HinhChuaHinhThoi.dir\cmake_clean.cmake
.PHONY : CMakeFiles/164_HinhChuaHinhThoi.dir/clean

CMakeFiles/164_HinhChuaHinhThoi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles\164_HinhChuaHinhThoi.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/164_HinhChuaHinhThoi.dir/depend

