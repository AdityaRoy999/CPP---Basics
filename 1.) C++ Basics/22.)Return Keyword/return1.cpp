#include <iostream>
using namespace std;

string concatstrings(string string1, string string2)
{
    return string1 + string2;
}
int main()
{
    string firstname = "aditya";
    string lastname = "roy";
    string full_name = concatstrings(firstname, lastname);
    cout<<"Your full name is: "<<full_name;
    return 0;
}