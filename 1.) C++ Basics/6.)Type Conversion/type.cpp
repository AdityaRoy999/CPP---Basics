#include <iostream>
using namespace std;

int main()
{
    //implicit type conversion -- automatic 
    int x = 3.14;
    cout<<x<<endl;

    char x1 = 100;
    cout<<x1<<endl;

    //explicit type conversion -- precede value with the new data type (int)
    double y = (int)3.14;
    cout<<y<<endl;

    char y1 = (char)100;
    cout<<y1<<endl;


}