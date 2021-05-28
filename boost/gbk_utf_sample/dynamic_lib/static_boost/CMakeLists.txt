
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
set(CMAKE_TOOLCHAIN_FILE D:/vcpkg/scripts/buildsystems/vcpkg.cmake)
set(VCPKG_TARGET_TRIPLET x86-windows-static)
project(lib VERSION 1.0.0 LANGUAGES CXX)

if (MSVC)
    string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
    string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG})
    string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS_RELEASE ${CMAKE_CXX_FLAGS_RELEASE})
endif()

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_RUNTIME ON)

add_subdirectory(lib)

add_subdirectory(src)