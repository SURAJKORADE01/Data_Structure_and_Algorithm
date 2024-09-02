#include<iostream>
using namespace std;

void Conquer(int Arr[], int iLow, int iMid, int iHigh)
{
    int iSize = iHigh - iLow + 1;
    int temp[iSize];

    int iLeft = iLow;       // 1st array 
    int iRight = iMid + 1;  // 2nd array
    int i = 0;

    while(iLeft <= iMid && iRight <= iHigh)
    {
        if(Arr[iLeft] <= Arr[iRight])
        {
            temp[i] = Arr[iLeft];
            iLeft++;
            i++;
        }

        else
        {
            temp[i] = Arr[iRight];
            iRight++;
            i++;
        }
    }

    while(iLeft <= iMid)
    {
        temp[i] = Arr[iLeft];
        iLeft++;
        i++;
    }

    while(iRight <= iHigh)
    {
        temp[i] = Arr[iRight];
        iRight++;
        i++;
    }

    for(int i = 0, j = iLow; i < iSize; i++, j++)
    {
        Arr[j] = temp[i];
    }
}

void Divide(int Arr[], int iLow, int iHigh)
{
    if(iLow >= iHigh)
    {
        return;
    }

    int iMid = (iLow + (iHigh - iLow)) / 2;     // (iLow + iHigh) / 2 -> Ilow + iHigh kela tr navin array ha orininal array peksha motha banto aani mg size jasta mule space cha issue yeu shakto

    Divide(Arr,iLow,iMid);
    Divide(Arr,iMid + 1,iHigh);
    Conquer(Arr,iLow,iMid,iHigh);  
}

int main()
{
    int Arr[] = {6,3,9,5,2,8};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);

    cout<<"Array Before sorting \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    Divide(Arr,0,iSize-1);

    cout<<"Array After sorting :\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    return 0;
}