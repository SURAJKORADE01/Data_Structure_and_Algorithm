/*
    Given an array, we have found the number of occurrences of each element in the array.

    Example 1:
    Input: arr[] = {10,5,10,15,10,5};
    Output: 10  3, 5  2, 15  1
    Explanation: 10 occurs 3 times in the array, 5 occurs 2 times in the array, 15 occurs 1 time in the array

    Example2: 
    Input: arr[] = {2,2,3,4,4,2};
    Output: 2  3, 3  1,4  2
    Explanation: 2 occurs 3 times in the array, 3 occurs 1 time in the array,4 occurs 2 time in the array
*/

#include<bits/stdc++.h>
using namespace std;

// void countFrequency(int Arr[], int iSize)
// {
//     vector<bool> visited(iSize,false);
//     int iCount = 0;

//     for(int i = 0; i < iSize; i++)
//     {
//         if(visited[i] == true)
//         {
//             continue;
//         }

//         for(int j = 0; j <  iSize; j++)
//         {
//             if(Arr[i] == Arr[j])
//             {
//                 visited[j] = true;
//                 iCount++;
//             }
//         }

//         cout<<Arr[i]<<" appear "<<iCount<<" times.\n";
//     }
// }

void Frequency(int Arr[], int iSize)
{
    unordered_map<int,int> mapdata;

    for(int i = 0; i < iSize; i++)
    {
        mapdata[Arr[i]]++;
    }

    for(auto ele : mapdata)
    {
        cout<<ele.first<<" appear "<<ele.second<<" times in the array\n";
    }
}

int main()
{
    int Arr[] = {10,5,10,15,10,5};
    int iSize = sizeof(Arr)/sizeof(Arr[0]);

    // countFrequency(Arr,iSize);
    Frequency(Arr,iSize);

    return 0;
}