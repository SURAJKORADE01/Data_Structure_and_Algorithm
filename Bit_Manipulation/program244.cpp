// Accept number from user and OFF 7th bit of that number
// Bit band keli tr updated number haa chota yeto

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

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

    cout<<"Enter the number :";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}