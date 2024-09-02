/*
    3 Sum Problem :
    
    Input: Arr = [-1,0,1,2,-1,-4]

    Output: [[-1,-1,2],[-1,0,1]]

    Explanation: Out of all possible unique triplets possible, [-1,-1,2] and [-1,0,1] satisfy the condition of summing up to 
                 zero with i!=j!=k
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(vector<int> &Arr, int iSize)
{
    set<vector<int>> mySet;    

    for(int i = 0; i < iSize; i++)
    {
        for(int j = i+1; j < iSize; j++)
        {
            for(int k = j+1; k < iSize; k++)
            {
                if((Arr[i] != Arr[j] != Arr[k]) && ((Arr[i] + Arr[j] + Arr[k]) == 0))
                {
                    vector<int> Temp = {Arr[i],Arr[j],Arr[k]};
                    sort(Temp.begin(),Temp.end());
                    mySet.insert(Temp);
                }
            }
        }
    }

    vector<vector<int>> iResult(mySet.begin(),mySet.end());
    return iResult;
}

int main()
{
    vector<int> Arr = {-1,0,1,2,-1,-4};
    int iSize = Arr.size();

    vector<vector<int>> iRet = triplet(Arr,iSize);

    for(int i = 0; i < iRet.size(); i++)
    {
        cout<<"[";
        for(int j = 0; j < iRet[i].size(); j++)
        {
            cout<<iRet[i][j]<<" ";
        }
        cout<<"]\t";
    }
    
    return 0;
}