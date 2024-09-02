// Print 1 to N time name using Recursion

#include<iostream>
using namespace std;

void Display(char Arr[],int iNo)
{
    if(iNo >= 1)
    {
        cout<<Arr<<"\n";
        Display(Arr,iNo - 1);
    }
}

int main()
{
    char Arr[20];
    int iValue = 0;

    cout<<"Enter the name that you want to print : ";
    cin>>Arr;

    cout<<"Enter the number of times you want to print the name : ";
    cin>>iValue;

    Display(Arr,iValue);

    return 0;
}