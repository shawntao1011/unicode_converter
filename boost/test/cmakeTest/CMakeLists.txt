#####################################
# before cmake configure:
# #use vcpkg to install boost on windows
# ```
# vcpkg install boost
# ``` 
# 
# windows cygwin please use the install exe
#####################################

CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

project(boost_test)

find_package(Boost COMPONENTS locale REQUIRED)

add_executable(boost_basic boost_utility.cpp)
target_include_directories(boost_basic PRIVATE Boost::locale)
target_link_libraries(boost_basic PRIVATE Boost::locale)

add_executable(test1 boundary.cpp)
target_include_directories(test1 PRIVATE Boost::locale)
target_link_libraries(test1 PRIVATE Boost::locale)

add_executable(test2 calendar.cpp)
target_include_directories(test2 PRIVATE Boost::locale)
target_link_libraries(test2 PRIVATE Boost::locale)

add_executable(test3 collate.cpp)
target_include_directories(test3 PRIVATE Boost::locale)
target_link_libraries(test3 PRIVATE Boost::locale)
