//Virtual functions allow us to override methods in subclasses  

#include <iostream>
#include <string>

//Base class 
class Entity
{
public:
    std::string GetName() { return "Entity"; }
};

//Sub class of entity class
class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name) {}

    std::string GetName() { return m_Name; }
};


int main()
 {
    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("Cherno");
    std::cout << p->GetName() << std::endl;
     
}
