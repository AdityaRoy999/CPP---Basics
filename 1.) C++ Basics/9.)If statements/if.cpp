#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age < 0)
    {
        cout<<"You are not born yet!"<<endl;
    }
    else if (age > 0 and age <= 12)
    {
        cout<<"You are a child"<<endl;
    }
    else if (age > 12 and age <= 18)
    {
        cout<<"You are a tennager"<<endl;
    }
    else if (age > 18)
    {
        cout<<"You are a adult"<<endl;
    }
    return 0;
}
