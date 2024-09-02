#include<iostream>
using namespace std;

int calculateProfit(int Arr[], int iSize)
{
    int iSum = 0;
    int iMax = 0;

    for(int i = 0; i < iSize; i++)
    {
        for(int j = i+1; j < iSize; j++)
        {
            if(Arr[j] > Arr[i])
            {
                iSum = Arr[j] - Arr[i];

                if(iSum > iMax)
                {
                    iMax = iSum;
                }
            }
        }
    }

    return iMax;
}

int main()
{
    int iRet = 0;
    int Arr[] = {7,6,4,3,1};
    int iSize = sizeof(Arr) / sizeof(Arr[0]);

    iRet = calculateProfit(Arr,iSize);
    cout<<"Maximum profit is : "<<iRet<<"\n";

    return 0;
}