// Accept number from user and accept two positions from user and check whether that bits are ON or OFF

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool ChkBit(int iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult = 0;

    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        cout<<"Invalid Position"<<"\n";
        return false;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult = (iMask1 | iMask2) & iNo;

    if(iResult == (iMask1 | iMask2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iBit1 = 0;
    UINT iBit2 = 0;
    bool bRet = false;

    cout<<"Enter the number :";
    cin>>iValue;

    cout<<"Enter the first bit position :";
    cin>>iBit1;

    cout<<"Enter the second bit position :";
    cin>>iBit2;

    bRet = ChkBit(iValue,iBit1,iBit2);

    if(bRet == true)
    {
        cout<<"Bit is ON"<<"\n";
    }
    else
    {
        cout<<"Bit is OFF"<<"\n";
    }

    return 0;
}