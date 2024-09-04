// Postfix to Prefix conversion

// Step 1 : Operand -> push into the stack
// Step 2 : Operator -> place operator first and then place second and first element

// convertor = operator + top2 + top1

#include<bits/stdc++.h>
using namespace std;

string PostfixToPreFixConversion(string str)
{
    int i = 0;
    stack<string> st;
    string convertor = "";

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

            convertor = str[i] + cTop2 + cTop1;
            st.push(convertor);
        }

        i++;
    }

    return st.top();
}

int main()
{
    string str = "AB-DE+F*/";

    cout<<"Postfix string is : "<<str<<"\n";
    str = PostfixToPreFixConversion(str);
    cout<<"Prefix conversion is : "<<str<<"\n";

    return 0;
}