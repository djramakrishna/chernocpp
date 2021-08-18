//Pointer is an integer or a number or integer that holds a memory address that specifies address of specific byte of memory is 
//Everything in programming is read and write into memory 
//We can use a type of pointer, means that data at that address is presumed to be the type we give it, (pointer is just an integer)
//Types are meaningless, a pointer for all types is just a memory address 
//Type of a pointer is just to make our life simpler, saying the data at that address is presumed to be the type we give it

// Pointers themselves are just variables, these variables also can be stored in memory, this leads to double pointer

#include <iostream>
#include <cstring>

int main()
{
    int var = 8;
    std::cout << "HELLO" << std::endl;
    int* ptr = &var;
    //void* ptr = &var;   // void pointer just means we don't care what the data type is at the moment
    std::cout << ptr << std::endl;
    //*ptr = 10; //dereferecing the pointer and setting the values to 10 
    //above gives error as ptr is declared as a void pointer, so we need to declare it as a int* ptr 

    //void* ptr = nullptr; // Added on c++ 11, just means # define nullptr 0
    //void* ptr = NULL; // Just means #define NULL 0
    
    char* buffer = new char[8]; // new char of size 8 created on heap memory i.e, 8 bytes of memory (a char has 1byte of memory)
    memset(buffer, 0, 8);  // memset fills the block of memory specified memset(dest., value, size) here 8 bytes and 0 value   
    
    char** ptr2 = &buffer;
    delete[] buffer; 

    int* a = new int;
    memset(a, 1, 1); 
    int** ptr3 = &a;
    std::cout << ptr3 << " " << *ptr3 << " " << **ptr3 << std::endl;
    std::cout << "ENDED" << std::endl;
}