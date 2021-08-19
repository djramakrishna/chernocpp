#include <iostream>
#include <string>
#include <vector>

// function pointers are mainly used to use a function inside another functions
// a way to assign a function to a variable 
// pass functions into another function as a parameter

void helloworld(int a)
{
    std::cout << "Hello world ! Value " << a << std::endl;
}

void printvalue(int value)
{
    std::cout << "Value : " << value << std::endl;
}

void foreach(const std::vector<int>& values, void(*func)(int))
{
    for (int value : values)
    {
        func(value);
    }
}

int main()
{
    // auto function = helloworld(); cant do  this as helloworld returns void and we are calling the function here 
    // in below case, we are not calling the function, rather we are getting the function pointer similiar to auto function = &helloworld;
    // functions are just cpu stored somewhere in our binary, in future we might deepdive in bins to see how the cpu instructions work
    // when you compile your code every single function is compiled into cpu instructions and saved in binaries
    auto function1 = helloworld;    // giving the function pointer to function1 variable
    
    function1(3);  
    function1(4);
 
    // void(*function)();                   //Type of the function in auto function
    void(*function2)(int) = helloworld;     //creating a function pointer for helloworld function

    // The above can be declared in the following way aswell
    typedef void(*helloworldfunction)(int);

    helloworldfunction function3 = helloworld;
    function3(8);

    // Now lets see why you might wanna use function pointers 
    std::vector<int> values = {2, 3, 4, 5};

    foreach(values, printvalue);        // basically we are passing a function pointer to another function
    std::cout << "Another way to do the same functionality : " << std::endl;
    foreach(values, [](int value){std::cout << "Value : " << value << std::endl;}); // the same done in the above line can be done by using lambdas 
}
