/*
    Count Reverse Pairs

    Problem Statement: 
    Given an array of numbers, you need to return the count of reverse pairs. Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].
*/

#include<bits/stdc++.h>
using namespace std;

int countReversePair(vector<int> &Arr, int iSize)
{
    int iCount = 0;

    for(int i = 0; i < iSize; i++)
    {
        for(int j = i+1; j < iSize; j++)
        {
            if(Arr[i] > 2 * Arr[j])
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int main()
{
    vector<int> Arr = {1,3,2,3,1};
    int iSize = Arr.size();

    int iRet = countReversePair(Arr,iSize);
    cout<<"Count of reverse pair is : "<<iRet<<"\n";

    return 0;
}