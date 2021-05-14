CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

project(sample)

add_executable(test main.cpp)

find_package(ICU REQUIRED COMPONENTS uc dt in io)

target_link_libraries(test PRIVATE ICU::uc ICU::dt ICU::in ICU::io)

target_include_directories(test PRIVATE ICU::uc ICU::dt ICU::in ICU::io)
