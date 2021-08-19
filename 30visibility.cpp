// Purely exists in any language to help you write better code and organise 
// Keywords in c++ - private, public and protected 

#include <iostream>
#include <string>

class Entity
{
private:
    int X, Y;       // only entity class or friends can access stuff under private

protected:
    int a, b;       // entity class and all subclasses along the heirarchy can access stuff under protected

public:
    Entity()
    {
        X = 0;
    }
};

class Player : public Entity
{
public:
    Player()
    {
        // Cant access here as X is private in Entity class 
        a = 2; // Can access a as it is protected and subclasses can access protected 
    }
};

int main()
{
    Entity e;
    //Cannot use e.X as X is private
    //Cannot use e.a as a is protected 
}