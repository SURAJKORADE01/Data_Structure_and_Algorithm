#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSubsequence(vector<int> &Arr, int iSize)
{
    int iCount = 1;
    int iCnt = 1;

    for(int i = 0; i < iSize; i++)
    {   
        int iValue = Arr[i];

        for(int j = 0; j < iSize; j++)
        {
            if(Arr[j] == iValue+1)
            {
                iCnt++;
                break;
            }
        }
    }

    return iCount;
}

int main()
{
    vector<int> Arr = {3,8,5,7,6};
    int iSize = Arr.size();

    int iRet = longestConsecutiveSubsequence(Arr,iSize);
    cout<<"Longest consecutive subsequence is : "<<iRet<<"\n";

    return 0;
}