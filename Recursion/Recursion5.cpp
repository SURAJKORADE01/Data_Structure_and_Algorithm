// Factorial of a Number

#include<iostream>
using namespace std;

int FactorialNumber(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }

    return iNo * FactorialNumber(iNo - 1);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = FactorialNumber(iValue);
    cout<<"Factorial of number is : "<<iRet<<"\n";

    iRet = FactorialNumber(7);
    cout<<"Factorial of number is : "<<iRet<<"\n";
    

    return 0;
}