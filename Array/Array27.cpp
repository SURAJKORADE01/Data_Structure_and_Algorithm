/*
    4 Sum Problem :
    
    Input : Arr[] = [4,3,3,4,4,2,1,2,1,1], iSum = 9
    Output: [[1,1,3,4],[1,2,2,4],[1,2,3,3]]
    Explanation: The sum of all the quadruplets is equal to the iSum i.e. 9.

*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &Arr, int iSize, int iSum)
{
    set<vector<int>> mySet;    

    for(int i = 0; i < iSize; i++)
    {
        for(int j = i+1; j < iSize; j++)
        {
            for(int k = j+1; k < iSize; k++)
            {
                for(int l = k+1; l < iSize; l++)
                {

                    if(((Arr[i] + Arr[j] + Arr[k] + Arr[l]) == iSum))
                    {
                        vector<int> Temp = {Arr[i],Arr[j],Arr[k],Arr[l]};
                        sort(Temp.begin(),Temp.end());
                        mySet.insert(Temp);
                    }
                }
            }
        }
    }

    vector<vector<int>> iResult(mySet.begin(),mySet.end());
    return iResult;
}

int main()
{
    int iSum = 0;
    vector<int> Arr = {1,0,-1,0,-2,2};
    int iSize = Arr.size();

    cout<<"Enter the sum that you want to find : ";
    cin>>iSum;

    vector<vector<int>> iRet = fourSum(Arr,iSize,iSum);

    for(int i = 0; i < iRet.size(); i++)
    {
        cout<<"[ ";
        for(int j = 0; j < iRet[i].size(); j++)
        {
            cout<<iRet[i][j]<<" ";
        }
        cout<<"]\t";
    }
    
    return 0;
}