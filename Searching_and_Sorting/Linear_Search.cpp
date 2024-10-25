// Linear Search

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
        bool LinearSearch(int);
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

bool ArrayX :: LinearSearch(int iNo)
{
    bool bFlag = false;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
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

    bool bRet = aobj->LinearSearch(iNo);

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