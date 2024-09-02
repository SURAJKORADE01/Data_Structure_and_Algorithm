// Search in Rotated Sorted Array I -> All unique element

// Example 1:
// Input: Arr = [4,5,6,7,0,1,2,3], k = 0
// Result: 4
// Explanation: Here, the target is 0. We can see that 0 is present in the given rotated sorted array, nums. 
// Thus, we get output as 4, which is the index at which 0 is present in the array.

#include<iostream>
using namespace std;

int searchInRotatedArray(int Arr[], int iSize, int iNo)
{
    int iIndex = -1;

    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iMid] == iNo)
        {
            iIndex = iMid;
            break;
        }

        else if(Arr[iStart] <= Arr[iMid])   // left part is sorted
        {
            if(Arr[iStart] <= iNo && iNo <= Arr[iMid])
            {
                iEnd = iMid - 1;
            }

            else
            {
                iStart = iMid + 1;
            }
        }

        else    // right part is sorted
        {
            if(Arr[iMid] <= iNo && iNo <= Arr[iEnd])
            {
                // element is exist
                iStart = iMid + 1;
            }   

            else
            {
                // element does not exit
                iEnd = iMid - 1;
            }
        }
    }

    return iIndex;
}

int main()
{
    int Arr[] = {7,8,9,1,2,3,4,5,6};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);
    int iValue = 0;

    cout<<"Enter the number that you want to search in the array : ";
    cin>>iValue;

    int iRet = searchInRotatedArray(Arr,iSize,iValue);

    if(iRet == -1)
    {
        cout<<"Element is NOT present in the array\n";
    }

    else
    {
        cout<<"Element is present at index : "<<iRet<<"\n";
    }

    return 0;
}