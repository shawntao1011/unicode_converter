# unicode_converter

cmake and vs version unicode lib install and test cases



## Desc

This project is for building a knowledge on Unicode Converter lib: ICU and boost. 

For later assembling purpose, the project provided Visual Studio sln and cmake cases.



#Tests for each lib are tested under MSVC and Cygwin. 

## Build 

### MSVC

​	**config:**

```cmake
    cmake -B build -A Win32 -DCMAKE_TOOLCHAIN_FILE={cmake tool path}
```

​	**Build:**

​			**Debug build:**

```cmake
	cmake --build build
```

​			**Release build:**

```cmake
	cmake --build build --config Release
```



### Cygwin 

#### 	config:

​		**Debug build**

```cmake
    cmake -B build 
```

​		**Release build**

```cmake
	cmake -B build -DCMAKE_BUILDTYPE=Release
```

​	**Build:**

```
	cmake --build build
```



