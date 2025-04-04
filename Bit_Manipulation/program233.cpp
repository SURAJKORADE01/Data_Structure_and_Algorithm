// Accept number from user and check whether 3rd bit is on or off
// unsigned => 32 bit use karta yavya manun
#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 4;
    
    UINT iResult = 0;

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
    bool bRet = false;

    cout<<"Enter the number :";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"3rd Bit is ON"<<"\n";
    }
    else
    {
        cout<<"3rd bit is OFF"<<"\n";
    }

    return 0;
}