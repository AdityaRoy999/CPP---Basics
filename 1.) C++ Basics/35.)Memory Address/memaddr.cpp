#include <iostream>
using namespace std;

int main()
{
      //memory address = a location in memory where data is stored 
      //a memory address can accessed with & (address-of-operator)

      string name = "Aditya";
      int age = 21;
      bool student = true;

      cout<<&name<<"\n"<<&age<<"\n"<<&student;
      return 0;
}