// Prefix to Postfix conversion

// Step 1 : Start iterating from end
// Step 2 : Operand -> push into the stack
// Step 3 : Operator -> top1 + top2 + operator

#include<bits/stdc++.h>
using namespace std;

string PrefixToPostfixConversion(string str)
{
    int i = str.length() - 1;
    stack<string> st;
    string convertor = "";

    while(i >= 0)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
        {
            st.push(string(1,str[i]));
        } 

        else    
        {
            string cTop1 = st.top();
            st.pop();

            string cTop2 = st.top();
            st.pop();

            convertor = cTop1 + cTop2 + str[i];
            st.push(convertor);
        }

        i--;
    }

    return st.top();
}

int main()
{
    string str = "/-AB*+DEF";

    cout<<"Prefix expression is : "<<str<<"\n";
    str = PrefixToPostfixConversion(str);
    cout<<"Postfix expression is : "<<str<<"\n";

    return 0;
}