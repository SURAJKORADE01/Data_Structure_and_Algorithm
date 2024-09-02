// move xero's

#include<iostream>
using namespace std;

void shiftElement(int Arr[], int iLength)
{
    int iFirst = Arr[0];

    for(int iCnt = 0; iCnt < iLength - 1; iCnt++)
    {
        Arr[iCnt] = Arr[iCnt + 1];
    }

    Arr[iLength - 1] = iFirst;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iRet = 0;

    cout<<"Enter the number of elements in the array : ";
    cin>>iSize;

    ptr = (int *)malloc(sizeof(int) * iSize);

    cout<<"Enter the elements of the array : ";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"The elements of the array are : ";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    shiftElement(ptr,iSize);
    
    cout<<"\nNew array after shifting : "<<"\n";

    cout<<"The elements of the array are : ";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    return 0;
}