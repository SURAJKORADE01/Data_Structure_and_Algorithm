// Set the ith bit -> convert ith bit to 1

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int SetBit(UINT iNo, UINT iPos)
{
    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position\n";
        return -1;
    }

    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        return iNo;
    }

    else
    {
        return iMask ^ iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"Enter the bit position : ";
    cin>>iBit;

    iRet = SetBit(iValue,iBit);

    if(iRet == iValue)
    {
        cout<<iBit<<" is already SET"<<"\n";
    }

    else
    {
        cout<<"Result is : "<<iRet<<"\n";
    }

    return 0;
}