#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        cout<<iCnt<<"\n";
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number that you want to print : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}