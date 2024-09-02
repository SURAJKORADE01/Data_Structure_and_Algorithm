#include<iostream>
using namespace std;

bool checkElement(int Arr[], int iLength, int iFind)
{
    bool bFlag = false;

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iFind)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    bool bRet = false;
    int iSearch = 0;

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

    cout<<"\nEnter the element that you want to search : ";
    cin>>iSearch;

    bRet = checkElement(ptr,iSize,iSearch);

    if(bRet == true)
    {
        cout<<"Yes";
    }

    else
    {
        cout<<"No";
    }

    return 0;
}