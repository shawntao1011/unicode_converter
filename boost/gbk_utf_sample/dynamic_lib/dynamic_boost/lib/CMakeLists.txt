add_library(converter SHARED src/converter.cpp)
#target_sources(converter INTERFACE include/converter.hpp)
target_include_directories(converter PRIVATE
                            include
)
set_target_properties(converter PROPERTIES LINKER_LANGUAGE CXX)

find_package(Boost COMPONENTS locale REQUIRED)
target_include_directories(converter PUBLIC Boost::locale)
target_link_libraries(converter PUBLIC Boost::locale)
