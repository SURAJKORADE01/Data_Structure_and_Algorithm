// Check Whether number is a power of 2 or NOT

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT PowerofTwo(UINT iNo)
{
    if((iNo & iNo - 1) == 0)
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

    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = PowerofTwo(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is a Power of 2";
    }

    else
    {
        cout<<iValue<<" is NOT a Power of 2";
    }

    return 0;
}