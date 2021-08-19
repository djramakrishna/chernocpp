// A static variable or function outside a class means that when it actually comes time to link those actual functions or variables to actually define symbols
// the linker is not going to look outside the scope of this translation unit for that symbol definition 
// So basically its going to be visible for that file only

// Try and mark your functions and your variables static unless you actually need them to be linked across translation units

#include <iostream>

//int s_Variable = 10; lets say this line is in another files

extern int s_Variable; 
// it looks for that variable in external translation unit, this is called external linkage/linking
// but if in that another files if that variable is declared as static then, this extern int s_Variable cannot work 

int main()
{	
    std::cout << s_Variable << std::endl;
}
