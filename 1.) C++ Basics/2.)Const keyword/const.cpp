#include <iostream>
using namespace std;

int main()
{
    const int n1 = 34;
    //n1 = 56;  on doing this you will get a error constant the value of the data constant so it is not mutable
    cout<<n1;
    return 0;
}