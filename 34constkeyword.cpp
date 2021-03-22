// A mechanism we get to make the code look little bit cleaner 
// Its like a promise that you give that it will be constant, but of course you can 
// bypass it by breaking the promise 

#include <iostream>
#include <string>

class Entity
{
private:
    int m_x, m_y;
    mutable int var;
public:
    // const coming after the method (only works in the class btw)
    // cannot modify the variables in the class 
    // But can modify mutable variables 
    int GetX() const 
    //const int* const GetX() const
    {   
        // m_x = 2; cannot do that 
        var = 2;
        return m_x;
    }
    void SetX(int x)
    {
        m_x = x;

    }
};

void PrintEntity(const Entity& e)
{   
    std::cout << e.GetX() << std::endl;
    // If you dont use const in "int GetX() const" and you use const Entity& e in the func argument
    // GetX doesn't guarantee that its not gonna touch the entity it might do m_x = 2 in line 18
    // So you'd basically not modifying the entity e, but would be calling a method modify entity 
}

int main()
{
    const int MAX_AGE = 5;   // Declaring a variable and not gonna be modifying that variable
    
    int* a = new int;
    *a = 2;                  // Changes the contents at that memory address 
    std::cout << *a << std::endl;

    a = (int*)&MAX_AGE;      // Changes which memory address we are pointing towards 

    const int* b = new int;  // Cannot modify the contents of that pointer 

   // * b = 2;              //Cannot change the contents of that pointer 

    b = (int*)&MAX_AGE;     // But can change memory address we are pointing towards 

    std::cout << *b << std::endl;

    int* const c = new int;
    *c = 4;                       // Can change the contents of the pointer
    // b = (int*)&MAX_AGE;        // But cannot reassing the pointer to point something else 
    std::cout << *c << std::endl; 

}