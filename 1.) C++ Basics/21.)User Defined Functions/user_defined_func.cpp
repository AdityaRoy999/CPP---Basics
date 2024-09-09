#include <iostream>
using namespace std;

// to declare a function after the main function first you need to declare the function before the main function then only you can use it.
void happybirthday(string name, int age)
{
    cout<<"Happy Birthday! To "<<name<<endl;
    cout<<"Your are now "<<age<<" Years Old!!"<<endl;
}
int main()
{

    //a block of reusable code is known as function 
    string name;
    int age;
    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<"Enter your age: ";
    cin>>age;
    happybirthday(name, age);
    return 0;
}