//Dynamic memory = Memory that is allocated after the program is already compiled & running use the 'new' operator to allocate memory in the heap rather than the stack

//useful when we don't know how much memory we will need. Makes our program more flexible, escpecially when accepting user input.

#include <iostream>
using namespace std;

int main()
{
    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    cout<<"Address: "<<pNum<<"\n";
    cout<<"value: "<<*pNum<<'\n';

    delete pNum;

    return 0;
}