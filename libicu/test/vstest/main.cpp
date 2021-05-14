#include <iostream>
#include <string>

#include <unicode/unistr.h>

int main() {
    icu::UnicodeString uni_str((UChar32)1120);
    std::string str;
    uni_str.toUTF8String(str);
    std::cout << str << std::endl;

    return 0;
}