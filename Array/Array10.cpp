// maximum consecutive 1's

#include<iostream>
using namespace std;

int maxConsecutiveNumber(int Arr[], int iLength)
{
    int iSum = 0;
    int iTemp = 0;

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 1)
        {
            iSum++;       
        }

        else
        {
            iTemp = iSum;
            iSum = 0;
        }
    }

    if(iSum > iTemp)
    {
        return iSum;
    }

    else
    {
        return iTemp;
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

    iRet = maxConsecutiveNumber(ptr,iSize);
    cout<<"\nMaximum consecutive 1's are : "<<iRet<<"\n";

    return 0;
}