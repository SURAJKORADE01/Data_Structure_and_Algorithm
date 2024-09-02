#include <bits/stdc++.h>
using namespace std;

bool checkBalancedParenthesis(char *str, int iSize)
{
    stack<char> st;

    for (int i = 0; i < iSize; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            st.push(str[i]);
        }

        else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            if (st.empty())
            {
                return false;
            }

            char ch = st.top();
            st.pop();

            if ((str[i] == ')' && ch != '(') ||
                (str[i] == '}' && ch != '{') ||
                (str[i] == ']' && ch != '['))
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    char Arr[20];

    cout << "Enter the string: ";
    cin >> Arr;

    int iSize = strlen(Arr);

    bool bRet = checkBalancedParenthesis(Arr, iSize);

    if (bRet)
    {
        cout << "Balanced Parenthesis\n";
    }
    else
    {
        cout << "Not a Balanced Parenthesis\n";
    }

    return 0;
}
