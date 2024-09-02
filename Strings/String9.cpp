#include<bits/stdc++.h>
using namespace std;

int maxDepth(string str)
{
    int iCount = 0;
    int iMax = 0;

    for(int iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if(str[iCnt] == '(')
        {
            iCount++;
        }

        else if(str[iCnt] == ')')
        {
            iCount--;
        }

        iMax = max(iMax,iCount);        
    }

    return iMax;
}

int main()
{
    string str = "";
    int iRet = 0;

    iRet = maxDepth(str);
    cout<<"The maximum number of nested parentheses are : "<<iRet<<"\n";

    return 0;
}