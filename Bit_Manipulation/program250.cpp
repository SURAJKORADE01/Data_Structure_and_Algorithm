// Accept number from user and Accept position and OFF that bit
// On la OFF kela aani OFF la OFF thevla without checking

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0XFFFFFFBF;

    return (iNo & iMask);
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