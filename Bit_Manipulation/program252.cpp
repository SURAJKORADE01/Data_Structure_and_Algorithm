// Accept number from user and Accept position from user and OFF that bit from that position without checking

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X0000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iMask = ~iMask;

    iResult = iNo & iMask;

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

    iRet = OffBit(iValue,iBit);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}