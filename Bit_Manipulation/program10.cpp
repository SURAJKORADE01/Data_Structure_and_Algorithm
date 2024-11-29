// Count the number of set bits

#include<iostream>
using namespace std;

int CountSetBits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;

        if(iDigit == 1)
        {
            iCount++;
        }

        iNo = iNo / 2;
    }

    return iCount;
}

int CountSetBitsBetter(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iNo = iNo & (iNo - 1);
        iCount++;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = CountSetBitsBetter(iValue);
    cout<<"Number of set bits are : "<<iRet<<"\n";

    return 0;
}