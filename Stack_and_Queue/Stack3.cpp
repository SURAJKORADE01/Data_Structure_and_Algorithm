// Check for Balanced Parentheses

// string str is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.

#include<bits/stdc++.h>
using namespace std;

bool checkBalancedParenthesis(char *str)
{
    stack<int> st;

    while(*str != '\0')
    {
        if((*str == '(') || (*str == '[') || (*str == '{'))
        {
            st.push(*str);
        }

        else
        {
            if((*str == '(') && (st.top == ')') || (*str == '[') && (st.top == ']') || (*str == '{') && (st.top == '}'))
            {
                st.pop();
            }
        }
    }

    if(st.empty() && *str == '\0')
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    bool bRet = false;

    cout<<"Enter the string : ";
    cin>>Arr;

    bRet = checkBalancedParenthesis(Arr);

    if(bRet == true)
    {
        cout<<"Balanced Parenthesis\n";
    }

    else
    {
        cout<<"NOT a Balanced Parenthesis\n";
    }

    return 0;
}