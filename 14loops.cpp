#include <iostream>

int main()
{
    int i = 0;
    bool condition = false;
    for( ; i < 5; )
    {
        std::cout << "HELLO " << std::endl;
        i++;
    }

    bool cond = true;
    int j = 0;
    for ( ; cond; )
    {
        std::cout << "HELLO man " << std::endl; 
        j++;
        if(!(j<5))
            cond = false;
    }

    i = 0;
    while(i < 5)
    {
        std::cout << "hello while loop" << std::endl;
        i++;
    }

    bool flag = false;
    do
    {
        std::cout << "Do while is run atleast once " << std::endl;
    } while (flag);
    
}