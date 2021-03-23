#include <iostream>
#include <string>

// Mutable - something can be changed 
// something is kinda const but can be changed 

class Entity
{
private:
    std::string m_Name;
    mutable int m_DebugCount = 0;
public:
    const std::string& GetName() const
    {   
        m_DebugCount++;
        return m_Name;
    }
};

int main()
{
    const Entity e;
    e.GetName();
    int x = 9;
    auto f = [&]()
    { 
        x++; 
        std::cout << x << std::endl;
    };
    auto f1 = [=]() mutable
    { 
        //x++; cannot modify x if the func is given mutable
        x++;
        std::cout << x << std::endl;
    };

}