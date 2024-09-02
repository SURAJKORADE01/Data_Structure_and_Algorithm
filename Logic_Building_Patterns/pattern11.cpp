#include<iostream>
using namespace std;

void Display(int iNo)
{
    int k = 0;

    for(int i = 0; i < iNo; i++)
    {

        if(i % 2 == 0)
        {
            k = 1;
        }

        else
        {
            k = 0;
        }

        for(int j = 0; j <= i; j++)
        {
            cout<<k<<"\t";
            k = 1 - k;
        }

        cout<<"\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number of rows : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}