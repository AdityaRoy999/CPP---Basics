#include <iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);

    /*if(name.length() > 12)
    {
        cout<<"Your name cannot have more than 12 characters";
    }*/
    
    /*if(name.empty())
    {
        cout<<"You didn't enter your name";
    }
    else{
        cout<<"Your name is "<<name;
    }*/

    //name.clear() //clears your name

    /*name.append("@gmail.com");
    cout<<"Your email is: "<<name;*/

    //cout<<(name.at(4));

    /*name.insert(3,"inserted text ");
    cout<<name;*/

    //cout<<name.find('a');

    //cout<<name.erase(0,4);

    
    return 0;
}