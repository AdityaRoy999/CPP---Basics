#include <iostream>
using namespace std;

int main()
{
        //for each loop - loop that eases the traversal over an iterable data set 
        string students[] = {"Aditya","Shambhavi","Malishka","Vanya"};
        for(string student:students)
        {
            cout<<student<<endl;
        }
        return 0;
}