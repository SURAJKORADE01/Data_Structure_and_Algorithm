// Prefix to Infix

// Step 1 : Operand -> push into the stack
// Step 2 : Operator -> Pick 2 operands (first and then second) from stack and place the operator between that operands

// convertor = '(' + top1 + operator + top2 + ')'

#include<bits/stdc++.h>
using namespace std;

string PrefixToInfixConversion(string str)
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

            convertor = '(' + cTop1 + str[i] + cTop2 + ')';
            st.push(convertor);
        }

        i--;
    }

    return st.top();
}

int main()
{
    string str = "*+PQ-MN";
    
    cout<<"Postfix conversion is : "<<str<<"\n";
    str = PrefixToInfixConversion(str);
    cout<<"Infix conversion is : "<<str<<"\n";

    return 0;
}