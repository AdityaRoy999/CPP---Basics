#include <iostream>
using namespace std;

int main()
{
     // fill() -  fill the range of the function with a specified value 
     //           fill(begin,end,value)
     int size = 100;
     string foods[size];
     //fill(foods, foods + 100, "pizza");
     fill(foods, foods + (size/2), "pizza");
     fill(foods + (size/2), foods , "burger");


     for(string food: foods)
     {
        cout<<food;
     }
     return 0;
}