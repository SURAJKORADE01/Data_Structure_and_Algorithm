/*
    Maximum Product Subarray in an Array

    Problem Statement: Given an array that contains both negative and positive integers, find the maximum product subarray.

*/

#include<bits/stdc++.h>
using namespace std;

// int maximumProductSubArray(vector<int> Arr)
// {
//     int iMax = Arr[0];
//     int iProd = Arr[0];

//     for(int i = 0; i < Arr.size() - 1; i++)
//     {
//         iProd = Arr[i];

//         for(int j = i+1; j < Arr.size(); j++)
//         {
//             iProd = iProd * Arr[j];
//         }

//         iMax = max(iMax,iProd);
//     }

//     return iMax;
// }

int maximumProductSubArray(vector<int> Arr)
{
    int pre = 1;
    int suff = 1;
    int iAns = INT_MIN;

    for(int i = 0; i < Arr.size(); i++)
    {
        if(pre == 1)
        {
            pre = 1;
        }

        if(suff == 1)
        {
            suff = 1;
        }

        pre = pre * Arr[i];
        suff = suff * Arr[Arr.size() - i - 1];

        iAns = max(iAns,max(pre,suff));
    }

    return iAns;
}

int main()
{
    vector<int> Arr = {1, 2, -3, 0, -4, -5};

    cout<<"The maximum product of subarray is : "<<maximumProductSubArray(Arr)<<"\n";

    return 0;
}