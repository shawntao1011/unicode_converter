#include <iostream>
#include <boost/locale/encoding.hpp>

namespace utilities{
    std::string boost_converter(std::string const& text,std::string const&to_encoding,std::string const&from_encoding){
        return boost::locale::conv::between(text,to_encoding,from_encoding);
    }
}

constexpr auto converter=utilities::boost_converter;

int main(){
    std::string temp="中";
    std::cout<<"sample chinese char is "<<temp<<std::endl;

    auto temp_utf8 = converter(temp,"GBK","UTF-8");

    auto temp_gbk = converter(temp_utf8,"UTF-8","GBK");
    std::cout<<"after conver: "<<temp_gbk<<std::endl;
    return 0;
}