# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sorting_cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sorting_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sorting_cpp.dir/flags.make

CMakeFiles/sorting_cpp.dir/main.cpp.obj: CMakeFiles/sorting_cpp.dir/flags.make
CMakeFiles/sorting_cpp.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sorting_cpp.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sorting_cpp.dir\main.cpp.obj -c C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp\main.cpp

CMakeFiles/sorting_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sorting_cpp.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp\main.cpp > CMakeFiles\sorting_cpp.dir\main.cpp.i

CMakeFiles/sorting_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sorting_cpp.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp\main.cpp -o CMakeFiles\sorting_cpp.dir\main.cpp.s

# Object files for target sorting_cpp
sorting_cpp_OBJECTS = \
"CMakeFiles/sorting_cpp.dir/main.cpp.obj"

# External object files for target sorting_cpp
sorting_cpp_EXTERNAL_OBJECTS =

sorting_cpp.exe: CMakeFiles/sorting_cpp.dir/main.cpp.obj
sorting_cpp.exe: CMakeFiles/sorting_cpp.dir/build.make
sorting_cpp.exe: CMakeFiles/sorting_cpp.dir/linklibs.rsp
sorting_cpp.exe: CMakeFiles/sorting_cpp.dir/objects1.rsp
sorting_cpp.exe: CMakeFiles/sorting_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sorting_cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sorting_cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sorting_cpp.dir/build: sorting_cpp.exe

.PHONY : CMakeFiles/sorting_cpp.dir/build

CMakeFiles/sorting_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sorting_cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sorting_cpp.dir/clean

CMakeFiles/sorting_cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp\cmake-build-debug C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp\cmake-build-debug C:\Users\intje\Documents\GitHub\Learning_Algorithm\Sorting\sorting_cpp\cmake-build-debug\CMakeFiles\sorting_cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sorting_cpp.dir/depend

