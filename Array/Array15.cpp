// majority element

#include<bits/stdc++.h>
using namespace std;

vector<int> findMajorityElement(vector<int> Arr)
{
    vector<int> iResult;
    int iSize = Arr.size();

    map<int,int> mapkeyvalue;
    int mini = (iSize / 3);

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        mapkeyvalue[Arr[iCnt]]++;

        if(mapkeyvalue[Arr[iCnt]] > mini)
        {
            iResult.push_back(Arr[iCnt]);
        }
    }

    return iResult;
}

int main()
{
    vector<int>Arr = {11, 33, 33, 11, 33, 11};
    vector<int>iRet = findMajorityElement(Arr);

    cout<<"The Majority element are : ";

    for(auto i : iRet)      
    {
        cout<<i<<"\t";
    }

    return 0;
}