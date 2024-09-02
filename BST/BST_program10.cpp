// Search Element in Rotated Sorted Array II -> with duplicate element

// Example 1:
// Input Format: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 3
// Result: True
// Explanation: The element 3 is present in the array. So, the answer is True.

#include<iostream>
using namespace std;

bool checkElementInRotatedArray(int Arr[], int iSize, int iNo)
{
    bool bFlag = false;

    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iMid] == iNo)
        {
            bFlag = true;
            break;
        }

        if(Arr[iStart] == Arr[iMid] && Arr[iMid] == Arr[iEnd])
        {
            iStart = iStart + 1;
            iEnd = iEnd - 1;

            continue;
        }

        else if((Arr[iStart] <= Arr[iMid]))
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

        else
        {
            if(Arr[iMid] <= iNo && iNo <= Arr[iEnd])
            {
                iStart = iMid + 1;
            }

            else
            {
                iEnd = iMid - 1;
            }
        }
    }

    return bFlag;   
}

int main()
{
    int Arr[] = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);
    bool bRet = false;
    int iValue = 0;

    cout<<"Enter the number that you want to search in the array : ";
    cin>>iValue;

    bRet = checkElementInRotatedArray(Arr,iSize,iValue);

    if(bRet == true)
    {
        cout<<"Element is present in the array\n";
    }

    else
    {
        cout<<"Element is NOT present in the array\n";
    }


    return 0;
}