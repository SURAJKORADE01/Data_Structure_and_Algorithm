/*
    Minimum element
    
    Example 1:
    Input Format: Arr = [4,5,6,7,0,1,2,3]
    Result: 0
    Explanation: Here, the element 0 is the minimum element in the array.

*/

#include<iostream>
using namespace std;

int minimumElement(int Arr[], int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;
    int iMin = INT8_MAX;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iStart] <= Arr[iMid])
        {
            iMin = min(iMin,Arr[iStart]);
            iStart = iMid + 1;
        }

        else
        {
            iMin = min(iMin,Arr[iMid]);
            iEnd = iMid - 1;
        }
    }

    return iMin;
}

int main()
{
    int Arr[] = {4,5,6,7,0,1,2,3};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);
    int iRet = 0;

    iRet = minimumElement(Arr,iSize);
    cout<<"Minimum element from rotated sorted array is : "<<iRet<<"\n";

    return 0;
}