// Accept the number from user and convert it into binary 

#include<iostream>
using namespace std;

void DisplayBinary(int iNo1, int iNo2)
{
    int iResult = 0;

    iResult = iNo1 & iNo2;
    cout<<"Result of & is :"<<iResult<<"\n";

    iResult = iNo1 | iNo2;
    cout<<"Result of | is :"<<iResult<<"\n";

    iResult = iNo1 ^ iNo2;
    cout<<"Result of ^ is :"<<iResult<<"\n";
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter 1st number :";
    cin>>iValue1;

    cout<<"Enter 2nd number :";
    cin>>iValue2;

    DisplayBinary(iValue1,iValue2);

    return 0;
}

/*
No1  : 73
No2  : 98

No1     1   0   0   1   0   0   1
No2     1   1   0   0   0   1   0
-----------------------------------------
&       1   0   0   0   0   0   0               (64)

No1     1   0   0   1   0   0   1
No2     1   1   0   0   0   1   0
-----------------------------------------
|       1   1   0   1   0   1   1               (107)

No1     1   0   0   1   0   0   1
No2     1   1   0   0   0   1   0
-----------------------------------------
^       0   1   0   1   0   1   1               (43)


*/