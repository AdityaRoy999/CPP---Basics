#include <iostream>
using namespace std;


//switch = alternative to using many "else if" statements compare one value against matching cases
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    switch (n)
    {
    case 1:
    cout<<"You have choosen 1";
    break;
    case 2:
    cout<<"You have choosen 2";
    break;
    case 3:
    cout<<"Your have choosen 3";
    break;
    default:
    break;
    }
    return 0;
}