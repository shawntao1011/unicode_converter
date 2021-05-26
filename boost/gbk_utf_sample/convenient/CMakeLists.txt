CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

project(sample)

find_package(Boost COMPONENTS locale REQUIRED )

add_executable(sample convenient_sample.cpp)

target_include_directories(sample PRIVATE Boost::locale)

target_link_libraries(sample PRIVATE Boost::locale)