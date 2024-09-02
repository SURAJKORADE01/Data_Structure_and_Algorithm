// Remove outermost parenthesis

#include<bits/stdc++.h>
using namespace std;

// Method 1
string removeOutermostParenthesis(string str)
{
    stack<char> st;
    string ans = "";

    for(int iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if(str[iCnt] == '(')
        {
            if(!st.empty())
            {
                ans += str[iCnt];
            }

            st.push(str[iCnt]);
        }

        else if(str[iCnt] == ')')
        {
            st.pop();

            if(!st.empty())
            {
                ans = ans + str[iCnt];
            }
        }
    }

    return ans;
}

// Method 2

string removeOutermostParenthesis2(string str)
{
    int iCount = 0;
    string ans = "";

    for(int iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if(str[iCnt] == ')')
        {
            iCount--;
        }      

        if(iCount != 0) 
        {
            ans.push_back(str[iCnt]);
        }

        if(str[iCnt] == '(')
        {
            iCount++;
        }
    }

    return ans; 
}

int main()
{
    string str = "(())(()())";

    str = removeOutermostParenthesis2(str);
    cout<<"String after removing outermost parenthesis become : "<<str<<"\n";

    return 0;
}