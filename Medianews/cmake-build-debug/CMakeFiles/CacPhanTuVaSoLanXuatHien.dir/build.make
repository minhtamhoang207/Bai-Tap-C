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
include CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/flags.make

CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/CacPhanTuVaSoLanXuatHien.cpp.obj: CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/flags.make
CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/CacPhanTuVaSoLanXuatHien.cpp.obj: ../CacPhanTuVaSoLanXuatHien.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/CacPhanTuVaSoLanXuatHien.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CacPhanTuVaSoLanXuatHien.dir\CacPhanTuVaSoLanXuatHien.cpp.obj -c "C:\Users\FPT SHOP\CLionProjects\untitled1\CacPhanTuVaSoLanXuatHien.cpp"

CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/CacPhanTuVaSoLanXuatHien.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/CacPhanTuVaSoLanXuatHien.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\FPT SHOP\CLionProjects\untitled1\CacPhanTuVaSoLanXuatHien.cpp" > CMakeFiles\CacPhanTuVaSoLanXuatHien.dir\CacPhanTuVaSoLanXuatHien.cpp.i

CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/CacPhanTuVaSoLanXuatHien.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/CacPhanTuVaSoLanXuatHien.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\FPT SHOP\CLionProjects\untitled1\CacPhanTuVaSoLanXuatHien.cpp" -o CMakeFiles\CacPhanTuVaSoLanXuatHien.dir\CacPhanTuVaSoLanXuatHien.cpp.s

# Object files for target CacPhanTuVaSoLanXuatHien
CacPhanTuVaSoLanXuatHien_OBJECTS = \
"CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/CacPhanTuVaSoLanXuatHien.cpp.obj"

# External object files for target CacPhanTuVaSoLanXuatHien
CacPhanTuVaSoLanXuatHien_EXTERNAL_OBJECTS =

CacPhanTuVaSoLanXuatHien.exe: CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/CacPhanTuVaSoLanXuatHien.cpp.obj
CacPhanTuVaSoLanXuatHien.exe: CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/build.make
CacPhanTuVaSoLanXuatHien.exe: CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/linklibs.rsp
CacPhanTuVaSoLanXuatHien.exe: CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/objects1.rsp
CacPhanTuVaSoLanXuatHien.exe: CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CacPhanTuVaSoLanXuatHien.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CacPhanTuVaSoLanXuatHien.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/build: CacPhanTuVaSoLanXuatHien.exe

.PHONY : CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/build

CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CacPhanTuVaSoLanXuatHien.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/clean

CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles\CacPhanTuVaSoLanXuatHien.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CacPhanTuVaSoLanXuatHien.dir/depend
