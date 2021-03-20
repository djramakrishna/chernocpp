//Pointer is an integer that holds a memory address that specifies the address of a specific byte of memory is 
//Everything in programming is read and write into memory 
//We can use a type of pointer, means that data at that address is presumed to be the type we give it, (pointer is just an integer)

#include <iostream>

int main()
{
    int var = 8;
    void* ptr = &var;
    std::cout << ptr << std::endl;
    //void* ptr = nullptr;
    //void* ptr = NULL;
    
    char* buffer = new char[8];
    memset(buffer, 0, 8); 
    
    delete[] buffer;

}