// longest subarray with sum

#include<bits/stdc++.h>
using namespace std;

int subArrayWithSum(vector<int> Arr, int iSum)
{
    int iCount = 0;
    int iSize = Arr.size();
    int iSummation = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSummation = 0;

        for(int j = i; j < iSize; j++)
        {
            iSummation = iSummation + Arr[j];

            if(iSummation == iSum)
            {
                iCount++;
            }

            else if(iSummation > iSum)
            {
                break;
            }
        }
    }

    return iCount;
}   

int main()
{
    vector<int>Arr = {1,2,3};

    int iSum = 0;
    cout<<"Enter the sum that you want to find : ";
    cin>>iSum;

    int iRet = subArrayWithSum(Arr,iSum);
    cout<<"The number of subarray are : "<<iRet<<"\n";

    return 0;
}