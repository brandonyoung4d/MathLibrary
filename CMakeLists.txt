cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
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

if(NOT CONFIGURED_ONCE)
    set(CMAKE_CXX_FLAGS "${warnings}" CACHE STRING "Flags used by the compiler during all build types." FORCE)
    set(CMAKE_C_FLAGS   "${warnings}" CACHE STRING "Flags used by the compiler during all build types." FORCE)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(Tests)
add_executable(BlackBoxMath Source/Main.cpp)
add_library(BlackBoxMathLibrary Source/ToDo.cc)

target_link_libraries(BlackBoxMath BlackBoxMathLibrary)

set(CONFIGURED_ONCE TRUE CACHE INTERNAL "A flag showing that CMake has configured at least once.")
