// Accept number from user and accept position and check whether that positions bit is on or off

#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0X00000001;        //Rightmost bit 0 keli => Atleast konti tari 1 aasavi manun
    UINT iResult = 0;

    if((iPos < 1) || (iPos < 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }

    iMask = iMask << (iPos - 1);    

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    UINT iBit = 0;
    bool bRet = false;

    cout<<"Enter the number :";
    cin>>iValue;

    cout<<"Enter the bit position (Range shouls be 1 to 32):";
    cin>>iBit;

    bRet = CheckBit(iValue,iBit);

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

/*
0000    0000    0000    0000    0000    0000    0000    0000

iPos = 7
iMask = 0X00000001

iMask = 
*/