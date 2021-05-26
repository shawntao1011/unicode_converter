#include <iostream>
#include <boost/locale/encoding.hpp>
#include "converter.hpp"

int main(){
    //std::string temp="훐컄";
    std::string temp="\xD6""\xD0";
    std::cout<<"sample chinese char is "<<temp<<std::endl;
    auto temp_utf8 = boost_converter(temp.c_str(),"UTF-8","GBK");
    std::cout<<"after convert1: "<<temp_utf8<<std::endl;

    auto temp_gbk = boost_converter(temp_utf8,"GBK","UTF-8");
    std::cout<<"after convert2: "<<temp_gbk<<std::endl;
    return 0;
}