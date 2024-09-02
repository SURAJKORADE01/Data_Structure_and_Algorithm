#include<iostream>
using namespace std;

void pattern(int iRow, int iCol)
{
    if(iRow != iCol)
    {
        cout<<"Invalid input"<<"\n";
        return;
    }

    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                cout<<"3"<<"\t";
            }

            else if((i == 2) || (i == iRow-1) || (j == 2) || (j == iCol-1))
            {
                cout<<"2"<<"\t";
            }

            else
            {
                cout<<"1"<<"\t";
            }
        }

        cout<<"\n";
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the number of rows : ";
    cin>>iValue1;

    cout<<"Enter the number of columns : ";
    cin>>iValue2;

    pattern(iValue1,iValue2);

    return 0;
}