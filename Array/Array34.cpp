// Length of the longest subarray with zero Sum

// Example 1:
// Input Format
// : N = 6, array[] = {9, -3, 3, -1, 6, -5}
// Result
// : 5
// Explanation
// : The following subarrays sum to zero:
// {-3, 3} , {-1, 6, -5}, {-3, 3, -1, 6, -5}
// Since we require the length of the longest subarray, our answer is 5!

#include<iostream>
#include<unordered_map>
using namespace std;

int lengthOfMaximumSubArray(int Arr[], int iSize)
{
    unordered_map<int,int> sumIndexMap;
    int iLength = 0;
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];

        if(iSum == 0)
        {
            iLength = i + 1;
        }

        if(sumIndexMap.find(iSum) != sumIndexMap.end())
        {
            iLength = max(iLength,i - sumIndexMap[iSum]);
        }

        else
        {
            sumIndexMap[iSum] = i;
        }
    }

    return iLength;
}

int main()
{
    int Arr[] = {9, -3, 3, -1, 6, -5};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);

    int iRet = lengthOfMaximumSubArray(Arr,iSize);
    cout<<"Length of the longest subarray with zero Sum is : "<<iRet<<"\n";

    return 0;
}