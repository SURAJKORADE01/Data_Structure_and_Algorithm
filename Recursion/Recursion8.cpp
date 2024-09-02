#include<bits/stdc++.h>
using namespace std;

int fibonacci(int iNo)
{
    if(iNo <= 1)
    {
        return iNo;
    }

    int last = fibonacci(iNo - 1);
    int slast = fibonacci(iNo - 2);

    return last + slast;
}

void fibonacciDisplay(int iNo)
{
    if(iNo == 0)
    {
        cout<<0<<"\n";
    }

    else if(iNo == 1)
    {
        cout<<0<<" "<<1<<"\n";
    }

    else
    {
        int Fibo[iNo + 1];

        Fibo[0] = 0;
        Fibo[1] = 1;

        for(int iCnt = 2; iCnt <= iNo; iCnt++)
        {
            Fibo[iCnt] = Fibo[iCnt - 1] + Fibo[iCnt - 2];
        }

        cout<<"Fibonachi series upto "<<iNo<<" element is :\n";
        for(int iCnt = 0; iCnt <= iNo; iCnt++)
        {
            cout<<Fibo[iCnt]<<"\t";
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    fibonacciDisplay(iValue);

    return 0;
}