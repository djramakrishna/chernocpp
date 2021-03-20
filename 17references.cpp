//Ref have to reference an already existing variables, they are not new variables, dont occupy memory
//Once the ref are declared and assigned, they cannot be changed 
//pointers can be set to null, but not reference 

#include <iostream>

void Increment(int* value)
{
	(*value)++;
}

void Increment2(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	int* b = &a;
	//& is part of int
	int& ref = a;
	ref = 2;
	std::cout << a << std::endl;
	std::cout << ref << std::endl;

	int c = 7;
	Increment(&c);
	std::cout << c << std::endl;

	int d = 10;
	Increment2(d);
	std::cout << d << std::endl;
}