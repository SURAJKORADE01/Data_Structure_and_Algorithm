#include<iostream>
using namespace std;

void Display(int iRow, int iCol)
{
    char ch = '\0';

    for(int i = 1,ch = 'A'; i <= iRow; i++,ch++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<char(ch)<<"\t";
        }

        cout<<"\n";
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the number of rows : ";
    cin>>iValue1;

    cout<<"Enter the number of columns : ";
    cin>>iValue2;
    
    Display(iValue1,iValue2);

    return 0;
}