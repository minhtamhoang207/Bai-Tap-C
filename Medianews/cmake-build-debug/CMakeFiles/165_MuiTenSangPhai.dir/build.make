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
include CMakeFiles/165_MuiTenSangPhai.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/165_MuiTenSangPhai.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/165_MuiTenSangPhai.dir/flags.make

CMakeFiles/165_MuiTenSangPhai.dir/165_MuiTenSangPhai.cpp.obj: CMakeFiles/165_MuiTenSangPhai.dir/flags.make
CMakeFiles/165_MuiTenSangPhai.dir/165_MuiTenSangPhai.cpp.obj: ../165_MuiTenSangPhai.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/165_MuiTenSangPhai.dir/165_MuiTenSangPhai.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\165_MuiTenSangPhai.dir\165_MuiTenSangPhai.cpp.obj -c "C:\Users\FPT SHOP\CLionProjects\untitled1\165_MuiTenSangPhai.cpp"

CMakeFiles/165_MuiTenSangPhai.dir/165_MuiTenSangPhai.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/165_MuiTenSangPhai.dir/165_MuiTenSangPhai.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\FPT SHOP\CLionProjects\untitled1\165_MuiTenSangPhai.cpp" > CMakeFiles\165_MuiTenSangPhai.dir\165_MuiTenSangPhai.cpp.i

CMakeFiles/165_MuiTenSangPhai.dir/165_MuiTenSangPhai.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/165_MuiTenSangPhai.dir/165_MuiTenSangPhai.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\FPT SHOP\CLionProjects\untitled1\165_MuiTenSangPhai.cpp" -o CMakeFiles\165_MuiTenSangPhai.dir\165_MuiTenSangPhai.cpp.s

# Object files for target 165_MuiTenSangPhai
165_MuiTenSangPhai_OBJECTS = \
"CMakeFiles/165_MuiTenSangPhai.dir/165_MuiTenSangPhai.cpp.obj"

# External object files for target 165_MuiTenSangPhai
165_MuiTenSangPhai_EXTERNAL_OBJECTS =

165_MuiTenSangPhai.exe: CMakeFiles/165_MuiTenSangPhai.dir/165_MuiTenSangPhai.cpp.obj
165_MuiTenSangPhai.exe: CMakeFiles/165_MuiTenSangPhai.dir/build.make
165_MuiTenSangPhai.exe: CMakeFiles/165_MuiTenSangPhai.dir/linklibs.rsp
165_MuiTenSangPhai.exe: CMakeFiles/165_MuiTenSangPhai.dir/objects1.rsp
165_MuiTenSangPhai.exe: CMakeFiles/165_MuiTenSangPhai.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 165_MuiTenSangPhai.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\165_MuiTenSangPhai.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/165_MuiTenSangPhai.dir/build: 165_MuiTenSangPhai.exe

.PHONY : CMakeFiles/165_MuiTenSangPhai.dir/build

CMakeFiles/165_MuiTenSangPhai.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\165_MuiTenSangPhai.dir\cmake_clean.cmake
.PHONY : CMakeFiles/165_MuiTenSangPhai.dir/clean

CMakeFiles/165_MuiTenSangPhai.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles\165_MuiTenSangPhai.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/165_MuiTenSangPhai.dir/depend
