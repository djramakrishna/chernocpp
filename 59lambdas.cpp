#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

// Way to define an anonymous function 
// Something like a quick disposable function 
// Whenever you have a func ptr, you can use lambda in c++
// Way for us to define a func, without actually defining a func

void foreach(const std::vector<int>& values, void(*func)(int)) //same as std::function<void(int)>& func) - void(*func)(int)
{
    for (int value : values)
        func(value);
}

int main()
{
    std::vector<int> values = {1, 2, 3, 4, 5};
    auto lambda = [](int value){ std::cout << "Value :" << value << std::endl; };
    foreach(values, lambda);

    int a = 5;

    // What if we want to print a instead of value in the lambda ? 
    // Pass it by value or ref, that's capture is for []
    // [&] pass everythign in by ref
    // [a] pass by value
    // [=] pass everything in by value

    // auto lambda = [&a](int value){ std::cout << "Value :" << a << std::endl; };
    // auto lambda = [=](int value) mutable { a = 5; std::cout << "Value :" << a << std::endl; }; // Cannot modify a as its passed by value so use mutable 

    auto it = std::find_if(values.begin(), values.end(), [](int value){ return value > 3; }); //Returns the first element that is greater than 3
    std::cout << *it << std::endl;
    
}