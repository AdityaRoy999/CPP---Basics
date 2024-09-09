#include <iostream>
using namespace std;

//ternary operator ?: = replacement to an if/else statement condition ? expression1 : expression2;
int main()
{
    int grade = 60;
    bool hungry = true;
    /*if(grade >= 60)
    {
        cout<<"pass";
    }
    else
    {
        cout<<"Fail";
    }*/

    //grade >= 60 ? cout<<"Pass"<<endl: cout<<"Fail"<<endl;
    cout<<(grade >= 60 ? "Pass":"Fail")<<endl;
    //hungry ? cout<<"I am hungry"<<endl:cout<<"I am not hungry"<<endl;
    cout<<( hungry ? "I am hungry": " I am not hungry");
    return 0;

    
} 
