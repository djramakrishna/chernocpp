//Runs when an object is destroyed
//when unitialize anything or clean any memory used 

#include <iostream>

class Entity
{
public:
    
    float X, Y;

    ~Entity()
    {
        std::cout << "Destroyed entity " << std::endl;
    }

    Entity()
    {   
        X = 0.0f;
        Y = 0.0f;
        std::cout << "Created an entity " << std::endl;
    }

    void Print()
    {
        std::cout<< X << " in class " << Y << std::endl;
    }
};

void Function()
{
    Entity e;
    e.Print();
}

int main()
{
    Function();
}