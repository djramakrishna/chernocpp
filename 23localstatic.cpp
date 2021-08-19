// static in local scope
// two kinds of consideration need to be considered when we declare the variable
// lifetime of the variable and scope of the variable

/*
    Static local variable allows us to declare a variable that has a lifetime of the entire program
    however its scope is inside that function/if statement
*/

// not much diff in static in class scope vs static in function 
// the one in class scope, can be accessed by anything in the class
// the one in func scope, can be anything inside that func
 
#include <iostream>

void Function()
{   
    // int i = 0;
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