add_library(converter INTERFACE)
#target_sources(converter INTERFACE include/converter.hpp)
target_include_directories(converter INTERFACE 
                            include
)
set_target_properties(converter PROPERTIES LINKER_LANGUAGE CXX)

find_package(Boost COMPONENTS locale REQUIRED)
target_include_directories(converter INTERFACE Boost::locale)
target_link_libraries(converter INTERFACE Boost::locale)
