#include <iostream>
using namespace std;

int main()
{

    //pseudo-random = NOT TRULY RANDOM BUT CLOSE
    srand(time(NULL));

    int num = rand();
    int num2 = (rand() % 6) + 1; //generate the range of random numbers till 6
    cout<<num<<endl;
    cout<<num2;
    return 0;

}