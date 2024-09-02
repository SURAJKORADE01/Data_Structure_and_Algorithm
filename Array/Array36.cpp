// Binary subarray with sum

#include<iostream>
using namespace std;

int binarySubArray(int Arr[], int iSize, int iNo)
{
    int iSum = 0;
    int iMax = 0;
    int iCount = 0;

    for(int i = 0; i < iSize - 1; i++)
    {
        iSum = Arr[i];

        for(int j = i + 1; j < iSize; j++)
        {
            iSum = iSum + Arr[j];

            if(iSum == iNo)
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int main()
{
    int Arr[] = {0,0,0,0,0};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);

    int iRet = binarySubArray(Arr,iSize,0);
    cout<<"Binary subarray with sum 2 is : "<<iRet<<"\n";

    return 0;
}