// Binary Search to find X in sorted array
// Arr = {3, 4, 6, 7, 9, 12, 16, 17} and target = 6.

#include<iostream>
using namespace std;

bool checkElement(int Arr[],int iSize, int iNo)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;

    bool bFLag = false;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if((Arr[iMid] == iNo) || (Arr[iStart] == iNo) || (Arr[iEnd] == iNo))
        {
            bFLag = true;
            break;
        }

        else if(Arr[iMid] > iNo)
        {
            iEnd = iMid - 1;
        }

        else if(Arr[iMid] < iNo)
        {
            iStart = iMid + 1;
        }
    }

    return bFLag;
}   

int main()
{
    bool bRet = false;
    int iTarget = 0;

    int Arr[] = {3, 4, 6, 7, 9, 12, 16, 17};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);

    cout<<"Enter the element that you want to search : ";
    cin>>iTarget; 

    bRet = checkElement(Arr,iSize,iTarget);
    
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