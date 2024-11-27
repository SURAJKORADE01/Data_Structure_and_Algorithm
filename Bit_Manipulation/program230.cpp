// Accept the number from user and convert it into Hexadecimal 

#include<iostream>
using namespace std;

void DisplayHexadecimal(int iNo)
{
    int iDigit = 0;
    char Arr[] = {'A','B','C','D','E','F'};

    cout<<"Hexadecimal conversion of "<<iNo<<" is :";

    while(iNo != 0)
    {
        iDigit = iNo % 16;
        if(iDigit <= 9)
        {
            cout<<iDigit;
        }
        else
        {
            cout<<Arr[iDigit - 10];     // 10 - 10 => A
        }

        iNo = iNo / 16;
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number :";
    cin>>iValue;

    DisplayHexadecimal(iValue);

    return 0;
}