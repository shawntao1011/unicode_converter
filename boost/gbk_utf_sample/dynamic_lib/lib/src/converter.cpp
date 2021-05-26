#include "converter.hpp"

char const*
API_DECL boost_converter(char const* text,char const* to_encoding,char const* from_encoding)
{
        return boost::locale::conv::between(text,to_encoding,from_encoding).c_str();
}