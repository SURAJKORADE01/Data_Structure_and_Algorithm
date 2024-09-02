// Implement Upper Bound


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

int upperBound(vector<int> Arr, int iSize, int iSearch)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;
    int iAns = iSize;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iMid] > iSearch)
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
    vector<int> Arr = {3,5,8,9,15,19};
    int iSize = Arr.size();
    int iValue = 0, iRet = 0;

    cout<<"Enter the element that you find : ";
    cin>>iValue;

    iRet = upperBound(Arr,iSize,iValue);
    cout<<"The upper bound is at index : "<<iRet<<"\n";

    return 0;
}