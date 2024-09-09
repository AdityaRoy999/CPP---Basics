#include <iostream>
using namespace std;

/*do while loop = do some block of code first,
THEN repeat again if condition is true*/
int main()
{
    int num;
    do
    {
        cout<<"Enter a positive number: ";
        cin>>num;
    }while (num < 0);

    cout<<"The number is: "<<num;
    return 0;

} // namespace std;

