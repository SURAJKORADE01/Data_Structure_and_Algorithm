#include<iostream>
using namespace std;

void Display(int iNo)
{
    int k = 1;

    for(int i = 1; i <= iNo; i++)
    {
        for(int j = 1; j <= i; j++,k++)
        {
            cout<<k<<"\t";
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