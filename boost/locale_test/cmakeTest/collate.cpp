#include <iostream>
#include <string>
#include <set>
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;
int main()
{
     generator gen;
     std::locale::global(gen(""));
     typedef std::set<std::string,std::locale> set_type;
     set_type all_strings;
     while(!cin.eof()) {
          std::string tmp;
          getline(cin,tmp);
          all_strings.insert(tmp);
     }
     for(set_type::iterator p=all_strings.begin();p!=all_strings.end();++p) {
          cout<<*p<<endl;
     }
}