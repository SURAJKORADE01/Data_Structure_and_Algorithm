// Count number of nice subarrays
// Input: nums = [1,1,2,1,1], k = 3
// Output: 2
// Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].

#include<iostream>
using namespace std;

int countNiceSubarray(int Arr[], int iSize ,int iFind)
{
    int iCount = 0;
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = 0;

        for(int j = i; j < iSize; j++)
        {
            if(Arr[j] % 2 != 0)
            {
                iSum = iSum + Arr[j];
            }
            
            if(iSum == iFind)
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int main()
{   
    int Arr[] = {2,2,2,1,2,2,1,2,2,2};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);
    int iNo = 0;

    cout<<"Enter the sum that you want to find : ";
    cin>>iNo;

    int iRet = 0;
    iRet = countNiceSubarray(Arr,iSize,iNo);
    cout<<"The number of nice subarray's are : "<<iRet<<"\n";

    return 0;
}