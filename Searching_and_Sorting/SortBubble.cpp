#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int iSize;
        int *Arr;

        ArrayX(int);
        ~ArrayX();

        void Accept();
        void Display();
        void Bubblesort();
};

ArrayX :: ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new int[iSize];
}

ArrayX :: ~ArrayX()
{
    delete []Arr;
}

void ArrayX :: Accept()
{
    cout<<"Enter the elements of the array : ";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    cout<<"\nThe elements of the array : ";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
}

void ArrayX :: Bubblesort()
{
    int iTemp = 0;

    for(int i = 0; i < iSize; i++)
    {
        for(int j = 0; j < iSize - i - 1; j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                iTemp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = iTemp;
            }
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number of elements in the array : ";
    cin>>iValue;

    ArrayX *aobj = new ArrayX(iValue);

    aobj->Accept();
    aobj->Display();

    aobj->Bubblesort();
    aobj->Display();

    return 0;
}