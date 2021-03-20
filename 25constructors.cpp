//Special type of method, which runs whenever we instantiate an object 
#include <iostream>

class Entity
{
public:
    float X, Y;
    //Following is a default constructor
    //All the premitives types are to be set in C++ 
    /*
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
    }
    */
    Entity(float x, float y)
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
    Entity e(10.0f, 5.0f); //instantiated the class
    //e.Init();

    std::cout << e.X << " in main " << e.Y << std::endl;
    e.Print(); //even without initializing x, y it'll work as it throws out values present that are left over in that memory space

}