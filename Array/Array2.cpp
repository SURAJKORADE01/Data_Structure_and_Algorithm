#include<iostream>
using namespace std;

void reverseArray(int Arr[], int iLength)
{
    int itemp = 0;
    int iStart = 0;
    int iEnd = iLength - 1;

    while(iStart < iEnd)
    {
        itemp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = itemp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    cout<<"Enter the number of elements in the array : ";
    cin>>iSize;

    ptr = (int *)malloc(sizeof(int) * iSize);

    if(ptr == NULL)
    {
        cout<<"Unable to allocate memory"<<"\n";
        return -1;
    }

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

    reverseArray(ptr,iSize);

    cout<<"\nThe elements of the array are : ";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }
    

    return 0;
}