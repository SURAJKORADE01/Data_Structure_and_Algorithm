// Toggle the ith bit

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int ToggleBit(UINT iNo, UINT iPos)
{
    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position\n";
        return -1;
    }

    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    return iMask ^ iNo;
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

    iRet = ToggleBit(iValue,iBit);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}