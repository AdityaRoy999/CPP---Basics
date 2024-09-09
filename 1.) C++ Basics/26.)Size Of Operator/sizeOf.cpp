#include <iostream>
using namespace std;

int main()
{
    //sizeof - Determines the size in bytes of a:
    //         variable, data type, class, objects, etc.

    double gpa = 9.88;
    string name = "aditya";
    string names[] = {"Aditya","Shambhavi","Krsiti","Malishka"};
    cout<<sizeof(gpa)<<" bytes\n";
    cout<<sizeof(name)<<" bytes\n";
    cout<<sizeof(names)<<"\n";

    //if you want to find the number of elements let's say in names
    cout<<sizeof(names)/sizeof(string)<<" elements";
    return 0;
}