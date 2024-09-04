// Remove K digits

#include<bits/stdc++.h>
using namespace std;

string RemoveKDigits(string str, int iNo)
{
    stack<char> st;

    for(int iCnt = 0; iCnt < str.length(); iCnt++)
    {
        while(!st.empty() && iNo > 0 && (st.top() - '0') > str[iCnt] - '0')
        {
            st.pop();
            iNo--;
        }

        st.push(str[iCnt]);
    }

    while(iNo != 0)
    {
        st.pop();
        iNo--;
    }

    if(st.empty())
    {
        return "";
    }

    string sResult = "";

    while(!st.empty())
    {
        sResult = sResult + st.top();
        st.pop();
    }

    while(sResult.size() != 0 && sResult.back() == '0')
    {
        sResult.pop_back();
    }

    reverse(sResult.begin(),sResult.end());

    if(sResult.empty())
    {
        return "0";
    }

    return sResult;
}

int main()
{
    string str = "1432219";
    int iNo = 0;

    cout<<"Enter the number of elements that you want to remove : ";
    cin>>iNo;

    string sRet = RemoveKDigits(str,iNo);
    cout<<"Minimum possible number is : "<<sRet<<"\n";

    return 0;
}