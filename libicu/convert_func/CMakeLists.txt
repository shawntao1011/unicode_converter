CMAKE_MINIMUM_REQUIRED(VERSION 3.5 FATAL_ERROR)

project(lib_test CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

add_subdirectory(src)

# #CTest related
# enable_testing()
add_subdirectory(tests)
