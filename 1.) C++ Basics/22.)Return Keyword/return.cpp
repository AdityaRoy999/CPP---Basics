#include <iostream>
using namespace std;

double square(double length)
{
    double result = length * length;
    return result;
}

double cube(double length)
{
    double volume = length * length * length;
    return volume;
}
int main()
{
    double length = 5.0;
    double area = square(length);
    double volume = cube(length); 
    cout<<"Area: "<<area<<endl;
    cout<<"Volume: "<<volume<<endl;

    //return a value back to the spot when you called the encompassing funciton
    return 0;
}
