// Check if a number is odd or not

#include<iostream>
using namespace std;

int CheckEvenOdd(int iNo)
{
    int iMask = 0X00000001;
    int iResult = 0;

    iResult = iMask | iNo;

    if(iResult == iNo)
    {
        return false;
    }

    else
    {
        return true;
    }   
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        cout<<"It is Even number"<<"\n";
    }

    else
    {
        cout<<"It is Odd number"<<"\n";
    }

    return 0;
}