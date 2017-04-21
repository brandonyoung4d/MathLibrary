cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
set(CMAKE_OSX_DEPLOYMENT_TARGET "" CACHE STRING "Minimum OS X deployment version")
set(CMAKE_OSX_SYSROOT "" CACHE STRING "Root")

project("BlackBoxMath")
enable_testing()

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/CMake)
include(GoogleTestModule)

# Check for Windows or macOS compiler
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(warnings "-Wall -Wextra -Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    set(warnings "/W4 /WX /EHsc")
endif()

# Sets all of our warning flags
set(CMAKE_CXX_FLAGS "${warnings}" CACHE STRING "Flags used by the compiler during all build types." FORCE)
set(CMAKE_C_FLAGS   "${warnings}" CACHE STRING "Flags used by the compiler during all build types." FORCE)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCE_FILES
    Source/BlackBoxMath.cpp
    Source/Logging.cpp)

# This will run any CMakeLists.txt in specified subdirectory
add_subdirectory(Tests)
# Creates an executable using the specified cpp files
add_executable(BlackBoxMath Source/Main.cpp)
# Creates a library from the specified cpp files
add_library(BlackBoxMathLibrary ${SOURCE_FILES})

set_property(TARGET BlackBoxMath PROPERTY CXX_STANDARD 14)
set_property(TARGET BlackBoxMathLibrary PROPERTY CXX_STANDARD 14)

# Links a library to a specified executable
target_link_libraries(BlackBoxMath BlackBoxMathLibrary)
