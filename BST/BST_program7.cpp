// Count Occurrences in Sorted Array

/*
    Input:

    arr[] = {1, 1, 2, 2, 2, 2, 2, 3}, K = 2
    Output : 5
    Explanation: 2 is occurring 5 times in the given array so it is our answer.

*/

#include<iostream>
using namespace std;

// Brute Force Approach :

// int countOccurrence(int Arr[], int iSize, int iFind)
// {
//     int iCount = 0;

//     for(int iCnt = 0; iCnt < iSize; iCnt++)
//     {
//         if(Arr[iCnt] == iFind)
//         {
//             iCount++;
//         }
//     }

//     return iCount;
// }

// Optimal Approach

int findFirstOccurrence(int Arr[], int iSize, int iFind)
{
    int iFirst = -1;

    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iMid] == iFind)
        {
            iFirst = iMid;
            iEnd = iMid - 1;
        }

        else if(Arr[iMid] < iFind)
        {
            iStart = iMid + 1;
        }

        else
        {
            iEnd = iMid - 1;
        }
    }

    return iFirst;
}

int findLastOccurrence(int Arr[], int iSize, int iFind)
{
    int iLast = -1;

    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iMid] == iFind)
        {
            iLast = iMid;
            iStart = iMid + 1;
        }

        else if(Arr[iMid] < iFind)
        {
            iStart = iMid + 1;
        }

        else
        {
            iEnd = iMid - 1;
        }
    }

    return iLast;
}

pair<int,int> firstAndLastOccurrence(int Arr[], int iSize, int iFind)
{
    int iFirst = findFirstOccurrence(Arr, iSize, iFind);
    
    if(iFirst == -1) return {-1,-1};

    int iLast = findLastOccurrence(Arr, iSize, iFind);

    return {iFirst,iLast};
}

int countOccurrence(int Arr[], int iSize, int iFind)
{
    pair<int,int> ans = firstAndLastOccurrence(Arr,iSize,iFind);

    if(ans.first == -1)
    {
        return 0;
    }

    return (ans.second - ans.first + 1);
}

int main()
{
    int Arr[] = {2, 2 , 3 , 3 , 3 , 3 , 4};
    int iSize = sizeof(Arr)/sizeof(Arr[0]);
    int iValue = 0;

    cout<<"Enter the number that you want to find : ";
    cin>>iValue;

    int iRet = countOccurrence(Arr,iSize,iValue);
    cout<<"Occurrence of "<<iValue<<" in array is : "<<iRet<<"\n";

    return 0;
}