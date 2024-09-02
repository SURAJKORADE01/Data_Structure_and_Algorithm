// Floor and ceiling -> Javalcha chota ani Javalcha motha element

#include<bits/stdc++.h>
using namespace std;

int findFloor(vector<int> Arr, int iSize, int iSearch)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;
    int iFloor = -1;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iMid] <= iSearch)
        {
            iFloor = Arr[iMid];
            iStart = iMid + 1;
        }

        else
        {
            iEnd = iMid - 1;
        }
    }

    return iFloor;
}

int findCeiling(vector<int> Arr, int iSize, int iSearch)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    int iMid = 0;
    int iCeiling = -1;

    while(iStart <= iEnd)
    {
        iMid = (iStart + iEnd) / 2;

        if(Arr[iMid] >= iSearch)
        {
            iCeiling = Arr[iMid];
            iEnd = iMid - 1;
        }

        else
        {
            iStart = iMid + 1;
        }
    }

    return iCeiling;
}

pair<int,int> getPair(vector<int>Arr, int iSize, int iValue)
{
    int iFloor = findFloor(Arr,iSize,iValue);
    int iCeiling = findCeiling(Arr,iSize,iValue);

    return make_pair(iFloor,iCeiling);
}


int main()
{
    vector<int> Arr = {3,4,4,7,8,10};
    int iSize = Arr.size();
    int iValue = 0;

    cout<<"Enter the element that you want to insert : ";
    cin>>iValue;

    pair<int,int> ans = getPair(Arr,iSize,iValue);
    cout<<"The floor and ceiling are : "<<ans.first<<" "<<ans.second<<"\n";

    return 0;
}