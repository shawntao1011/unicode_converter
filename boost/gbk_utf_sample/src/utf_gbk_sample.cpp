#include <iostream>
#include <boost/locale/encoding.hpp>

int main(){
    std::string temp="中";
    std::cout<<"sample chinese char is "<<temp<<std::endl;

    auto temp_utf8 = converter(temp,"GBK","UTF-8");

    auto temp_gbk = converter(temp_utf8,"UTF-8","GBK");
    std::cout<<"after conver: "<<temp_gbk<<std::endl;
    return 0;
}