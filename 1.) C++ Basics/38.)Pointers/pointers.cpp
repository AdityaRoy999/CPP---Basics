// pointers = a veriable that stores a memory address of another variable sometimes it's easier to work with an address
// & address of operator 
// * deference operator


#include <iostream>
using namespace std;


int main()
{
    string name = "Aditya";

    string *pname = &name;
    cout<<pname<<"\n"; //address
    cout<<*pname;      //prints out the name
    return 0;
}