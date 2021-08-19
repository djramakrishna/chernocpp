// inheritance between the classes allows us to have a hierarchy of classes which relate to each other
// it allows us to have a base class contiaining common functionality 
// and it allows us to branch out from the base class and create subclass from parent class 


// why is it even useful ????
// mainly used to avoid code duplications
// instead of running a code over and over again, we can put all the common code of many classes into a base class

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


// Player has everything that Entity has and possibly more 
// Player is subclass and Entity is base class 

// Player has everything that entity has and maybe possibily more 

class Player : public Entity //anything that is not private in Entity class is actually accessible by Player class 
{
public:
    const char* Name;       // just an extra data compared to Entity class
    
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
