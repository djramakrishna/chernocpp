#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

void foreach(const std::vector<int>& values, void(*func)(int)) //same as std::function<void(int)>& func) - void(*func)(int)
{
    for (int value : values)
        func(value);
}

// For example, you might be writing some code that has a function called xyz() and there is another library available which is also having same function xyz(). 
// Now the compiler has no way of knowing which version of xyz() function you are referring to within your code.
// A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar functions, 
// classes, variables etc. with the same name available in different libraries. 
// Using namespace, you can define the context in which names are defined. In essence, a namespace defines a scope.
// ALWAYS USE NAMESPACES IN THE SMALLEST SCOPE POSSIBLE 

namespace apple
{
    void print(const std::string& text)
    {
        std::cout << text << std::endl;
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
    apple::print("Hello");
    orange::print("cherno!");
}

