#include <boost/locale.hpp>
#include <iostream>
#include <cassert>
#include <ctime>
int main()
{
    using namespace boost::locale;
    using namespace std;
    generator gen;
    // Make system default locale global
    std::locale loc = gen("");
    locale::global(loc); 
    cout.imbue(loc);
    
    string text="Hello World! あにま! Linux2.6 and Windows7 is word and number. שָלוֹם עוֹלָם!";
    cout<<text<<endl;
    boundary::ssegment_index index(boundary::word,text.begin(),text.end());
    boundary::ssegment_index::iterator p,e;
    for(p=index.begin(),e=index.end();p!=e;++p) {
        cout<<"Part ["<<*p<<"] has ";
        if(p->rule() & boundary::word_number)
            cout<<"number(s) ";
        if(p->rule() & boundary::word_letter)
            cout<<"letter(s) ";
        if(p->rule() & boundary::word_kana)
            cout<<"kana character(s) ";
        if(p->rule() & boundary::word_ideo)
            cout<<"ideographic character(s) ";
        if(p->rule() & boundary::word_none)
            cout<<"no word characters";
        cout<<endl;
    }
    index.map(boundary::character,text.begin(),text.end());
    for(p=index.begin(),e=index.end();p!=e;++p) {
        cout<<"|" <<*p ;
    }
    cout<<"|\n\n";
    index.map(boundary::line,text.begin(),text.end());
    for(p=index.begin(),e=index.end();p!=e;++p) {
        cout<<"|" <<*p ;
    }
    cout<<"|\n\n";
    index.map(boundary::sentence,text.begin(),text.end());
    for(p=index.begin(),e=index.end();p!=e;++p) {
        cout<<"|" <<*p ;
    }
    cout<<"|\n\n";
    
}