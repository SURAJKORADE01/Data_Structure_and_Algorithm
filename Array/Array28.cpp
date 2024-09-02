/*
    Two Sum : Check if a pair with given sum exists in Array

    Example 1:
    Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
    Result: YES (for 1st variant)
        [1, 3] (for 2nd variant)

    Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.
*/

#include<bits/stdc++.h>
using namespace std;

string twoSum(int Arr[],int iSize, int iSum)
{
    string sResult = "No";

    for(int i = 0; i < iSize; i++)
    {
        for(int j = i+1; j < iSize; j++)
        {
            if((Arr[i] + Arr[j]) == iSum)
            {
                sResult = "Yes";
                break;
            }
        }
    }

    return sResult;
}

vector<int> returnIndex(vector<int> &Arr, int iSize, int iSum)
{
    vector<int> iResult;

    for(int i = 0; i < iSize; i++)
    {
        for(int j = i + 1; j < iSize; j++)
        {
            if((Arr[i] + Arr[j]) == iSum)
            {
                iResult.push_back(i);
                iResult.push_back(j);

                return iResult;
            }
        }
    }

    return {-1,-1};
}

bool optimalApproach(vector<int> &Arr, int iSize, int iSum)
{
    bool bFlag=  false;
    sort(Arr.begin(), Arr.end());

    int iStart = 0;
    int iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        if((Arr[iStart] + Arr[iEnd]) == iSum)
        {
            bFlag = true;
            break;        
        }

        else if((Arr[iStart] + Arr[iEnd]) > iSum)
        {
            iEnd--;
        }

        else if((Arr[iStart] + Arr[iEnd]) < iSum)
        {
            iStart++;
        }
    }

    return bFlag;
}

int main()
{
    vector<int> Arr = {2, 6, 5, 8, 11};
    int iSize = Arr.size();

    int iTarget = 0;
    cout<<"Enter the target : ";
    cin>>iTarget;

    // string sRet = twoSum(Arr,iSize,iTarget);
    // cout<<"Answer is : "<<sRet<<"\n";

    // vector<int> iResult = returnIndex(Arr,iSize,iTarget);
    
    // cout<<"Result is : ["<<iResult[0]<<","<<iResult[1]<<"]";

    bool bRet = false;
    bRet = optimalApproach(Arr,iSize,iTarget);
    cout<<"Result is: " << (bRet ? "True" : "False") << "\n";
    
    return 0;
}