// set matrix zero
#include<bits/stdc++.h>
using namespace std;

void changeRow(vector<vector<int>> &Arr, int iCol, int iMakeRowZero)
{
    for(int i = 0; i < iCol; i++)
    {
        Arr[iMakeRowZero][i] = 0;
    }
}

void changeCol(vector<vector<int>> &Arr, int iRow, int iMakeColZero)
{
    for(int i = 0; i < iRow; i++)
    {
        Arr[i][iMakeColZero] = 0;
    } 
}

vector<vector<int>> setMatrixZero(vector<vector<int>> &Arr, int iRow, int iCol)
{
    vector<bool>zeroRow(iRow,false);
    vector<bool>zeroCol(iCol,false);
    
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == 0)
            {
                zeroRow[i] = true;
                zeroCol[j] = true;   
            }
        }
    }

    for(int i = 0; i < iRow; i++)
    {
        if(zeroRow[i])
        {
            changeRow(Arr,iCol,i);
        }
    }

    for(int i = 0; i < iCol; i++)
    {
        if(zeroCol[i])
        {
            changeCol(Arr,iRow,i);
        }
    }

    return Arr;
} 

int main()
{   
    vector<vector<int>> Arr = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};

    int iRow = Arr.size();
    int iCol = Arr[0].size();
    
    vector<vector<int>> iRet = setMatrixZero(Arr,iRow,iCol);
    
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