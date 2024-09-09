#include <iostream>
using namespace std;


int myNum = 3; //global version of myNum
void printNum();
int main()
{
    
    //local variables = declared inside a function or block {}
    //Global variables = declared outside of all functions
    int myNum = 1; //Local Version of myNum
    cout<<myNum<<endl;
    cout<<::myNum<<endl;   //:: is known as scope operator
    printNum();

    return 0;
    
    
}
void printNum()
{
    int myNum = 2;
    cout<<myNum;
}