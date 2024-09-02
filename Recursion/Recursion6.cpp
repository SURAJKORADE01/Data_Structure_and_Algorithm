// Reverse the array

#include<iostream>
using namespace std;

void reverseArray(int *Arr, int iStart, int iEnd)
{
    if(iStart < iEnd)
    {
        swap(Arr[iStart],Arr[iEnd]);
        reverseArray(Arr,iStart + 1,iEnd - 1);
    }
}

int main()
{
    int Arr[] = {1,2,3,4,5};
    int iSize = sizeof(Arr)/sizeof(Arr[0]);

    int iStart = 0;
    int iEnd = iSize - 1;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n\n";

    reverseArray(Arr,iStart,iEnd);

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    return 0;
}