// Merge Overlapping Subintervals
/*
    Example 1:
    Input: intervals=[[1,3],[2,6],[8,10],[15,18]]

    Output: [[1,6],[8,10],[15,18]]

    Explanation: Since intervals [1,3] and [2,6] are overlapping we can merge them to form [1,6] intervals.
*/

#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
vector<vector<int>> mergeOverlappingInterval(vector<vector<int>> &Arr)
{
    int iSize = Arr.size();
    sort(Arr.begin(),Arr.end());

    vector<vector<int>> iResult;

    for(int i = 0; i < iSize; i++)
    {
        int iStart = Arr[i][0];
        int iEnd = Arr[i][1];

        if(!iResult.empty() && iEnd <= iResult.back()[1])
        {
            continue;
        }

        for(int j = i + 1; j < iSize; j++)
        {
            if(Arr[j][0] <= iEnd)
            {
                iEnd = max(iEnd,Arr[j][1]);
            }

            else
            {
                break;
            }
        }

        iResult.push_back({iStart,iEnd});
    }

    return iResult;
}

// Optimal Approach

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &Arr)
{
    int iSize = Arr.size();
    sort(Arr.begin(), Arr.end());
    vector<vector<int>> iResult;

    for(int i = 0; i < iSize; i++)
    {
        // if element is NOT lying
        if(iResult.empty() || Arr[i][0] > iResult.back()[1])
        {
            iResult.push_back(Arr[i]);
        }

        // element is lying
        else
        {
            iResult.back()[1] = max(iResult.back()[1],Arr[i][1]);
        }
    }

    return iResult;
}

int main()
{
    vector<vector<int>> Arr = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> iRet = mergeOverlappingIntervals(Arr);

    for(auto it : iRet)
    {
        cout<<"["<<it[0]<<", "<<it[1]<<"] ";
    }

    cout<<endl;

    return 0;
}