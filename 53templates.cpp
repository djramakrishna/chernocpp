#include <iostream>
#include <string>

// A bit like macros 
// Template allows you to define a template that will be compiled by your usage, 
// you get compiler writes code for you based on the rules you set 
// Template is evaluated at the compile time 

/*
void print(int value)
{
    std::cout << value << std::endl;
}   

void print(std::string value)
{
    std::cout << value << std::endl;
}
*/

// The function print gets only created when you call it 
// Template doesn't exist unless you call it, get's only created when you call it  

template<typename T> //can also be template<class T>
void print(T value)
{
    std::cout << value << std::endl;
}		


template<typename T, int N>
class Array
{
private:
	T m_Array[N];
	//int m_array[N]; when no typename is given
public:
	int GetSize() const {return N;}
};

int main()
{
    print(5);
    print("hello");
    print(5.0f);

    print<int>(5);
    print<std::string>("Cherno");

	//Array<100> array;
	Array<std::string, 50> array;
	std::cout << array.GetSize() << std::endl;
}