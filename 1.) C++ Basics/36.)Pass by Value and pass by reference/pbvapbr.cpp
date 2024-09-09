#include <iostream>
using namespace std;




string swap(string &a, string &b);
int main()
{
    string x = "Kool-Aid";
    string y = "Water";
    swap(x, y);

    cout<<"x: "<<x<<"\n";
    cout<<"y: "<<y<<"\n";
    return 0;
}

string swap(string &a, string &b)
{
    string temp;
    temp = a;
    a=b;
    b=temp;
    return a,b;

}


//pass by value = we are passing it by the value that means we are making copy of the varibles , the memory address will remain probably the same.

//pass by reference = we use the symbol & before the variable name to indicate that the variables are operated in different memory address .