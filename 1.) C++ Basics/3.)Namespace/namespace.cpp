#include <iostream>
using namespace std;
namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}

int main()
{
    int x = 0;
    cout<<x<<endl; //prints 0
    cout<<first::x<<endl; //prints 1 :: is known as scope resolution operator 
    cout<<second::x<<endl;
    return 0;
}
//name space    provides a solution for preventing name conflicts
//in large projects. Each entity needs a unique name.
//A namespace allows for identically named entities
//as long as the namespaces are different.