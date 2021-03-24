#include <iostream>
#include <string>

class example
{
public:
    example()
    {
        std::cout << "Created entity !" << std::endl;
    }
    example(int x)
    {
        std::cout << "Created entity with " << x << std::endl;
    }
};

class Entity
{ 
private:
    std::string m_Name;
    int m_Score;
    int x, y, z;
    example m_example; //Entity is created once with default constructor
public:
    // Entity()
    // {
    //     m_Name = "unknown";
    // }

    // Member initializer list. List all the members in order the class members are defined 
    // Entity() : m_Name("Unknown"), m_Score(0), x(1), y(2), z(3)
    // {  

    // }

    Entity ()
        //:m_example(example(8)) //This way only one entity is created instead of two
        :m_example(8) 
    {
        m_Name = std::string("unknown");
        //m_example = example(8); //Entity is created once with constructor that takes in an integer // so basically two objects are created 
    }
    // Entity(const std::string& name)
    // {
    //     m_Name = name;
    // }

    Entity(const std::string& name) : m_Name(name)
    {

    }

    const std::string& GetName() const { return m_Name; }
};

int main()
{
    // Entity e0;
    // std::cout << e0.GetName() << std::endl;

    // Entity e1("Cherno");
    // std::cout << e1.GetName() << std::endl;
    Entity e;

}