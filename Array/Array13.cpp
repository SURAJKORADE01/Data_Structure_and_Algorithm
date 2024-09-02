// merge sorted array

#include<iostream>
using namespace std;

void mergeSortedArray(int Arr1[], int iLength1, int Arr2[], int iLength2)
{
    int iSize = iLength1 + iLength2;
    int Arr[iSize];

    int iFirst = 0;
    int iSecond = 0;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr1[iFirst] < Arr2[iSecond])
        {
            Arr[iCnt] = Arr1[iFirst];
            iFirst++;
        }

        else
        {
            Arr[iCnt] = Arr2[iSecond];
            iSecond++;
        }
    }

    cout<<"\nThe new array becomes :\n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
}

int main()
{
    int iSize1 = 0;
    int iSize2 = 0;
    int *ptr1 = NULL;
    int *ptr2 = NULL; 

    cout<<"Enter the number of elements in the first array : ";
    cin>>iSize1;

    cout<<"Enter the number of elements in the second array : ";
    cin>>iSize2;

    ptr1 = new int[iSize1];
    ptr2 = new int[iSize2];
    
    cout<<"Enter the elements of the first array : \n";

    for(int iCnt = 0; iCnt < iSize1; iCnt++)
    {
        cin>>ptr1[iCnt];
    }

    cout<<"Enter the elements of the second array : \n";

    for(int iCnt = 0; iCnt < iSize2; iCnt++)
    {
        cin>>ptr2[iCnt];
    }

    cout<<"The elements of the first array are : \n";

    for(int iCnt = 0; iCnt < iSize1; iCnt++)
    {
        cout<<ptr1[iCnt]<<"\t";
    }

    cout<<"\n";

    cout<<"The elements of the second array are : \n";

    for(int iCnt = 0; iCnt < iSize2; iCnt++)
    {
        cout<<ptr2[iCnt]<<"\t";
    }
    

    mergeSortedArray(ptr1,iSize1,ptr2,iSize2);
    
    return 0;
}