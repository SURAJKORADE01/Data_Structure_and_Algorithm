#include<iostream>
using namespace std;

void shiftToLeft(int Arr[], int iLength, int iPos)
{
    int itemp[iPos];
    int i = 0;

    for(int iCnt = 0; iCnt < iPos; iCnt++)
    {
        itemp[iCnt] = Arr[iCnt];
    }

    for(int iCnt = iPos; iCnt < iLength; iCnt++, i++)
    {
        Arr[i] = Arr[iCnt]; 
    }

    int j = 0;

    for(int iCnt = i; iCnt < iLength; iCnt++,j++)
    {
        Arr[iCnt] = itemp[j];
    }
}

void shiftToRight(int Arr[], int iLength, int iPos)
{
    int Temp[iPos];
    int iIterator = iLength - 1;

    for(int iCnt = iPos - 1; iCnt >= 0; iCnt--,iIterator--)
    {
        Temp[iCnt] = Arr[iIterator];
    }
    

    
    // int iTemp2 = iPos;
    // for(int i = iLength - 1; iTemp2 >= 0 ;iTemp2--,i--)
    // {
    //     Arr[i] = Arr[iTemp2];
    // }

    // for(int iCnt = 0; iCnt < iPos; iCnt++)
    // {
    //     Arr[iCnt] = Temp[iCnt];
    // }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iShift = 0; 

    cout<<"Enter the number of elements in the array : ";
    cin>>iSize;

    ptr = new int[iSize];

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

    cout<<"\nEnter the position to which you want to do shifting : ";
    cin>>iShift;

    // shiftToLeft(ptr,iSize,iShift);
    
    // cout<<"\nNew array after shifting : "<<"\n";

    // cout<<"The elements of the array are : ";

    // for(int iCnt = 0; iCnt < iSize; iCnt++)
    // {
    //     cout<<ptr[iCnt]<<"\t";
    // }

    shiftToRight(ptr,iSize,iShift);
    
    cout<<"\nNew array after shifting : "<<"\n";

    cout<<"The elements of the array are : ";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    return 0;
}