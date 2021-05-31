#find_package(Boost COMPONENTS locale REQUIRED)
add_executable(mytest utf_gbk_sample.cpp)


# if (MSVC)
#     string(REPLACE "/MT" "/MD" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
#     string(REPLACE "/MT" "/MD" CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG})
#     string(REPLACE "/MT" "/MD" CMAKE_CXX_FLAGS_RELEASE ${CMAKE_CXX_FLAGS_RELEASE})
# endif()
set(CMAKE_CXX_FLAGS_RELEASE "/MT")
set(CMAKE_CXX_FLAGS_RELEASE "/MT")
set(CMAKE_CXX_FLAGS_DEBUG "/MT")

target_include_directories(mytest PRIVATE ../lib/include)
target_link_libraries(mytest PRIVATE converter)
#target_include_directories(mytest PRIVATE Boost::locale)
#target_link_libraries(mytest PRIVATE Boost::locale)
