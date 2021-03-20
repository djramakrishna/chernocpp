#include <iostream>
#pragma once //means a header gaurds
// headers gaurd makes sure that a fucntion signature is present only once in a file, rather than getting multiple times due to the header files which might contain
//the same function signature 

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    Log("Hello world !");
}


/*

//write function declaration here

void Log(const char* message); // says the function is there somewhere else its called a function signature

All these function signatures can be included in a header file

void InitLog()
{
    Log("Initializing log");
}

*/