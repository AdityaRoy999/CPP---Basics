#include <iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter your name: ";

    //cin>>name;
    getline(cin, name); //by using this you can also insert spaces
    cout<<name;
}