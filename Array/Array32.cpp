#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int iRow)
{
    long long ans = 1;
    vector<int> ansRow;

    ansRow.push_back(1);

    for(int iCol = 1; iCol < iRow; iCol++)
    {
        ans = ans * (iRow - iCol);
        ans = ans / iCol;
        ansRow.push_back(ans);
    }

    return ansRow;
}

vector<vector<int>> pascalTriangle(int N)
{
    vector<vector<int>> ans;

    for(int i = 1; i <= N; i++)
    {
        ans.push_back(generateRow(i));  
    }

    return ans;
}

int main()
{
    int iRow = 0;

    cout<<"Enter the number of rows : ";
    cin>>iRow;

    vector<vector<int>> iRet = pascalTriangle(iRow);

    for(auto i : iRet)
    {
        for(auto j : i)
        {
            cout<<j<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}