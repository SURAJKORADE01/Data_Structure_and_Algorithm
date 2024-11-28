// Decimal to Binary

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

string convertToBinary(int iNo)
{
    string str = "";

    if(iNo == 0)
    {
        return "0";
    }

    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        str = str + to_string(iDigit);
        iNo = iNo / 2;
    }

    reverse(str.begin(),str.end());
    return str;
}

int main()
{
    int iValue = 0;
    string sRet = "\0";

    cout<<"Enter the number : ";
    cin>>iValue;

    sRet = convertToBinary(iValue);
    cout<<"Binary number is : "<<sRet<<"\n";

    return 0;
}