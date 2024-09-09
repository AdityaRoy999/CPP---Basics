#include <iostream>
using namespace std;


int searcharray(int array[], int size, int element);
int main()
{
    int number[] = {1,2,3,4,5,6,7};
    int size = sizeof(number)/sizeof(number[0]);
    int index;
    int myNum;

    cout<<"Enter the element to seach for: "<<"\n";
    cin>>myNum;
    index = searcharray(number, size, myNum);
    if(index != -1)
    {
        cout<<myNum<<" is at index: "<<index;
    } 
    else
    {
        cout<<myNum<<"is not in an array"<<index;
    }

    return 0;

}
int searcharray(int array[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if (element == array[i])
        {
            return i;

        } 

    }
    return -1;   //something wasn't found

}
