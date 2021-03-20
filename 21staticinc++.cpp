// static keyword is used in two context

// 1 - static variable outside of a class or struct - means the linkage of that symbol is going to be internal, 
// i.e, it's only going to be visible to that translation unit
// The linker doesnt look outside of the scope of the translational unit for those variables or functions 

// 2 - static variable inside a class or struct - this variable is going to share memory with all the instances of the class or struct 
// i.e, in all of the instances of the class or struct there is going to be only one instance of that variable

static int s_Variable = 5;
int s;

//If u need to use this another file
extern int s; //it looks for s variable in an external translational unit
 
 