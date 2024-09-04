// Next Greater Element -> NGE
// Monotomic stack -> store element in specific order

#include<bits/stdc++.h>
using namespace std;

// Brute Force approach
vector<int> NextGreaterElement(int Arr[], int iSize)
{
    vector<int> iResult(iSize,-1);
    
    for(int i = 0; i < iSize - 1; i++)
    {
        for(int j = i + 1; j < iSize; j++)
        {
            if(Arr[j] > Arr[i])
            {
                iResult[i] = Arr[j];
                break;
            }
        }
    }

    return iResult;
}

// Optimal Approach 

vector<int> NextGreaterElementOptimal(int Arr[], int iSize)
{
    vector<int> iResult(iSize);
    stack<int> st;

    for(int iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        while(!st.empty() && st.top() <= Arr[iCnt])
        {
            st.pop(); 
        }

        if(st.empty())
        {
            iResult[iCnt] = -1;
        }

        else
        {
            iResult[iCnt] = st.top();
        }

        st.push(Arr[iCnt]);
    }

    return iResult;
}

int main()
{
    int Arr[] = {1,2,3,4,5,6,7};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);

    vector<int> iRet = NextGreaterElementOptimal(Arr,iSize);

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<iRet[iCnt]<<"\t";
    }

    return 0;
}