// Stack obj have automatic lifespan, when that scope ends anything in that stack frame gets freed 
// Heap obj doesnt end the lifespan, unless you specify to 

#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
    String m_Name;
public:
    Entity() : m_Name("Unknown"){}
    Entity(const String& name) : m_Name(name) {}
    const String& GetName() const {return m_Name;}
};

void Function()
{
    int a = 2;
    Entity myentity("cherno");
    //By doing this as soon as we are out of the scope of the function the memory is cleared 
}

int main()
{   
    // Following two are the most managed way in cpp to instantiate the objects
    Entity entity;
    std::cout << entity.GetName() << std::endl;

    Entity entity2("cherno"); //Same as Entity entity2 = Entity("cherno")
    std::cout << entity2.GetName() << std::endl;

    Function();

    Entity* e;
    Entity* e1;
    {
        Entity local("local cherno");
        e = &local;
        std::cout << local.GetName() << std::endl;
        //Once the scope of this bracket end, e ptr might points to someother thing
        //To do the same but to allocate it heap heres the way to do it in next few lines  

        Entity* newlocal = new Entity("new cherno"); //Allocates memory on the heap
        e1 = newlocal;
        std::cout << newlocal->GetName() << std::endl;
        delete newlocal;
    }
}