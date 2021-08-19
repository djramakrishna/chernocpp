// special type of method, which runs whenever we instantiate an object 
// in case of cpp we need to set all of the primitive types to some particular value manually, else they'd be set as whatever that is left over in that memory

#include <iostream>

class Entity
{
public:
    float X, Y;
    
    // following is a default constructor
    // all the premitives types are to be set in C++ 
    /*
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
    }
    */

    // constructor is a method that gets called every time a class is instantiated
    // constructor name must be the same name as that of the class 
    // they don't run without instantiation of an object 
    // even though if you dont create a constructor there is always one created but it does nothing 
    // but you can always delete it by doing classname() = delete; inside the class and under public

    Entity(float x, float y)    // just another way of giving parameter to member variable 
    {   
        X = x;
        Y = y;
    }
    void Init()
    {
        X = 0.0f;
        Y = 0.0f;
    }
    void Print()
    {
        std::cout<< X << " in class " << Y << std::endl;
    }
};

int main()
{
    Entity e(10.0f, 5.0f);  // instantiated the class
    //e.Init();             // but this is quite a bit of code, we need to call the init func again just to set X, Y values

    std::cout << e.X << " in main " << e.Y << std::endl;
    e.Print(); //even without initializing x, y it'll work as it throws out values present that are left over in that memory space

}
