#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>> &Arr, int iSize)
{
    vector<vector<int>> Temp(iSize, vector<int> (iSize,0));

    for(int i = 0; i < iSize; i++)
    {
        for(int j = 0; j < iSize; j++)
        {
            Temp[j][iSize - i - 1] = Arr[i][j];
        }
    }

    return Temp;
}

int main()
{
    vector<vector<int>> Arr;
    Arr = {{1,2,3},{4,5,6},{7,8,9}};

    int iSize = Arr.size();

    vector<vector<int>> iRet = rotateMatrix(Arr,iSize);

    for(int i = 0; i < iRet.size(); i++)
    {
        for(int j = 0; j < iRet[i].size(); j++)
        {
            cout<<iRet[i][j]<<"\t";
        }

        cout<<"\n";
    }

    return 0;
}