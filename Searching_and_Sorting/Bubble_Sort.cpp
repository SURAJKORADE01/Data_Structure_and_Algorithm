#include<iostream>
using namespace std;

void bubbleSort(int Arr[],int iSize)
{
    int iTemp = 0;

    for(int i = 0; i < iSize; i++)
    {
        for(int j = 0; j < iSize - i - 1; j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                iTemp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = iTemp;            
            }
        }
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

    bubbleSort(ptr,iSize);

    cout<<"\nThe array after sorting :\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }
    
    return 0;
}