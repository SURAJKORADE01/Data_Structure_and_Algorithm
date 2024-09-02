// number appear one's

#include<iostream>
using namespace std;

int numberAppearOnce(int Arr[], int iLength)
{
    int iNo = 0;
    int iCount = 0;

    for(int i = 0; i < iLength; i++)
    {
        iNo = Arr[i];
        iCount = 0;

        for(int j = 0; j < iLength; j++)
        {
            if(Arr[j] == iNo)
            {
                iCount++;
            }
        }

        if(iCount == 1)
        {
            return iNo;
        }
    }

    return -1;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iRet = 0; 

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

    iRet = numberAppearOnce(ptr,iSize);

    if(iRet == -1)
    {
        cout<<"\nEvery number appear more than once\n";
    }

    else
    {
        cout<<"\nThe number that appear once is : "<<iRet<<"\n";
    }
    
    return 0;
}