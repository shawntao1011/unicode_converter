
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

project(lib VERSION 1.0.0 LANGUAGES CXX)


set(Boost_USE_STATIC_LIBS ON)
# set(Boost_USE_STATIC_RUNTIME OFF)

add_subdirectory(lib)

add_subdirectory(src)

