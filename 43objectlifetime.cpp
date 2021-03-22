#include <iostream>
#include <string>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created entity !" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroyed entity !" << std::endl;
    }
};

int* createarray()
{
    int arr[50]; // Declared on the stack
    //int* arr = new int[50]; allocates it on the heap so that its memory stays around 
    return arr;  
    // When you return the ptr to that, it's returning the ptr to the stack memory 
    // So you cannot expect this to return a pointer to the array created as it gets freed
}

class scopedptr
{
private:
    Entity* m_Ptr;
public:
    scopedptr(Entity* ptr)
        :m_Ptr(ptr)
    {

    }
    ~scopedptr()
    {
        delete m_Ptr;
    }
};

int main()
{
    {
        Entity* e = new Entity(); //Does a heap allocation but does not gets deleted after we are out of the scope of main
        //Entity e;  this does a stack allocation and gets deleted after we are out of teh scope of main 

    }
    // Stack based variable gets destroyed as soon as we go out of the scope

    //Heap allocated the pointer upon construction and deletes it upon the destruction

    {
        scopedptr e = new Entity();
    }

}