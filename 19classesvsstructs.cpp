//Class is by default a private
//Struct by default is public
//That's the only difference between a struct and a class 

//C has struct but not classes so there would be no backward compatibility if struct were removed in cpp
//At the end of the day it depends on your coding style what to choose

//Represent just some data - use struct 
//Have got some entire functionality, along with data - use class 
//you can use struct wherever you can use class 

#include <iostream>

#define LOG(x) std::cout << x << std::endl;

struct Player
{
public:
    int x, y; 
    int speed;
    
    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};


struct vec2
{
    float x, y;

    void Add(const vec2& other)
    {
        x += other.x;
    }
};

int main()
{   
    //Variables that are made from class type are called objects and new obj variable is called an instance 
    Player player1;
    player1.x = 5;
    player1.y  = 10;
    player1.speed  = 20;
    player1.Move(1,2);

    LOG(player1.x);
	LOG(player1.y);
}