#include<bits/stdc++.h>
using namespace std;

string reverseString(string str)
{
    stack<string> st;
    string sRet = "";

    for(int iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if(str[iCnt] == ' ')
        {
            st.push(sRet);
            sRet = "";
        }

        else
        {
            sRet = sRet + str[iCnt];
        }
    }

    string ans = "";

    while(st.size() != 1)
    {
        ans = ans + st.top() + " ";
        st.pop();
    }

    ans = ans + st.top();

    return ans;
}

int main()
{
    string str = "suraj subhash korade";         

    cout<<"Before reversing, the string is : "<<str<<"\n";

    str = str + " ";    

    string sRet = reverseString(str);
    cout<<"After reversing, the string become : "<<sRet<<"\n";

    return 0;
}