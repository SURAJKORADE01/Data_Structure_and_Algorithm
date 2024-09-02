// Search Index Position

#include<bits/stdc++.h>
using namespace std;

int insertPosition(vector<int> Arr, int iSize, int iSearch)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;
    int iIndex = iSize;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iMid] >= iSearch)
        {
            iIndex = iMid;
            iEnd = iMid - 1;
        }

        else
        {
            iStart = iMid + 1;
        }
    }

    return iIndex;
}


int main()
{
    vector<int> Arr = {3,5,8,9,15,19};
    int iSize = Arr.size();
    int iValue = 0, iRet = 0;

    cout<<"Enter the element that you want to insert : ";
    cin>>iValue;

    iRet = insertPosition(Arr,iSize,iValue);
    cout<<"Insert element at index : "<<iRet<<"\n";

    return 0;
}