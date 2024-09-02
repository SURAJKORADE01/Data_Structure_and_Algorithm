// Sum of first N Natural Numbers using Recursion

/*
    Example 1:
    Input: N=5
    Output: 15
    Explanation: 1+2+3+4+5=15

*/

#include<iostream>
using namespace std;

int Display(int iNo, int iSum = 0)
{
    if(iNo == 0)
    {
        return iSum;
    }

    return Display(iNo - 1, iSum + iNo);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = Display(iValue);
    cout<<"Summation of number is : "<<iRet<<"\n";

    return 0;
}