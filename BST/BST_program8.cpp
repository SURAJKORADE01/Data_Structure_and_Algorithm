// Search Single Element in a sorted array

#include<iostream>
using namespace std;

int singleElement(int Arr[], int iSize)
{
    int iSingle = -1;

    if(iSize == 1)
    {
        return Arr[0];
    }

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {   
        if(iCnt == 0)
        {
            if(Arr[iCnt] != Arr[iCnt + 1])
            {
                iSingle = Arr[iCnt];
                break;
            }
        }

        else if(iCnt == iSize - 1)
        {
            if(Arr[iCnt] != Arr[iCnt - 1])
            {
                iSingle = Arr[iCnt];
            }
        }

        else 
        {
            if((Arr[iCnt] != Arr[iCnt + 1]) && (Arr[iCnt] != Arr[iCnt - 1]))
            {
                iSingle = Arr[iCnt];
                break;
            }
        }
    }

    return iSingle;
}

int main()
{
    int Arr[] = {1,1,2,2,3,3,4,4,5,5,6,6};
    int iSize = sizeof(Arr)/sizeof(Arr[0]);

    int iRet = singleElement(Arr,iSize);
    
    if(iRet == -1)
    {
        cout<<"There is no single element in the sorted array\n";
    }

    else
    {
        cout<<"Single element in the sorted array is : "<<iRet<<"\n";
    }

    return 0;
}