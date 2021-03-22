// A normal string which uses char data type as a character - 1byte character 
// String is just an array of character 
// Strings are immutable 
//If you dont use new keyword, you cant use the delete keyword
#include <iostream>
#include <string>

void PrintString(const std::string& string)
{
    std::cout << string << std::endl;
}

int main()
{   
    //The following is a char pointer
    char* name = "assassin";
    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};
    char name3[7] = {'C', 'h', 'e', 'r', 'n', 'o', 0};
    std::cout << name2 << "  "  << name3 << std::endl;
    //name[2] = 'a';

    //"agent" is a const char array 
    std::string myname = "agent";  //+"hello!"; cannot add hello as myname has a const char type
    // instead you can do the following to concatenate
    myname += "hello!";
    std::string yourname = std::string("cherno") + "hello";

    std::cout << myname << std::endl; 
    //name.size();

    char* s;
    //strlen(s);
    //strcpy(s);

    //check if the string contains something or not  (myname.find returns the position)
    bool contains = myname.find("nt") != std::string::npos;
    std::cout << contains << std::endl;
    PrintString(myname);
}