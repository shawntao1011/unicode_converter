# Static link boost against self-defined dll

## Install boost

under vcpkg.exe root

```shell
vcpkg install boost-locale:x86-windows-static
```

 

## Integrate into dll

Setting cmake toolchain file

```cmake
set(CMAKE_TOOLCHAIN_FILE {your vcpkg.cmake path})
set(VCPKG_TARGET_TRIPLET x86-windows-static)
#before project
project(...)
```



lib/CMakeLists.txt

```cmake
add_library(youlib SHARED)

# @ref https://blog.iany.me/zh/2017/03/vcpkg-static-linking
if (MSVC)
    string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
    string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG})
    string(REPLACE "/MD" "/MT" CMAKE_CXX_FLAGS_RELEASE ${CMAKE_CXX_FLAGS_RELEASE})
endif()

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_RUNTIME ON)

find_package(Boost COMPONENT lib1 lib2 REQUIRED)
target_inlcude_directories(converter PUBLIC Boost::lib1 Boost::lib2)
target_link_libraries(converter PUBLIC Boost::lib1 Boost::lib2)
```



# Build 

**command Line  build**

```shell
cmake -B build -A [Win32|Win64] -DCMAKE_TOOLCHAIN_FILE=D:/vcpkg/scripts/buildsystems/vcpkg.cmake -DVCPKG_TARGET_TRIPLET=[x86-windows-static|x64-windows-static]
```







