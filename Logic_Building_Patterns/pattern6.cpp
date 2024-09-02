#include<iostream>
using namespace std;

void Display(int iRow, int iCol)
{
    for(int i = iRow; i >= 1; i--)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(i >= j)
            {
                cout<<j<<"\t";
            }
        }

        cout<<"\n";
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the number of rows : ";
    cin>>iValue1;

    cout<<"Enter the number of colums : ";
    cin>>iValue2;

    Display(iValue1,iValue2);

    return 0;
}