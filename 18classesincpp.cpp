//OOP is just a style that you adopt, how to write a code
//C doesnt support OOP as there are no classes, objects in C
//C++ have classes and objects 

//Class - way to group data and functionality together
//Let say in a game, we need representation of a player 
//Position of player, attributes of player like speed, health, 3d model of the player etc.....


#include <iostream>

#define LOG(x) std::cout << x << std::endl;

//Classes are type, we're basically creating new variable type
//By default everything in a class is private, only func in that class can access those variables 
//So in order to access variables outside of the class declare them as public
//Functions inside classes are called methods 

//GIST OF A CLASS - WE GOT DATA AND SOME FUNCTIONS TO MANIPULATE THAT DATA 

class Player
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