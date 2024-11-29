// Find xor of numbers from L to R

// iValue = 4
// iResult = 4 ^ 3 ^ 2 ^ 1

#include<iostream>
using namespace std;

int FindXOR(int iNo)
{
    int iResult = 0;

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iResult = iResult ^ iCnt;
    }

    return iResult;
}

int FindXOR_II(int iNo)
{
    if(iNo % 4 == 1)
    {
        return 1;
    }

    else if(iNo % 4 == 2)
    {
        return iNo + 1;
    }

    else if(iNo % 4 == 3)
    {
        return 0;
    }

    else
    {
        return iNo;
    }
}

int FindXORToRange(int iStart, int iEnd)
{
    int iResult = 0;

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iResult = iResult ^ iCnt;
    }

    return iResult;
}

int FindXORToRange_ApproachII(int iStart, int iEnd)
{
    
}

int main()
{
    int iValue = 0;
    int iStart = 0;
    int iEnd = 0;
    int iRet = 0;

    // cout<<"Enter the number : ";
    // cin>>iValue;

    // iRet = FindXOR_II(iValue);
    // cout<<"Result is : "<<iRet<<"\n";

    cout<<"Enter the starting number : ";
    cin>>iStart;

    cout<<"Enter the ending number : ";
    cin>>iEnd;

    iRet = FindXORToRange(iStart,iEnd);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}