// Infix to Prefix Conversion

// Step 1 : Reverse the original string
// Step 2 : Make opening bracket to closing and closing bracket to opening
// Step 3 : Operand -> add to the answer 
// Step 4 : Opening bracket -> push into the stack
// Step 5 : Closing bracket -> pop from the stack until found the opening bracket
// Step 6 : Based on priority of operator, perform the operation -> *,/,+,- add to the answer
// Step 7 : Add remaning stack elements to the answer
// Step 8 : Reverse the answer and return as a result

#include<bits/stdc++.h>
#include<string>
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

string InfixToPrefixConversion(string str)
{
    stack<char> st;
    string ans = "";

    // Reverse the input string
    reverse(str.begin(),str.end());

    // Switch '(' and ')' in the reversed string
    for(int iCnt = 0; iCnt < str.length(); iCnt++)
    {
        if(str[iCnt] == '(')
        {
            str[iCnt] = ')';
        }

        else if(str[iCnt] == ')')
        {
            str[iCnt] = '(';
        }
    }

    // Convert infix to prefix
    for(int i = 0; i < str.length(); i++)
    {
        // Operand
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
        {
            ans = ans + str[i];
        }

        // Left parenthesis
        else if(str[i] == '(')
        {
            st.push(str[i]);
        }

        // Right parenthesis
        else if(str[i] == ')')
        {
            while(st.top() != '(')
            {
                ans = ans + st.top();
                st.pop();
            }

            st.pop(); // Remove '(' from stack
        }

        // Operator
        else
        {
            if(str[i] == '^')
            {
                while(!st.empty() && priority(str[i]) <= priority(st.top()))
                {
                    ans = ans + st.top();
                    st.pop();
                }
            }

            else
            {
                while(!st.empty() && priority(str[i]) < priority(st.top()))
                {
                    ans = ans + st.top();
                    st.pop();
                }
            }
            st.push(str[i]);
        }
    }

    // Pop remaining operators in the stack
    while(!st.empty())
    {
        ans = ans + st.top();
        st.pop();
    }

    // Reverse the final result to get the prefix expression
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    string str = "(A+B)*C-D+E";
    
    cout << "Infix expression is: " << str << "\n";
    str = InfixToPrefixConversion(str);
    cout << "Prefix expression is: " << str << "\n";

    return 0;
}