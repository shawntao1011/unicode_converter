# Unicode Converter Comparison

To Compare the dependencies required by a simple GBK & UTF-8 converting executable case.

## Boost::locale

**project file structure** 

```txt
.
 |-CMakelists.txt
 |-extern
   |-CMakeLists.txt
   |-GTest
     |-CMakeLists.txt
 |-include
   |-converter.hpp
 |-src
   |-CMakeLists.txt
     |-sample.cpp
 |-tests
   |-CMakeLists.txt
   |-test_ascii.cpp

```

**Converter(*)**

```c++
#include <boost/locale/encoding.hpp>

namespace utilities{
    std::string boost_converter(std::string const& text,std::string const& to_encoding,std::string const*from_encoding){
        return boost::locale::conv::between(text,to_encoding,from_encoding);
    }
}

constexpr auto converter=utilities::boost_converter;

```

**sample.cpp**

```c++
#include "converter.hpp"

...
auto temp=converter(in_,"GBK","UTF-8");
...
```

### Dependency

| Platform | Build Type | Dependencies                                        | Size          |
| -------- | ---------- | --------------------------------------------------- | ------------- |
| Cygwin   | Debug      | sample.exe  <br>                                    | 200KB<br>     |
| Cygwin   | Release    | sample.exe <br>                                     | 169KB<br>     |
| MSVC     | Debug      | sample.exe<br>boost_locale-vc142-mt-gd-x32-1_75.dll | 65KB<br>633KB |
| MSVC     | Debug      | sample.exe<br>boost_locale-vc142-mt-gd-x32-1_75.dll | 14KB<br>386KB |

## ICU

**project file structure**

```txt
.
 |-CMakeLists.txt
 |-extern
 | |-CMakeLists.txt
 | |-GTest
 | | |-CMakeLists.txt
 |-include
 |-src
 | |-CMakeLists.txt
 | |-sample.cpp
 |-tests
 | |-CMakeLists.txt
 | |-test_ascii.cpp
```

**sample.cpp**

```c++
#include "unicode/utypes.h"
#include "unicode/ucnv.h"

...
UErrorCode status=U_ZERO_ERROR;
UConverter *conv;
int32_t len1;

conv=ucnv_open("UTF-8",&status);
char source[]="훐컄"; //this two symbol's unicode is 0xD6D0,0xCEC4,correspond to GBK "中文"
UChar target1[100];
len1=ucnv_toUChars(conv,target1,100,source,6,&status);

ucnv_close(conv);
printf("%d\n",len1);
...
```

### Dependency

| Platform | Build Type | Dependencies                                 | Size                      |
| -------- | ---------- | -------------------------------------------- | ------------------------- |
| Cygwin   | Debug      | sample.exe                                   | 171KB                     |
| Cygwin   | Release    | sample.exe                                   | 153KB                     |
| MSVC     | Debug      | sample.exe<br>icuucd69.dll<br>icudtd69.dll   | 38KB<br>2012KB<br>27995KB |
| MSVC     | Release    | sample.exe<br/>icuucd69.dll<br/>icudtd69.dll | 9KB<br>1443KB<br>27995KB  |

# Conclusion

For those who using Cygwin for development, ICU is lighter than Boost, and no boost lib need to be installed through **setup.exe**.(ICU is installed internally on Cygwin).

For MSVC developer, the ICU may become a bad choice since the additional icudtd69.dll is required and this dll is way big than the boost dependency.

