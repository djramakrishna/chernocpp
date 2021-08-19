// static keyword is used in two context

// 1 - static keyword used  outside of a class or struct - means the linkage of that symbol is going to be static i.e, internal 
// i.e, it's only going to be visible to that translation unit
// The linker doesnt look outside of the scope of the translational unit for those variables or functions 

// 2 - static keyword inside a class or struct - this variable is going to share memory with all the instances of the class or struct 
// static variable inside a class 
// i.e, in all of the instances of the class or struct there is going to be only one instance of that variable

static int s_Variable = 5;      
// this variable is going to be linked only inside this translation unit, liker looks only inside this file
// this is kinda declaring the variable as a private no other translation unit is going to see this, linker will not see this
// if int s_Variable = 5 is done, this variable can be used in other files using extern int s_Variable; external linkage

int s;

//If u need to use this another file
extern int s; //it looks for s variable in an external translational unit
 
 