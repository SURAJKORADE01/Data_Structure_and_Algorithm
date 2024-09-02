// majority element

#include<bits/stdc++.h>
using namespace std;

// vector<int> findMajorityElement(int Arr[], int iSize)
// {
//     vector<int> iResult;

//     for(int i = 0; i < iSize; i++)
//     {
//         int iCount = 0;

//         if((iResult.size() == 0) || (iResult[0] != Arr[i]))
//         {
//             for(int j = 0; j < iSize; j++)
//             {
//                 if(Arr[j] == Arr[i])
//                 {
//                     iCount++;   
//                 }

//                 if(iCount > (iSize / 2))
//                 {
//                     iResult.push_back(Arr[i]);
//                 }
//             }
//         }  
//     }

//     return iResult;
// }

vector<int> findMajorityElement(vector<int> Arr, int iSize)
{
    vector<int> iResult;

    map<int,int> mp;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        mp[Arr[iCnt]]++;
    }

    for(auto i : mp)
    {
        if(i.second > (iSize / 2))
        {
            iResult.push_back(i.first);
        }
    }

    return iResult;
}

int main()
{
    int iSize = 0;

    vector<int> Arr = {2, 2, 1, 1, 1, 2, 2,1,1,1};
    iSize = Arr.size();

    vector<int> iRet = findMajorityElement(Arr,iSize);

    for(auto i : iRet)
    {
        cout<<i<<"\t";
    }

    return 0;
}