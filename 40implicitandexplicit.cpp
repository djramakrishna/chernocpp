#include <iostream>
#include <string>

// Implicit - without you telling what to do 
// Explicit - disables the functionality of implicit conversion 
// 

class Entity
{ 
private:
    std::string m_Name;
    int m_Age;
    
public:
    Entity(const std::string& name)
        : m_Name(name), m_Age(-1) {}
    
    Entity(int age)
        : m_Name("Unknown"), m_Age(age) {}
};

void printentity(const Entity& entity)
{

}

int main()
{
    Entity a("Cherno"); // Entity a = "Cherno"; -> Implicit conversion Entity is not string, but converts cherno to an entity and assigns to constructor 
    Entity b(22);       // Entity b = 22;       -> Implicit conversion Entity is not integer, but converts 22 to an entity and assigns to constructor 

    //printentity("cherno"); //This doesn't work cherno is array char, c++ does const char to string and then string to and entity 
    // Its only allowed to do once implicit conversion 

    printentity(std::string("cherno"));
    printentity(Entity("Chernoooo"));  

    Entity c = 20; //Doesn't work when explicit is mentioned in line 18
    // Entity c(22); 
    // Entity c = (Entity)20; //Explicitly cast into entity is explicit is mentioned 
}       