// remove duplicate

#include<iostream>
using namespace std;

int removeDuplicate(int Arr[], int iLength)
{
    int i = 0;

    for(int j = 1; j < iLength; j++)
    {
        if(Arr[i] != Arr[j])
        {
            i++;
            Arr[i] = Arr[j];
        }
    }

    cout<<"Value of i is : "<<i<<"\n";

    return i;
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

    iRet = removeDuplicate(ptr,iSize);
    
    cout<<"\nNew array aftere removing duplicate : "<<"\n";

    for(int iCnt = 0; iCnt <= iRet; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    return 0;
}