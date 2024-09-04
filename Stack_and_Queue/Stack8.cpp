// Postfix to Infix Conversion

// Step 1 : Operand -> push into the stack
// Step 2 : Operator -> Pick 2 operands( first second then first ) from stack and place the operator between that operands

// convertor = '(' + top2 + operator + top1 + ')'

#include<bits/stdc++.h>
using namespace std;

string PostfixToInfixConversion(string str)
{
    stack<string> st;
    int i = 0;

    while(i < str.length())
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

            string converted = '(' + cTop2 + str[i] + cTop1 + ')';
            st.push(converted);
        }

        i++;
    }

    return st.top();
}

int main()
{
    string str = "AB-DE+F*/";

    cout<<"Postfix conversion is : "<<str<<"\n";
    str = PostfixToInfixConversion(str);    
    cout<<"Infix conversion is : "<<str<<"\n";

    return 0;
}