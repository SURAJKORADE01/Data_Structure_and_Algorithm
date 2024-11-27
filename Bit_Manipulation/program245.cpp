// Accept number from user and OFF 7th bit of that number
// Bit band keli tr updated number haa chota yeto

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X0000001;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid Input";
        return 0;
    }

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)    //Bit is ON
    {
        return (iNo ^ iMask);
    }
    else                    //Bit is OFF
    {
        return iNo;
    }
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