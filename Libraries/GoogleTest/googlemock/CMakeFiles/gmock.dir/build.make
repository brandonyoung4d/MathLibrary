# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.5.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.5.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/brandonyoung/Projects/BlackBoxMath

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/brandonyoung/Projects/BlackBoxMath

# Include any dependencies generated for this target.
include GoogleTest/googlemock/CMakeFiles/gmock.dir/depend.make

# Include the progress variables for this target.
include GoogleTest/googlemock/CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include GoogleTest/googlemock/CMakeFiles/gmock.dir/flags.make

GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o: GoogleTest/googlemock/CMakeFiles/gmock.dir/flags.make
GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o: GoogleTest/googletest/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/brandonyoung/Projects/BlackBoxMath/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o"
	cd /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o -c /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googletest/src/gtest-all.cc

GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.i"
	cd /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googletest/src/gtest-all.cc > CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.i

GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.s"
	cd /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googletest/src/gtest-all.cc -o CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.s

GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.requires:

.PHONY : GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.requires

GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.provides: GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.requires
	$(MAKE) -f GoogleTest/googlemock/CMakeFiles/gmock.dir/build.make GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.provides.build
.PHONY : GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.provides

GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.provides.build: GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o


GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: GoogleTest/googlemock/CMakeFiles/gmock.dir/flags.make
GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: GoogleTest/googlemock/src/gmock-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/brandonyoung/Projects/BlackBoxMath/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o"
	cd /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock.dir/src/gmock-all.cc.o -c /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock/src/gmock-all.cc

GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	cd /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock/src/gmock-all.cc > CMakeFiles/gmock.dir/src/gmock-all.cc.i

GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	cd /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock/src/gmock-all.cc -o CMakeFiles/gmock.dir/src/gmock-all.cc.s

GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires:

.PHONY : GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires

GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides: GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires
	$(MAKE) -f GoogleTest/googlemock/CMakeFiles/gmock.dir/build.make GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides.build
.PHONY : GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides

GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides.build: GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o


# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o" \
"CMakeFiles/gmock.dir/src/gmock-all.cc.o"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

GoogleTest/googlemock/libgmock.a: GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o
GoogleTest/googlemock/libgmock.a: GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
GoogleTest/googlemock/libgmock.a: GoogleTest/googlemock/CMakeFiles/gmock.dir/build.make
GoogleTest/googlemock/libgmock.a: GoogleTest/googlemock/CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/brandonyoung/Projects/BlackBoxMath/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libgmock.a"
	cd /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean_target.cmake
	cd /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
GoogleTest/googlemock/CMakeFiles/gmock.dir/build: GoogleTest/googlemock/libgmock.a

.PHONY : GoogleTest/googlemock/CMakeFiles/gmock.dir/build

GoogleTest/googlemock/CMakeFiles/gmock.dir/requires: GoogleTest/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.requires
GoogleTest/googlemock/CMakeFiles/gmock.dir/requires: GoogleTest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires

.PHONY : GoogleTest/googlemock/CMakeFiles/gmock.dir/requires

GoogleTest/googlemock/CMakeFiles/gmock.dir/clean:
	cd /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean.cmake
.PHONY : GoogleTest/googlemock/CMakeFiles/gmock.dir/clean

GoogleTest/googlemock/CMakeFiles/gmock.dir/depend:
	cd /Users/brandonyoung/Projects/BlackBoxMath && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/brandonyoung/Projects/BlackBoxMath /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock /Users/brandonyoung/Projects/BlackBoxMath /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock /Users/brandonyoung/Projects/BlackBoxMath/GoogleTest/googlemock/CMakeFiles/gmock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : GoogleTest/googlemock/CMakeFiles/gmock.dir/depend

