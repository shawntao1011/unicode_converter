#find_package(Boost COMPONENTS locale REQUIRED)
add_executable(mytest utf_gbk_sample.cpp)

target_include_directories(mytest PRIVATE ../lib/include)
target_link_libraries(mytest PRIVATE converter)
#target_include_directories(mytest PRIVATE Boost::locale)
#target_link_libraries(mytest PRIVATE Boost::locale)
