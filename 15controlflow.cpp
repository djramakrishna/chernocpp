// continue, break, return
// contine says, to go back to loop starting if there is one 
// break - breaks out of the loop completely 
// return - it has to return something and breaks out of the function or loop

#include <iostream>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i > 2)
            continue;
        std::cout << i << " Hello" << std::endl;
    }

    for (int i = 0; i < 5; i++)
    {
        if (i > 2)
            break;
        std::cout << i << " Hello break" << std::endl;
    }
    
    for (int i = 0; i < 5; i++)
    {
        if ((i+1) % 2 == 0)
            return 0;
        std::cout << i << " Hello return" << std::endl;
    }
}