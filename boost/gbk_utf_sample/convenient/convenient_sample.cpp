#include <iostream>
#include <boost/locale/encoding.hpp>
#include <algorithm>
#include <cstring>
// char const*
// boost_converter(char const* text,char const* to_encoding,char const* from_encoding)
// {
//         return boost::locale::conv::between(text,to_encoding,from_encoding).c_str();
// }

char const*
boost_converter(char const* text,char const* to_encoding,char const* from_encoding)
{
    std::string temp_str=boost::locale::conv::between(text,to_encoding,from_encoding);
    auto out=std::make_unique<char[]>(temp_str.size()+1);
    copy_n(temp_str.cbegin(),temp_str.size(),out.get());
    return out.release();
}


int main(){
    //std::string temp="▒<9B><90>▒<84>";
    std::string temp="\xD6""\xD0""\xCE""\xC4";
    std::cout<<"sample chinese char is "<<temp<<std::endl;
    char const* temp_utf8 = boost_converter(temp.c_str(),"UTF-8","GBK");
    std::cout<<std::strcmp(temp_utf8,"\xE4""\xB8""\xAD""\xE6""\x96""\x87")<<std::endl;
    std::cout<<"after convert1: "<<temp_utf8<<std::endl;

    auto temp_gbk = boost_converter(temp_utf8,"GBK","UTF-8");
    std::cout<<"after convert2: "<<temp_gbk<<std::endl;
    return 0;
}
