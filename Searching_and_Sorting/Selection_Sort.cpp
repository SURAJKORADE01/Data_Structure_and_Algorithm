#include<iostream>
using namespace std;

void selectionSort(int Arr[],int iSize)
{
    int min_index = 0;
    int iTemp = 0;

    for(int i = 0; i < iSize - 1; i++)
    {
        min_index = i;

        for(int j = i + 1; j < iSize; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }

        iTemp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = iTemp;
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    cout<<"Enter the number of elements in the array : ";
    cin>>iSize;

    ptr = new int[iSize];

    cout<<"Enter the number of elements of the array \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"\nThe array before sorting :\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    selectionSort(ptr,iSize);

    cout<<"\nThe array after sorting :\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }
    
    return 0;
}