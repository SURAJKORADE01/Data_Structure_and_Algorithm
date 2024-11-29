// Remove the last set bit

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int RemoveLastSetBit(UINT iNo)
{
    return (iNo & iNo-1);
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = RemoveLastSetBit(iValue);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}