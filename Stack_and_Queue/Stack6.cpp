// Infix to Postfix Conversion

// Step 1 : Operand -> add to the answer
// Step 2 : Opening bracket -> push into the stack
// Step 3 : Closing bracket -> pop from the stack until found the opening bracket
// Step 4 : Based on priority of operator, perform the operation
// Step 5 : Add remaning stack elements to the answer

#include<bits/stdc++.h>
using namespace std;

int priority(char ch)
{
    if(ch == '^')
    {
        return 3;
    }

    else if((ch == '*') || (ch == '/'))
    {
        return 2;
    }

    else if((ch == '+') || (ch == '-'))
    {
        return 1;
    }

    else
    {
        return -1;
    }
}

string InfixToPostfixConversion(string str)
{
    int i = 0;
    stack<char> st;
    string ans = "";

    while(i < str.size())
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
        {
            ans = ans + str[i];
        }

        else if(str[i] == '(')
        {
            st.push(str[i]);
        }

        else if(str[i] == ')')
        {
            while(st.top() != '(')
            {
                ans = ans + st.top();
                st.pop();
            }

            st.pop();
        }

        else
        {
            while(!st.empty() && priority(str[i]) <= priority(st.top()))
            {
                ans = ans + st.top();
                st.pop();
            }

            st.push(str[i]);
        }

        i++;
    }

    while(!st.empty())
    {
        ans = ans + st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    string str = "a+b*(c^d-e)";
    
    cout<<"Infix expression is : "<<str<<"\n";
    str = InfixToPostfixConversion(str);
    cout<<"Postfix expression is : "<<str<<"\n";

    return 0;
}