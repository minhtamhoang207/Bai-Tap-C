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
include CMakeFiles/349_TongHangCotMaTran.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/349_TongHangCotMaTran.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/349_TongHangCotMaTran.dir/flags.make

CMakeFiles/349_TongHangCotMaTran.dir/349_TongHangCotMaTran.cpp.obj: CMakeFiles/349_TongHangCotMaTran.dir/flags.make
CMakeFiles/349_TongHangCotMaTran.dir/349_TongHangCotMaTran.cpp.obj: ../349_TongHangCotMaTran.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/349_TongHangCotMaTran.dir/349_TongHangCotMaTran.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\349_TongHangCotMaTran.dir\349_TongHangCotMaTran.cpp.obj -c "C:\Users\FPT SHOP\CLionProjects\untitled1\349_TongHangCotMaTran.cpp"

CMakeFiles/349_TongHangCotMaTran.dir/349_TongHangCotMaTran.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/349_TongHangCotMaTran.dir/349_TongHangCotMaTran.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\FPT SHOP\CLionProjects\untitled1\349_TongHangCotMaTran.cpp" > CMakeFiles\349_TongHangCotMaTran.dir\349_TongHangCotMaTran.cpp.i

CMakeFiles/349_TongHangCotMaTran.dir/349_TongHangCotMaTran.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/349_TongHangCotMaTran.dir/349_TongHangCotMaTran.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\FPT SHOP\CLionProjects\untitled1\349_TongHangCotMaTran.cpp" -o CMakeFiles\349_TongHangCotMaTran.dir\349_TongHangCotMaTran.cpp.s

# Object files for target 349_TongHangCotMaTran
349_TongHangCotMaTran_OBJECTS = \
"CMakeFiles/349_TongHangCotMaTran.dir/349_TongHangCotMaTran.cpp.obj"

# External object files for target 349_TongHangCotMaTran
349_TongHangCotMaTran_EXTERNAL_OBJECTS =

349_TongHangCotMaTran.exe: CMakeFiles/349_TongHangCotMaTran.dir/349_TongHangCotMaTran.cpp.obj
349_TongHangCotMaTran.exe: CMakeFiles/349_TongHangCotMaTran.dir/build.make
349_TongHangCotMaTran.exe: CMakeFiles/349_TongHangCotMaTran.dir/linklibs.rsp
349_TongHangCotMaTran.exe: CMakeFiles/349_TongHangCotMaTran.dir/objects1.rsp
349_TongHangCotMaTran.exe: CMakeFiles/349_TongHangCotMaTran.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 349_TongHangCotMaTran.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\349_TongHangCotMaTran.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/349_TongHangCotMaTran.dir/build: 349_TongHangCotMaTran.exe

.PHONY : CMakeFiles/349_TongHangCotMaTran.dir/build

CMakeFiles/349_TongHangCotMaTran.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\349_TongHangCotMaTran.dir\cmake_clean.cmake
.PHONY : CMakeFiles/349_TongHangCotMaTran.dir/clean

CMakeFiles/349_TongHangCotMaTran.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug" "C:\Users\FPT SHOP\CLionProjects\untitled1\cmake-build-debug\CMakeFiles\349_TongHangCotMaTran.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/349_TongHangCotMaTran.dir/depend

