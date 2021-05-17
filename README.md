# unicode_converter

cmake and vs version unicode lib install and test cases



## Desc

This project is for building a knowledge on Unicode Converter lib: ICU and boost. 

For later assembling purpose, the project provided Visual Studio sln and cmake cases.



Tests for each lib are tested under MSVC and Cygwin. 

## Build 

### MSVC
```
    cmake -B build -A Win32 -DCMAKE_TOOLCHAIN_FILE=D:/vcpkg/scripts/buildsystems/vcpkg.cmake
```

### Cygwin 
```
    cmake -B build 
``` 