// Astroid Collision

#include<bits/stdc++.h>
using namespace std;

list<int> FindAstroidCollision(int Arr[], int iSize)
{
    list<int> st;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > 0)
        {
            st.push_back(Arr[iCnt]);
        }

        else
        {
            while(!st.empty() && st.back() > 0 && st.back() < abs(Arr[iCnt]))
            {
                st.pop_back();
            }

            if(!st.empty() && st.back() == abs(Arr[iCnt]))
            {
                st.pop_back();
            }

            else if(st.empty() || st.back() < 0)
            {
                st.push_back(Arr[iCnt]);
            }
        }
    }
    
    return st;
}

int main()
{
    int Arr[] = {4,7,1,1,2,-3,-7,17,15,-16,-18,-19};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);

    list<int> iRet = FindAstroidCollision(Arr,iSize);

    for(int iValue : iRet)
    {
        cout<<iValue<<"\t";
    }

    return 0;
}