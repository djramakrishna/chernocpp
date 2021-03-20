#include <iostream>

//the main diff between primitive data types is the memory taken by them
// 1 byte = 8 bits of data

int main()
{
    //4 bytes of data as it's unsigned int 
    //32 bits and one of those 32 bits is used to store the sign of the int
    //unsigned int is always positive 
    int var = 0;                        
    std::cout << var << std::endl;

    // char - 1 byte
    // short - 2 byte
    // long - 4 byte
    // float - 4 byte
    // double - 8 byte
    // long long - 8byte
    // Both float and double can be used to store deciman numbers 

    char a = 'A';
    std::cout << a << std::endl; //when char is passed into cout its treated as character

    short n = 65;
    short n2 = 'a';
    std::cout << n << std::endl; 
    std::cout << n2 << std::endl;

    float var2 = 5.5; //though looks like a float its double
    std::cout << var2 << std::endl;

    double var3 = 5.3;
    std::cout << var3 << std::endl;

    bool variable = true;
    std::cout << variable << std::endl;

    // though bool takes 1 bit of memory to store, however while addressing the memory, we cannot address individual bits
    // we can address only bytes

    //sizeof is used to know the size of the data type
    std::cout << "Bool is " << sizeof(variable) << " bytes" << std::endl;
}   