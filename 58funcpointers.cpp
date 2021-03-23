#include <iostream>
#include <string>
#include <vector>


// A way to assign a func to a variable 

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
    //auto function = helloworld(); cant do this as helloworld returns void and we are calling the function here 
    // Below, we are not calling the function, rather we are getting the func pointer similiar to auto function = &helloworld;
    auto function1 = helloworld; 
    
    function1(3);  
    function1(4);

    // void(*function)(); //Type of the function in auto function
    void(*function2)(int) = helloworld;

    // The above can be declared in the following way aswell
    typedef void(*helloworldfunction)(int);

    helloworldfunction function3 = helloworld;
    function3(8);

    // Now lets see why you might wanna use function pointers 
    std::vector<int> values = {2, 3, 4, 5};

    foreach(values, printvalue);
    foreach(values, [](int value){std::cout << "Value : " << value << std::endl;}); //The same done in the above line can be done by using lambdas 
}
