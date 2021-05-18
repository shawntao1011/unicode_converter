set(target_name "sample")

find_package(Boost COMPONENTS locale REQUIRED)

add_executable(${target_name})
target_sources(${target_name}
    PRIVATE
        sample.cpp
)

target_include_directories(${target_name}
    PRIVATE
        "../include"
        Boost::locale
)

target_link_libraries(${target_name} PRIVATE Boost::locale)