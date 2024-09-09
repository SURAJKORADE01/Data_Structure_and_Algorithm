// Sum of subaray minimums

#include<bits/stdc++.h>
using namespace std;

int SumofSubArrayMinimum(int Arr[], int iSize)
{
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        int iMin = Arr[i];
        
        for(int j = i; j < iSize; j++)
        {
            iMin = min(iMin,Arr[j]);
            iSum = iSum + iMin;
        }
    }

    return iSum;
}

int main()
{
    int Arr[] = {3,1,2,4};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);
    int iRet = 0;

    iRet = SumofSubArrayMinimum(Arr,iSize);
    cout<<"Sum of subarray minimum is : "<<iRet<<"\n";

    return 0;
}