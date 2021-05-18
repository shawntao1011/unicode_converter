#include <boost/locale/encoding.hpp>

namespace utilities{
    std::string boost_converter(std::string const& text,std::string const&to_encoding,std::string const&from_encoding){
        return boost::locale::conv::between(text,to_encoding,from_encoding);
    }
}

constexpr auto converter=utilities::boost_converter;
    