#include<iostream>
#include<string>
#include<stdlib.h>
#include <cstring>

int main()
{   

    char name[] = "agent";
    name[2] = 'a';
    std::cout << name << std::endl;

    const char* name2 = u8"cherno";
    // cannot change the name2[2] = 'a' when you used a pointer, if you want to change you char arrays;
    std::cout << strlen(name2) << std::endl;
    std::cout << name2 << std::endl;

    const wchar_t* name3 = L"myagent";
    const char16_t* name4 = u"char16agent";
    const char32_t*name5 = U"char32agent";

    using namespace std::string_literals;
    std::string agentname = "Cherno"s + "hello";
    std::cout << agentname << std::endl;
 
}   