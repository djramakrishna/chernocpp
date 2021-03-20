//Inheritance between the classes allows us to have a base class contiaining common functionality 
//and it allows us to branch out from the base class and create subclass from parent class 

//Mainly used to avoid code duplications
#include <iostream>

class Entity 
{
public:
    float X, Y;
    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};


//Player has everything that Entity has and possibly more 
//Player is subclass and Entity is base class 

class Player : public Entity //anything that is not private in Entity is actually accessible by Player class 
{
public:
    const char* Name;
    
    void PrintName()
    {
        std::cout << Name << std::endl;
    }
};

int main()
{
    Player player;
    player.Move(5, 5);
    player.X = 3;
}
