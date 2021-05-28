#include "converter.hpp"
#include <algorithm>
char const*
API_DECL boost_converter(char const* text, char const* to_encoding, char const* from_encoding)
{
    std::string temp_str = boost::locale::conv::between(text,to_encoding,from_encoding);
    auto out = std::make_unique<char[]>(temp_str.size() + 1);
    std::copy_n(temp_str.cbegin(), temp_str.size(), out.get());
    return out.release();

    // char* ptr=new char[temp_str.size()+1];
    // strcpy_s(ptr,temp_str.size()+1,temp_str.c_str());
    // return ptr;
}
