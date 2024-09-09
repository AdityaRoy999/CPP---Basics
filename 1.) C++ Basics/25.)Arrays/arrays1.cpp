#include <iostream>
using namespace std;

int main()
{
    string s = "Aditya";
    int len = s.size();
    cout<<s[len-1]<<endl; //prints the last character
    s[len-1] = 'A';
    cout<<s;
    return 0;

}