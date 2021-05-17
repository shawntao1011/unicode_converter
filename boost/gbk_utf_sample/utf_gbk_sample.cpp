#include <iostream>
#include <boost/locale/encoding.hpp>

int main(){
    std::string temp="中";
    std::cout<<temp<<std::endl;

    std::cout<<boost::locale::conv::between(temp,"GBK","UTF-8")<<std::endl;
    return 0;
}