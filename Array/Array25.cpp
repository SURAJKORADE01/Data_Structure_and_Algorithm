/*
    Find Learder element
    Input: arr = [10, 22, 12, 3, 0, 6]
    Output: 22 12 6
    
    Explanation: 6 is a leader. In addition to that, 12 is greater than all the elements in its right side (3, 0, 6), 
    also 22 is greater than 12, 3, 0, 6.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> leaderInArray(vector<int> &Arr, int iSize)
{
    vector<int> iResult; 
    bool bFlag = true;

    for(int i = 0; i < iSize; i++)
    {
        bFlag = true;

        for(int j = i+1; j < iSize; j++)
        {
            if(Arr[i] > Arr[j])
            {
                continue;
            }

            else
            {
                bFlag = false;
                break;
            }
        }

        if(bFlag == true)
        {   
            iResult.push_back(Arr[i]);
        }       
    }

    // iResult.push_back(Arr[iSize-1]);
    return iResult;
}

int main()
{
    vector<int> Arr = {10,20,30,35};
    int iSize = Arr.size();

    vector<int> iRet = leaderInArray(Arr,iSize);

    for(int iCnt = 0; iCnt < iRet.size(); iCnt++)
    {
        cout<<iRet[iCnt]<<"\t";
    }
    
    return 0;
}