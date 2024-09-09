#include <iostream>
using namespace std;


void pizza()
{
    cout<<"Here is your pizza!"<<endl;
}
void pizza(string topping1)
{
    cout<<"Here is your "<<topping1<<" pizza"<<endl;
}
void pizza(string topping1,string topping2)
{
    cout<<"Here is your "<<topping1<<" and "<<topping2<<" pizza"<<endl;
}
int main()
{
    pizza("peporoni");
    pizza("Peporoni","Mushroom");
    return 0;
}