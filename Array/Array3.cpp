#include<iostream>
using namespace std;

int secondMaximum(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iMax2 = 0;

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax2 = iMax;
            iMax = Arr[iCnt];          
        }
    }

    return iMax2;
}

int secondMinimum(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iMin2 = 0;

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin2 = iMin;
            iMin = Arr[iCnt];          
        }
    }

    return iMin2;
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

    iRet = secondMaximum(ptr,iSize);
    cout<<"\nSecond maximum element from the array is : "<<iRet<<"\n";

    iRet = secondMinimum(ptr,iSize);
    cout<<"\nSecond minimum element from the array is : "<<iRet<<"\n";

    return 0;
}