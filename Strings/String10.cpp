#include<bits/stdc++.h>
using namespace std;

void printSubString(string str,int iValue)
{
    int iCount = 0;
    set<string> st;
    string s = "";

    for(int i = 0; i < str.size(); i++)
    {
        s = "";
        
        for(int j = i; j < str.size(); j++)
        {
            s = s + str[j];
            st.insert(s);
        }
    }

    for(const string element : st)
    {
        cout<<element<<"\t";
    }
}    

int main()
{
    string str = "abaaca";
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the distinct element you want : ";
    cin>>iValue;

    printSubString(str,iValue);

    return 0;
}