#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iRow;
        int iCol;

        Pattern(int i, int j)
        {
            iRow = i;
            iCol = j;
        }

        void Display()
        {
            for(int i = 1; i <= iRow; i++)
            {
                for(int j = 1; j <= iCol; j++)
                {
                    cout<<"*"<<" ";
                }

                cout<<"\n";
            }
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the number of rows : ";
    cin>>iValue1;

    cout<<"Enter the number of colums : ";
    cin>>iValue2;

    Pattern *pobj = new Pattern(iValue1,iValue2);
    
    pobj->Display();

    return 0;
}