// Binary subarray with sum
// Input: nums = [1,0,1,0,1], goal = 2
// Output: 4
// Explanation: The 4 subarrays are bolded and underlined below:
// [1,0,1]
// [1,0,1,0]
// [0,1,0,1]
// [1,0,1]

#include<bits/stdc++.h>
using namespace std;

int countSubarray(int Arr[], int iSize, int iFind)
{
    int iCount = 0;
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = 0;

        for(int j = i; j < iSize; j++)
        {
            iSum = iSum + Arr[j];

            if(iSum == iFind)
            {
                iCount++;
            }

            if(iSum > iFind)
            {
                break;
            }
        }
    }

    return iCount;
}

int main()
{
    int Arr[] = {0,0,0,0,0};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);

    int iNo = 0;
    cout<<"Enter the number that you want to find : ";
    cin>>iNo;

    int iRet = countSubarray(Arr,iSize,iNo);
    cout<<"Number of binary subarray with sum is : "<<iRet<<"\n";
    return 0;
}