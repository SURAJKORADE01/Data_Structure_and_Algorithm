/*
    Count Inversion Pairs

    Problem Statement: 
    Given an array of N integers, count the inversion of the array (using merge-sort).

    What is an inversion of an array? Definition: for all i & j < size of array, 
    if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].
*/

#include<bits/stdc++.h>
using namespace std;

int countInversionPair(vector<int> &Arr, int iSize)
{
    int iCount = 0;

    for(int i = 0; i < iSize; i++)
    {
        for(int j = i+1; j < iSize; j++)
        {
            if(Arr[i] > Arr[j])
            {
                iCount++;
            } 
        }
    }

    return iCount;
}

int main()
{
    vector<int> Arr = {5, 4, 3, 2, 1};
    int iSize = Arr.size();

    int iRet = countInversionPair(Arr,iSize);
    cout<<"Count of inversion pair is : "<<iRet<<"\n";

    return 0;
}