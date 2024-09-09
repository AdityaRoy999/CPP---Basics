#include <iostream>
using namespace std;


/*&& = check if two conditions are true
    || = check if at least one of two conditions is true
    ! = reverses the logical state of its operand*/
int main()
{
    int temp;
    bool value = false;
    cout<<"Enter the temparature: "<<endl;
    cin>>temp;

    if (temp > 0  && temp <= 30)
    {
        cout<<"It is cold outside "<<endl;
    }
    else if(temp > 30 || temp <= 60)
    {
        cout<<"It is warm outside"<<endl;
    }
    
    if(!value)
    {
        cout<<"It will be printing True"<<endl;
    }
    else{
        cout<<"It will be printing False"<<endl;
    }
    return 0;

}