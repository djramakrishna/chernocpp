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
    //using namespace std; //Confines the scope of namespace std
    using apple::print;
    namespace b = apple;  //Using aliases for namespaces 
    
    print("Hello");
    apple::print_again();

    b::print("cherno!");
}