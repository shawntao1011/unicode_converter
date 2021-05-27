#include "converter.hpp"

char const*
API_DECL boost_converter(char const* text,char const* to_encoding,char const* from_encoding)
{
        std::string temp_str=boost::locale::conv::between(text,to_encoding,from_encoding);
        char* ptr=new char[temp_str.size()+1];
        strcpy(ptr,temp.c_str());
        return ptr;
}