// Accept number from user and Accpet position from user and Toggle that position's bit of that number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X0000001;
    UINT iResult = 0;
    
    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    UINT iBit = 0;

    cout<<"Enter the number :";
    cin>>iValue;

    cout<<"Enter the position :";
    cin>>iBit;

    iRet = ToggleBit(iValue,iBit);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}