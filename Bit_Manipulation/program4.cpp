// Check whether i_th bit is set or not

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool checkBitSet(UINT iNo, UINT iPos)
{
    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position\n";
        return false;
    }

    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iMask & iNo;

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

    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"Enter the bit position : ";
    cin>>iBit;

    bRet = checkBitSet(iValue,iBit);

    if(bRet == true)
    {
        cout<<iBit<<" bit is Set";
    }

    else
    {
        cout<<iBit<<" bit is NOT Set";
    }

    return 0;
}