// 2 - static variable inside a class or struct - this variable is going to share memory with all the instances of the class or struct 
// i.e, in all of the instances of the class or struct there is going to be only one instance of that variable, means only one 
// If used with a variable, if one of the intances of the class changes this static variable, it's going to reflect that changes across 
// all the instances, as there is only one variable though there are many instances of the class.

#include <iostream>

struct Entity 
{
    //int x, y;
    static int x, y;
    void Print()
    {
        std::cout << x << "," << y << std::endl;
    }
};

//define those static variables else we might receive an error in main for those static variables

int Entity::x; //scope of the static variable
int Entity::y; //scope of the static variable

int main()
{
    Entity e;
    //e.x = 2;
    //e.y = 3;
    Entity::x = 2;
    Entity::y = 3;
    
    //Entity e1 = {5, 9};
    Entity e1;
    Entity::x = 5;
    Entity::y = 9;
    //e1.x = 5;
    //e1.y = 8;
    e.Print();
    e1.Print();
    Entity::Print();
    Entity::Print();
    
}