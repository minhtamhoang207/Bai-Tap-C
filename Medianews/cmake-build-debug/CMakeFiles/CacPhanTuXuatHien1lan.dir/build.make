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
include CMakeFiles/CacPhanTuXuatHien1lan.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CacPhanTuXuatHien1lan.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CacPhanTuXuatHien1lan.dir/flags.make

CMakeFiles/CacPhanTuXuatHien1lan.dir/305_CacPhanTuXuatHien1lan.cpp.obj: CMakeFiles/CacPhanTuXuatHien1lan.dir/flags.make
CMakeFiles/CacPhanTuXuatHien1lan.dir/305_CacPhanTuXuatHien1lan.cpp.obj: ../305_CacPhanTuXuatHien1lan.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CacPhanTuXuatHien1lan.dir/305_CacPhanTuXuatHien1lan.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CacPhanTuXuatHien1lan.dir\305_CacPhanTuXuatHien1lan.cpp.obj -c "C:\Users\FPT SHOP\CLionProjects\untitled1\305_CacPhanTuXuatHien1lan.cpp"

CMakeFiles/CacPhanTuXuatHien1lan.dir/305_CacPhanTuXuatHien1lan.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CacPhanTuXuatHien1lan.dir/305_CacPhanTuXuatHien1lan.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\FPT SHOP\CLionProjects\untitled1\305_CacPhanTuXuatHien1lan.cpp" > CMakeFiles\CacPhanTuXuatHien1lan.dir\305_CacPhanTuXuatHien1lan.cpp.i

CMakeFiles/CacPhanTuXuatHien1lan.dir/305_CacPhanTuXuatHien1lan.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CacPhanTuXuatHien1lan.dir/305_CacPhanTuXuatHien1lan.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\FPT SHOP\CLionProjects\untitled1\305_CacPhanTuXuatHien1lan.cpp" -o CMakeFiles\CacPhanTuXuatHien1lan.dir\305_CacPhanTuXuatHien1lan.cpp.s

# Object files for target CacPhanTuXuatHien1lan
CacPhanTuXuatHien1lan_OBJECTS = \
"CMakeFiles/CacPhanTuXuatHien1lan.dir/305_CacPhanTuXuatHien1lan.cpp.obj"

# External object files for target CacPhanTuXuatHien1lan
CacPhanTuXuatHien1lan_EXTERNAL_OBJECTS =

CacPhanTuXuatHien1lan.exe: CMakeFiles/CacPhanTuXuatHien1lan.dir/305_CacPhanTuXuatHien1lan.cpp.obj
CacPhanTuXuatHien1lan.exe: CMakeFiles/CacPhanTuXuatHien1lan.dir/build.make
CacPhanTuXuatHien1lan.exe: CMakeFiles/CacPhanTuXuatHien1lan.dir/linklibs.rsp
CacPhanTuXuatHien1lan.exe: CMakeFiles/CacPhanTuXuatHien1lan.dir/objects1.rsp
CacPhanTuXuatHien1lan.exe: CMakeFiles/CacPhanTuXuatHien1lan.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CacPhanTuXuatHien1lan.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CacPhanTuXuatHien1lan.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CacPhanTuXuatHien1lan.dir/build: CacPhanTuXuatHien1lan.exe

.PHONY : CMakeFiles/CacPhanTuXuatHien1lan.dir/build

CMakeFiles/CacPhanTuXuatHien1lan.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CacPhanTuXuatHien1lan.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CacPhanTuXuatHien1lan.dir/clean

CMakeFiles/CacPhanTuXuatHien1lan.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles\CacPhanTuXuatHien1lan.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CacPhanTuXuatHien1lan.dir/depend
