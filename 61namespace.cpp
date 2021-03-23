#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

// Primary purpose of the namespaces in to avoid naming conflicts 
// Never use namespaces in header files generally 

namespace apple
{    
    void print(const std::string& text)
    {
        std::cout << text << std::endl;
    }
    void print_again()
    {

    }
} 

namespace orange
{
    void print(const char* text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << text << std::endl;
    }
}

// using namespace apple;
// using namespace orange; 

int main()
{   
    //using namespace std; //Confines the scope of namespace std
    using apple::print;
    namespace b = apple;  //Using aliases for namespaces 
    
    print("Hello");
    apple::print_again();

    b::print("cherno!");
}