    //Null Value = a special value that contains no value. when a pointer is holding a null vaue, that pointer is not pointing at anything(null pointer)

    //nullptr = keyword represents a null pointer literal

    //nullptrs are helpful when determining if an address was succesfully assigned to a pointer 



#include <iostream>
using namespace std;


int main()
{
    int *pointer = nullptr;
    int x = 123;
    //pointer = &x;

    if (pointer == nullptr)
    {
        cout<<"address was not assigned"<<"\n";
    }
    else
    {
        cout<<"address was assigned"<<"\n";
        
    }

    return 0;
}