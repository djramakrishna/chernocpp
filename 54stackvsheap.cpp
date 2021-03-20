//Stack, Heap - areas of memory in the RAM
//Stack - predefined size : 2megabytes  &   Heap - predefined size but can change as app goes on
  
//- to be clear, each program/process on our computer has its own stack/heap
//- each thread will create its own stack when it gets created, whereas the heap is shared amongst all threads

// new keyword calls a function called malloc(memory allocate) - allocated memory on heap

// Allocating mem on stack is just 1 CPU instruction as it keeps on moving the pointer in a line
// Allocating mem on heap is different, as it's not continous 

#include <iostream>
#include <string>

struct Vector3 {
    float x, y, z;
    Vector3()
        : x(10), y(11), z(12)
};

int main()
{   
    //Once the scope in which allocated stack memory allocated ends
    //all the memory in the stack allocated pops off automatically

    //On stack
    int value = 5; 
    int array[5];
    Vector3 vector;
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    //On heap
    int* hvalue = new int; 
    *hvalue = 5;
    int* harrray = new int[5];
    harrray[0] = 1;
    harrray[1] = 2;
    harrray[2] = 3;
    harrray[3] = 4;
    harrray[4] = 5;
    Vector3* hvector = new Vector3();

    //delete memory allocated, manually free the memory 
    delete hvalue;
    delete[] harray;
    delete hvector;
}