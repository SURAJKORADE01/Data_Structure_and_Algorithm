// Last occurrence in a sorted array

#include<bits/stdc++.h>
using namespace std;

// int insertPosition(int Arr[], int iSize, int iSearch)
// {
//     int iIndex = -1;
    
//     for(int iCnt = iSize - 1; iCnt >= 0; iCnt--)
//     {
//         if(Arr[iCnt] == iSearch)
//         {
//             iIndex = iCnt;
//             break;
//         }
//     }

//     return iIndex;
// }

int findLastIndex(int Arr[], int iSize, int iSearch)
{
    int iIndex = -1;
    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;
    
    while(iStart <= iEnd)
    {
        iMid = iStart + (iEnd - iStart) / 2;

        if(Arr[iMid] == iSearch)
        {
            iIndex = iMid;
            iStart = iMid + 1;
        }

        else if(Arr[iMid] < iSearch)
        {
            iStart = iMid + 1;
        }

        else
        {
            iEnd = iMid - 1;
        }
    }

    return iIndex;
}


int main()
{
    int Arr[] = {3,4,13,13,13,20,40};
    int iSize = sizeof(Arr)/sizeof(Arr[0]);
    int iValue = 0, iRet = 0;

    cout<<"Enter the element that you want to search : ";
    cin>>iValue;

    iRet = findLastIndex(Arr,iSize,iValue);
    
    if(iRet == -1)
    {
        cout<<"Element is NOT present in the array\n";
    }

    else
    {
        cout<<"Last occurrence of element is present at index : "<<iRet<<"\n";
    }

    return 0;
}