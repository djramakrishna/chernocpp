#include <iostream>

int main()
{
    int x = 5;
    bool comparisionResult = x == 5;

    if (comparisionResult)
    {
        std::cout << "Hello world in beginning" << std::endl;
    }

    //const char* ptr = nullptr;
    const char* ptr = "hello";
    if (ptr)
        std::cout << "Hello world" << std::endl;
    else 
        std::cout << "Sed world" << std::endl;
}