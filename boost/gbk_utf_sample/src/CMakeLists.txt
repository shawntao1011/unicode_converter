CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

project(test_sample)

find_package(Boost COMPONENTS locale REQUIRED)

add_executable(mytest utf_gbk_sample.cpp)

target_include_directories(mytest PRIVATE Boost::locale)
target_link_libraries(mytest PRIVATE Boost::locale)
