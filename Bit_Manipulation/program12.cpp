// Find the number that appear once

#include<iostream>
#include<map>
using namespace std;

int NumberAppearOnce(int Arr[], int iSize)
{
    int iCount = 0;
    int iOnce = -1;

    for(int i = 0; i < iSize; i++)
    {
        for(int j = i; j < iSize; j++)
        {
            if(Arr[i] == Arr[j])
            {
                iCount++;
            }
        }

        if(iCount == 1)
        {
            iOnce = Arr[i];
            break;
        }
    }

    return iOnce;
}

int NumberAppearOnceApproach_II(int Arr[], int iSize)
{
    int iOnce = -1;
    map<int,int> mp;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        mp[Arr[iCnt]]++;
    }

    for(auto it : mp)
    {
        if(it.second == 1)
        {
            iOnce = it.first;
            break;
        }
    }

    return iOnce;
}

int NumberAppearOnceApproach_III(int Arr[], int iSize)
{
    int iResult = 0;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        iResult = iResult ^ Arr[iCnt];
    }

    return iResult;
}

int main()
{
    int Arr[] = {4,1,2,1,4};
    int iSize = sizeof(Arr)/sizeof(Arr[0]);
    int iRet = 0;

    iRet = NumberAppearOnceApproach_III(Arr,iSize);
    cout<<"The number appear once is : "<<iRet<<"\n";

    return 0;
}