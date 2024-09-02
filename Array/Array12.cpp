// longest subarray with sum

#include<iostream>
using namespace std;

void longestSubArray(int Arr[], int iLength, int iSum)
{
    int iResult = 0;
    int i = 0, j = 0;
    int iTemp = 0;
    int iCount = 0;

    for(i = 0; i < iLength; i++)
    {
        iResult = Arr[i];
        iCount = 0;

        for(j = i + 1; j < iLength; j++)
        {
            iResult = iResult + Arr[j];
            iCount++;

            if((iResult == iSum) && (iCount > iTemp))
            {
                iTemp = iCount;
                break;
            }

            if(iResult > iSum)
            {
                break;
            }
        } 
    }
    
    cout<<"Value of iTemp is : "<<(iTemp + 1)<<"\n";
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iSum = 0; 

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

    cout<<"\nEnter the sum that you find : ";
    cin>>iSum;

    longestSubArray(ptr,iSize,iSum);
    
    return 0;
}