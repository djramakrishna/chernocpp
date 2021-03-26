#include <iostream>
#include <string>
#include <cstring>

struct vector2
{
    float x, y;
};

class String
{
private :
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];  // +1 for null termination character
        std::memcpy(m_Buffer, string, m_Size); //Copies the string into m_Buffer
        m_Buffer[m_Size] = 0;
    }

    // Copy constructor
    // String(const String& other)
    //     :m_Buffer(other.m_Buffer), m_Size(other.m_Size);
    // {
    //     //Can be done in the below way aswell as
    //     // memcpy(this, &other, sizeof(String));
    // }
        // Copy constructor
    String(const String& other)
        : m_Size(other.m_Size)
    {
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    ~String()
    {
        delete[] m_Buffer;
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}

int main()
{
    vector2* a = new vector2();
    vector2* b = a;
    b++;

    String string = "CHerno";
    std::cout << string << std::endl;

    String second = string; //They have exact char pointer value m_Buffer when copying, and deletes the memory allocated first and tries to delete it second time 
    std::cout << second << std::endl;
    
    second[2] = 'a';

    std::cout << string << std::endl;
    std::cout << second << std::endl;

    // We want the second string to have its own pointer, so that it doesnt effect fisrt string
    // Can be done by using deepcopy, going to copy the object in it's entirety
}