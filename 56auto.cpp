#include <iostream>
#include <string>
#include <vector>

std::string GetName()
{
    return "Cherno";
}

char* GetName2()
{
    return "Cherno2";
}

auto GetName3()
{
    return "Cherno";
}

int main()
{   
    int a = 5;
    auto b = a;
    auto c = 10;
    auto d = 5.5f;
    auto e = "cherno"; //const char ptr

    std::string name = GetName();
    std::string name2 = GetName2();
    //If you use auto name = GetName2() you cannot use name.size() etc methods 

    auto myname = GetName();

    std::vector<std::string> strings;
    strings.push_back("apple");
    strings.push_back("orange");

    //for(std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++)
    for (auto it = strings.begin(); it != strings.end(); it++)
    {
        std::cout << *it << std::endl;
    }


}