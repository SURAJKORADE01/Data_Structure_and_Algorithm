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
        void Insertion();
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

void ArrayX :: Insertion()
{
    int i = 0, j = 0;
    int selected = 0;

    for(i = 1; i < iSize; i++)
    {
        for(j = i-1,selected = Arr[i];((j >= 0) && (Arr[j] > selected)) ;j--)
        {
            Arr[j+1] = Arr[j];
        }
        Arr[j+1] = selected;
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

    aobj->Insertion();
    aobj->Display();

    return 0;
}