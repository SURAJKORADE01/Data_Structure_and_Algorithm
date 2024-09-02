/*
    Peak element in Array

    Example 1:
    Input Format: arr[] = {1,2,3,4,5,6,7,8,5,1}
    Result: 7
    Explanation: In this example, there is only 1 peak that is at index 7.

    Example 2:
    Input Format: arr[] = {1,2,1,3,5,6,4}
    Result: 1
    Explanation: In this example, there are 2 peak numbers that are at indices 1 and 5. We can consider any of them.
*/

#include<iostream>
using namespace std;

int findPeekElement(int Arr[], int iSize)
{
    int iIndex = -1;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((iCnt == 0 || Arr[iCnt] > Arr[iCnt - 1]) && (Arr[iCnt] > Arr[iCnt + 1] || iCnt == iSize - 1))
        {
            iIndex = iCnt;
        }
    }

    return iIndex;
}

int main()
{
    int Arr[] = {1,2,1,3,5,6,4};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);
    int iRet = 0;

    iRet = findPeekElement(Arr,iSize);
    cout<<"Peek element is found at index : "<<iRet<<"\n";

    return 0;
}