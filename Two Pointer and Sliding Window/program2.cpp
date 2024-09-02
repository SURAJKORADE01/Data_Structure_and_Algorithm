/*
    Maximum point you can obtain from cards
*/

#include<iostream>
using namespace std;

int findMaximumPoints(int *Arr, int iNo)
{
    int ileftSum = 0;
    int irightSum = 0;
    int imaxSum = 0;

    for(int iCnt = 0; iCnt < iNo; iCnt++)
    {
        ileftSum = ileftSum + Arr[iCnt];
    }

    imaxSum = ileftSum;
    int iRigitIndex = (sizeof(Arr) / sizeof(Arr[0])) - 1;

    for(int iCnt = iNo - 1; iCnt >= 0; iCnt--)
    {
        ileftSum = ileftSum - Arr[iCnt];
        irightSum = irightSum + Arr[iCnt];
        irightSum--;

        imaxSum = max(imaxSum,ileftSum + irightSum);
    }

    return imaxSum;
}

int main()
{
    int Arr[] = {6,2,3,4,7,2,1,7,1};
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = findMaximumPoints(Arr,iValue);
    cout<<"Maximum point obtained are : "<<iRet<<"\n";

    return 0;
}