#include <boost/locale/encoding.hpp>

#ifdef _WIN32
#   ifdef CE_util4q_EXPORTS
#   define util4q_API  __declspec(dllexport)
#   else
#   define util4q_API  __declspec(dllimport)
#   endif
#   define API_DECL  __cdecl
#else
#   define util4q_API
#   define API_DECL
#endif

#ifdef __cplusplus
extern "C"{
#endif
    util4q_API 
    char const*
    API_DECL boost_converter(char const* text,char const* to_encoding,char const* from_encoding);

#ifdef __cplusplus
}
#endif

//const auto converter=utilities::boost_converter;