// missing number

#include<iostream>
using namespace std;

int findMissingNumber(int Arr[], int iLength)
{
    int bFlag = 0;
    int i = 0;

    for(i = 1; i <= iLength; i++)
    {
        bFlag = 0;

        for(int j = 0; j < iLength; j++)
        {
            if(Arr[j] == i)
            {
                bFlag = 1;
                break;
            }
        }

        if(bFlag == 0)
        {
            return i;
        }
    }

    if(i > iLength)
    {
        return -1;
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

    iRet = findMissingNumber(ptr,iSize);

    if(iRet == -1)
    {
        cout<<"\nTheir is No missing number in the array\n";
    }

    else
    {
        cout<<"\nMissing number is : "<<iRet<<"\n";    
    }

    return 0;
}