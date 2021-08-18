// reference have to reference an already existing variables, but pointers can be created and set to nullptr
// they are not new variables, dont occupy memory and don't have any storage
// once the ref are declared and assigned, they cannot be changed 
// pointers can be set to null, but not reference 
// they just make code look better, and with pointers you can do a lot more compared to references. 
// pointers and references are pretty much the same thing, wrt what the computer does with them, but how we write them varies
// kinda like sytax sugar to make life easier


#include <iostream>

void Increment(int* value)
{
	(*value)++;
}

void Increment2(int& value)
{
	value++;		// as a ref is passed we don't need to deref the value
}

int main()
{
	int a = 5;
	int* b = &a;	// & is part of of the type(int)
	int& ref = a; 	// essentially creating a alias, if compiled we dont have two variables only a exists not ref
	ref = 2;
	std::cout << a << std::endl;
	std::cout << ref << std::endl;

	int c = 7;
	Increment(&c);
	std::cout << c << std::endl;

	int d = 10;
	Increment2(d);
	std::cout << d << std::endl;

	int i = 5;
	int j = 9;

	int& ref2 = i;
	ref2 = j;
	std::cout << i << " " << j << std::endl;  	// when u change the ref that it points to it changes the variable value itself i.e j = i 

}
