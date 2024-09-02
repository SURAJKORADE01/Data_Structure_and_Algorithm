// Finding Sqrt of a number using Binary Search
/*
    Example 1:
    Input Format:
    n = 36
    Result:
    6
    Explanation:
    6 is the square root of 36.
*/

#include<bits/stdc++.h>
using namespace std;

float findSquareRootMethod1(int iNo)
{
    float fAns = 0.0f;

    for(long long fCnt = 1; fCnt <= iNo/2; fCnt++)
    {
        long long fValue = fCnt * fCnt;
        
        if(fValue <= iNo)
        {
            fAns = fCnt;
        }

        else
        {
            break;
        }

    }

    return float(iNo / fAns);
}

// Inbuilt method -> O(log N)
float findSquareRoot(int iNo)
{
    float fAns = sqrt(iNo);
    return fAns;
}

float findSquareRootMethod2(int iNo)
{
    int iLow = 1;
    int iHigh = iNo;

    while(iLow <= iHigh)
    {
        long long iMid = iLow + (iHigh - iLow) / 2;
        long long val = iMid * iMid;

        if(val <= (long long)(iNo))
        {
            iLow = iMid + 1;
        }

        else
        {
            iHigh = iMid - 1;
        }
    }

    return iHigh;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;
        
    cout<<"Enter the number : ";
    cin>>iValue;

    fRet = findSquareRootMethod2(iValue);
    cout<<"The square root is : "<<fRet<<"\n";

    return 0;
}