#include <boost/locale/encoding.hpp>

namespace utilities{
    inline std::string boost_converter(std::string const& text,std::string const&to_encoding,std::string const&from_encoding);
}

const auto converter=utilities::boost_converter;