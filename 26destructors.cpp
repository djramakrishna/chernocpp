// runs when an object is destroyed
// used when we unitialize anything or clean any memory used 
// when the scope ends, the object gets deleted

// good example is heap allocated objects manually,
// we probably want to clean that memory on heap after it's used 

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