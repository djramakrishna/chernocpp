//Static in local scope
//Two kinds of consideration when we declare the variable
//Lifetime of the variable and scope of the variable

/*
    Static local variable allows us to declare a variable that has a lifetime of the entire program
    however its scope is inside that function/if statement
*/

// Not much diff in static in class scope vs static in function 

#include <iostream>

void Function()
{
    static int i = 0; 
    i++;
    std::cout << i << std::endl;
}

int j = 0;
void Func()
{
    j++;
    std::cout << j << std::endl;
}

int main()
{
    Function();
    Function();
    Function();
    Function();
    Function();

    Func();
    Func();
    Func();
}