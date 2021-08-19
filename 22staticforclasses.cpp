// 2 - static variable inside a class or struct - this variable is going to share memory with all the instances of the class or struct 
// i.e, in all of the instances of the class or struct there is going to be only one instance of that variable, means only one  
// If used with a variable, if one of the intances of the class changes this static variable, it's going to reflect that changes across 
// all the instances, as there is only one variable though there are many instances of the class.
// because of that there's no point of referring a variable through a class instance as it's like a global instance for that class

// STATIC METHODS DOES NOT HAVE A CLASS INSTANCE
// static method has a similar effect where you don't have access to class instance
// static method can be called without a class instance, inside a static method you can't write anything that refers to class instance
// as you dont have the class instance, to refer to class instance 
// STATIC METHODS CANNOT ACCESS NON STATIC VARIABLES 


#include <iostream>

struct Entity 
{
    //int x, y;
    static int x, y;

    void Print()
    {
        std::cout << x << "," << y << std::endl;
    }
    
    // every non static methods that is inside a class always gets an instance of the current class as a parameter 
    // static methods cannot access non static variables 
    // static method does not have a class instance  
    // static method is same as if you wrote a method outside of a class  
    
    static void Print2()
    {
        std::cout << x << " In static function " << y << std::endl;
    }
    
};

//Below is actually how a nonstatic method in a class looks likes
static void Print(Entity e)
{
    std::cout << e.x << "," << e.y << std::endl;
}

//define those static variables else we might receive an error in main for those static variables

int Entity::x; //setting the scope of the static variable
int Entity::y; //setting the scope of the static variable

// as x and y are static in Entity, they are basically the data that is being shared across all the instances of the Entity class
// it makes sense to store in Entity class as it is related to Entity class 

int main()
{
    Entity e;
    //e.x = 2;
    //e.y = 3;
    Entity::x = 2;
    Entity::y = 3;
    // above 4 lines do the same, as x and y don't really belong to a class, they are like a namespace
    
    //Entity e1 = {5, 9};
    Entity e1;
    Entity::x = 5;
    Entity::y = 9;
    //e1.x = 5;
    //e1.y = 8;
    e.Print();
    e1.Print();
    
    Entity::Print2();
    Entity::Print2();
    
}
