// Implement Lower Bound

// The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is 
// greater than or equal to a given key i.e. x.

#include<bits/stdc++.h>
using namespace std;

// int lowerBound(vector<int> Arr,int iNo,int iSearch)
// {
//     int i = 0;

//     for(i = 0; i < iNo; i++)
//     {
//         if(Arr[i] >= iSearch)
//         {
//             break;
//         }
//     }

//     return i;
// }

int lowerBound(vector<int> Arr, int iSize, int iSearch)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;
    int iAns = iSize;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iMid] >= iSearch)
        {
            iAns = iMid;
            iEnd = iMid - 1;
        }

        else
        {
            iStart = iMid + 1;
        }
    }

    return iAns;
}

int main()
{
    vector<int> Arr = {3,5,8,15,22};
    int iSize = Arr.size();
    int iValue = 0, iRet = 0;

    cout<<"Enter the element that you find : ";
    cin>>iValue;

    iRet = lowerBound(Arr,iSize,iValue);
    cout<<"The lower bound is at index : "<<iRet<<"\n";

    return 0;
}