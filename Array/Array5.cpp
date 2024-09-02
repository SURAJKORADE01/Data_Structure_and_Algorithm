// move xero's

#include<iostream>
using namespace std;

void moveZeros(int Arr[], int iLength)
{
    int iCount = 0;
  
    for (int i = 0; i < iLength; i++) 
    {
        if (Arr[i] != 0)
        {
            Arr[iCount] = Arr[i];
            iCount++;
        }
            
    }
        
    while (iCount < iLength) 
    {
        Arr[iCount] = 0;
        iCount++;
    }
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

    moveZeros(ptr,iSize);
    
    cout<<"\nNew array aftere moving zeros : "<<"\n";

    cout<<"The elements of the array are : ";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    return 0;
}