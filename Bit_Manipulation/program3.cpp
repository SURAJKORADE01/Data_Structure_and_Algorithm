// Swap two numbers

#include<iostream>
using namespace std;

// Approach 1
void SwapApproach_1(int &iNo1,int &iNo2)
{
    int iTemp = 0;

    iTemp = iNo1;
    iNo1 = iNo2;
    iNo2 = iTemp; 
}

// Approach 2
void SwapApproach_2(int *iNo1, int *iNo2)
{
    int Temp = *iNo1;
    *iNo1 = *iNo2;
    *iNo2 = Temp;
}

void SwapApproach_3(int &iNo1, int &iNo2)
{
    iNo1 = iNo1 + iNo2;
    iNo2 = iNo1 - iNo2;
    iNo1 = iNo1 - iNo2;
}

void SwapApproach_4(int &iNo1, int &iNo2)
{
    iNo1 = iNo1 ^ iNo2;
    iNo2 = iNo1 ^ iNo2;
    iNo1 = iNo1 ^ iNo2;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter first number : ";
    cin>>iValue1;

    cout<<"Enter second number : ";
    cin>>iValue2;
    
    cout<<"Before Swapping, First number is : "<<iValue1<<" and second number is : "<<iValue2<<"\n";

    SwapApproach_4(iValue1,iValue2);

    cout<<"After Swapping, First number is : "<<iValue1<<" and second number is : "<<iValue2<<"\n";

    return 0;
}