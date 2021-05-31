add_library(converter SHARED src/converter.cpp)
#target_sources(converter INTERFACE include/converter.hpp)
target_include_directories(converter PRIVATE
                            include
)
set_target_properties(converter PROPERTIES LINKER_LANGUAGE CXX)

# set(VCPKG_TARGET_ARCHITECTURE x86)
# set(VCPKG_CRT_LINKAGE dynamic)
# set(VCPKG_LIBRARY_LINKAGE static)

########################################################################
#Too use vcpkg to install boost and find_package correctly:
#   for x86 dynamic: vcpkg install boost:x86-windows
#   for x86 static linkage and static CRT(/MT): vcpkg install boost:x86-windows-static
#   for x86 static linkage and dynamic (/MD): vcpkg insttall boost:x86-windows-static-md
########################################################################
set(CMAKE_TOOLCHAIN_FILE D:/vcpkg/scripts/buildsystems/vcpkg.cmake)
set(VCPKG_TARGET_TRIPLET x86-windows-static-md)

find_package(Boost COMPONENTS locale REQUIRED)
target_include_directories(converter PUBLIC Boost::locale)
target_link_libraries(converter PUBLIC Boost::locale)
