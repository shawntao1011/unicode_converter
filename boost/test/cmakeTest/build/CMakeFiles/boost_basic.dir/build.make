# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake.exe

# The command to remove a file.
RM = /usr/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/e/unicode_converter/boost/test/cmakeTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/e/unicode_converter/boost/test/cmakeTest/build

# Include any dependencies generated for this target.
include CMakeFiles/boost_basic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/boost_basic.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/boost_basic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/boost_basic.dir/flags.make

CMakeFiles/boost_basic.dir/boost_utility.cpp.o: CMakeFiles/boost_basic.dir/flags.make
CMakeFiles/boost_basic.dir/boost_utility.cpp.o: ../boost_utility.cpp
CMakeFiles/boost_basic.dir/boost_utility.cpp.o: CMakeFiles/boost_basic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/unicode_converter/boost/test/cmakeTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/boost_basic.dir/boost_utility.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/boost_basic.dir/boost_utility.cpp.o -MF CMakeFiles/boost_basic.dir/boost_utility.cpp.o.d -o CMakeFiles/boost_basic.dir/boost_utility.cpp.o -c /cygdrive/e/unicode_converter/boost/test/cmakeTest/boost_utility.cpp

CMakeFiles/boost_basic.dir/boost_utility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boost_basic.dir/boost_utility.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/e/unicode_converter/boost/test/cmakeTest/boost_utility.cpp > CMakeFiles/boost_basic.dir/boost_utility.cpp.i

CMakeFiles/boost_basic.dir/boost_utility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boost_basic.dir/boost_utility.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/e/unicode_converter/boost/test/cmakeTest/boost_utility.cpp -o CMakeFiles/boost_basic.dir/boost_utility.cpp.s

# Object files for target boost_basic
boost_basic_OBJECTS = \
"CMakeFiles/boost_basic.dir/boost_utility.cpp.o"

# External object files for target boost_basic
boost_basic_EXTERNAL_OBJECTS =

boost_basic.exe: CMakeFiles/boost_basic.dir/boost_utility.cpp.o
boost_basic.exe: CMakeFiles/boost_basic.dir/build.make
boost_basic.exe: /usr/lib/libboost_locale.dll.a
boost_basic.exe: CMakeFiles/boost_basic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/e/unicode_converter/boost/test/cmakeTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable boost_basic.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boost_basic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/boost_basic.dir/build: boost_basic.exe
.PHONY : CMakeFiles/boost_basic.dir/build

CMakeFiles/boost_basic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/boost_basic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/boost_basic.dir/clean

CMakeFiles/boost_basic.dir/depend:
	cd /cygdrive/e/unicode_converter/boost/test/cmakeTest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/e/unicode_converter/boost/test/cmakeTest /cygdrive/e/unicode_converter/boost/test/cmakeTest /cygdrive/e/unicode_converter/boost/test/cmakeTest/build /cygdrive/e/unicode_converter/boost/test/cmakeTest/build /cygdrive/e/unicode_converter/boost/test/cmakeTest/build/CMakeFiles/boost_basic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/boost_basic.dir/depend

