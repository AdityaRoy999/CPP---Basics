#include <iostream>
using namespace std;

double getTotal(double pricessss[], int sizeee);
int main()
{
    double prices[] = {49.99, 15.04, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    cout<<"$"<<total;

}

double getTotal(double pricessss[], int sizeee)
{
    double total = 0;
    for(int i = 0; i < sizeee; i++)
    {
        total += pricessss[i];
    }
    return total;

}