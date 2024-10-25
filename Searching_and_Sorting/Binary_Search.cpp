// Binary Search

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
        bool Binary(int);
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
    cout<<"Enter the elements of the array \n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    cout<<"\nThe elements of the array are \n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
}

bool ArrayX :: Binary(int iNo)
{
    bool bFlag = false;

    int iStart = 0;
    int iMid = 0;
    int iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + (iEnd - iStart) / 2;

        if(Arr[iMid] == iNo || Arr[iStart] == iNo || Arr[iEnd] == iNo)
        {
            bFlag = true;
            break;
        }

        if(Arr[iMid] > iNo)
        {
            iEnd = iMid - 1;
        }

        else if(Arr[iMid] < iNo)
        {
            iStart = iMid + 1;
        }
    }

    return bFlag;
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number of elements in the array : ";
    cin>>iValue;

    ArrayX *aobj = new ArrayX(iValue);

    aobj->Accept();
    aobj->Display();

    int iNo = 0;
    cout<<"\nEnter the element that you want tot search : ";
    cin>>iNo;

    bool bRet = aobj->Binary(iNo);

    if(bRet == true)
    {
        cout<<"\n"<<iNo<<" is present in the Array\n";
    }
    
    else
    {
        cout<<"\n"<<iNo<<" is NOT present in the Array\n";
    }

    return 0;
}