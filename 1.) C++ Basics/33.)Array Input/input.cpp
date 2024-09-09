#include <iostream>
using namespace std;

int main()
{
    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    string temp;

    for(int i = 0; i < size; i++)
    {
        cout<<"Enter the food you like "<<i<<":";
        getline(cin, temp);
        if(temp == "q")
        {
            break;

        }
        else
        {
            foods[i] = temp;
        }
    }
    for(int i = 0; !foods[i].empty(); i++)
    {
        cout<<foods[i]<<"\n";
    }


    return 0;
}