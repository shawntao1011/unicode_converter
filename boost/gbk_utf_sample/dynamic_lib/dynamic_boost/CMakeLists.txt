
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

set(CMAKE_TOOLCHAIN_FILE D:/vcpkg/scripts/buildsystems/vcpkg.cmake)
set(VCPKG_TARGET_TRIPLET x86-windows)


project(lib VERSION 1.0.0 LANGUAGES CXX)


add_subdirectory(lib)

add_subdirectory(src)