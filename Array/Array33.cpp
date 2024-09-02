/*
    Given a Matrix, print the given matrix in spiral order.

    Example 1:
    Input: Matrix[][] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } }

    Outhput: 1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10.
    Explanation: The output of matrix in spiral form.

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> printMatrix(vector<vector<int>> &Arr)
{
    vector<int> iResult;

    int iRow = Arr.size();
    int iCol = Arr[0].size();

    int top = 0;
    int left = 0;
    int right = iCol - 1;
    int bottom = iRow - 1;

    while((top <= bottom) && (left <= right))
    {
        for(int iCnt = left; iCnt <= right; iCnt++)
        {
            iResult.push_back(Arr[top][iCnt]);
        }

        top++;

        for(int iCnt = top; iCnt <= bottom; iCnt++)
        {
            iResult.push_back(Arr[iCnt][right]);
        }

        right--;

        if(top <= bottom)
        {
            for(int iCnt = right; iCnt >= left; iCnt--)
            {
                iResult.push_back(Arr[bottom][iCnt]);
            }

            bottom--;
        }

        if(left <= right)
        {
            for(int iCnt = bottom; iCnt >= top; iCnt--)
            {
                iResult.push_back(Arr[iCnt][left]);
            }

            left++;
        }
    }

    return iResult;
}

int main()
{
    vector<vector<int>> Arr = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    vector<int> iRet = printMatrix(Arr);

    for(int iCnt = 0; iCnt < iRet.size(); iCnt++)
    {
        cout<<iRet[iCnt]<<"\t";
    }

    return 0;
}