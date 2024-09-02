/*
    Find the highest/lowest frequency element

    Example 1:
    Input: array[] = {10,5,10,15,10,5};
    Output: 10 15
    Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.

*/

#include<bits/stdc++.h>
using namespace std;

// void highestAndLowestFrequency(vector<int> &Arr, int iSize)
// {
//     vector<bool> visited(iSize,false);
//     int iMaxFreq = 0, iMaxEle = 0;
//     int iMinFreq = iSize, iMinEle = 0;

//     for(int i = 0; i < iSize; i++)
//     {
//         if(visited[i] == true)
//         {
//             continue;
//         }

//         int iCount = 1;

//         for(int j = i + 1; j < iSize; j++)
//         {
//             if(Arr[j] == Arr[i])
//             {
//                 visited[j] = true;
//                 iCount++;
//             }
//         }

//         if(iCount > iMaxFreq)
//         {
//             iMaxEle = Arr[i];
//             iMaxFreq = iCount;
//         }

//         if(iCount < iMinFreq)
//         {
//             iMinEle = Arr[i];
//             iMinFreq = iCount;
//         }
//     }

//     cout<<"Maximum element is : "<<iMaxEle<<"\n";
//     cout<<"Minimum element is : "<<iMinEle<<"\n";
// }

void highestAndLowestFrequency(vector<int> &Arr,int iSize)
{
    unordered_map<int,int> mapdata;

    for(int i = 0; i < iSize; i++)
    {
        mapdata[Arr[i]]++;
    }

    int iMinEle = 0, iMinFreq = iSize;
    int iMaxEle = 0, iMaxFreq = 0;

    for(auto ele : mapdata)
    {
        int iCount = ele.second;        // 2
        int element = ele.first;

        if(iCount > iMaxFreq)
        {
            iMaxEle = element;
            iMaxFreq = iCount;
        }

        if(iCount < iMinFreq)
        {
            iMinEle = element;
            iMinFreq = iCount; 
        }
    }

    cout<<"Maximum element from the array is : "<<iMaxEle<<"\n";
    cout<<"Minimum element from the array is : "<<iMinEle<<"\n";
    
}

int main()
{
    vector<int> Arr = {2,2,3,4,4,2};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);

    highestAndLowestFrequency(Arr,iSize);

    return 0;
}