// Next Greater Element - II

#include<bits/stdc++.h>
using namespace std;

vector<int> NextGreaterElementII(int Arr[], int iSize)
{
    if(iSize == 0)
    {
        return {};
    }

    vector<int> iResult(iSize,-1);
    stack<int> st;

    for(int i = 2 * iSize - 1; i >= 0; i++)
    {
        while(!st.empty() && st.top() <= Arr[i % iSize])
        {
            st.pop();
        }

        if(i < iSize)
        {
            if(!st.empty())
            {
                iResult[i] = st.top();
            }
        }

        st.push(Arr[i % iSize]);
    }

    return iResult;
}

int main()
{
    int Arr[] = {2,10,12,1,11};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);

    vector<int> iRet = NextGreaterElementII(Arr,iSize);

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<iRet[iCnt]<<"\t";
    }

    return 0;
}