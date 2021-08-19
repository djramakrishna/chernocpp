#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

// the primary purpose of the namespaces is to avoid naming conflicts, that's why they exist, nothing more
// we might want to call symbols with same names in different contexts 
// never use namespaces in header files generally 
// C doesn't have namespaces

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

/*----------------------------------------------------------------
We can use nested namespaces aswell

namespace apple{
    namespace functions{    

        void print(const std::string& text)
        {
            std::cout << text << std::endl;
        }
    }
} 
*/

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
    // using namespace std;         // confines the scope of namespace std
    // using namespace apple;       // print() and print_again() comes into this scope but in order to use only print, use the namespace in the below manne
    using apple::print;             // only print comes in this scope, not print_again() 

    print("Hello");                 // as print is given in this scope by line 55, we dont need to specify the namespace again
    apple::print_again();           // but we need to use namespace for print_again() as it's not in this scope

    namespace b = apple;            // using aliases for namespaces, this is very useful in case of nested namespaces
    b::print("cherno!");
}