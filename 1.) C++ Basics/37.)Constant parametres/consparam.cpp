#include <iostream>
using namespace std;


void printInfo(const string name,const int age);
int main()
{
    string name = "Aditya";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void printInfo(const string name, const int age)
{
    cout<<name<<"\n";
    cout<<age;
}



//const pramater make the function more secure by making the arguments in it read only that you can not modify the original value if you have used const keyword , it conveys intent useful for references and pointers.