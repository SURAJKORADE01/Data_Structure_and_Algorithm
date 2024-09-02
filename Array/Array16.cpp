// majority element

#include<bits/stdc++.h>
using namespace std;

// vector<int> sortbyZeroAnsOne(vector<int> Arr)
// {
//     vector<int> iResult;
//     int iSize = Arr.size();

//     for(int i = 0; i < iSize; i++)
//     {
//         iResult.push_back(Arr[i]);
//     }

//     sort(iResult.begin(),iResult.end());

//     return iResult;
// }

void sortArray(int Arr[], int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        for(int j = 0; j < iSize - i - 1; j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                int temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }
}

void sortbyZeroAnsOne(int Arr[], int iSize)
{
    int iLow = 0;
    int iMid = 0;
    int iHigh = iSize - 1;

    while(iMid <= iHigh)
    {
        if(Arr[iMid] == 0)
        {
            swap(Arr[iLow],Arr[iMid]);
            iLow++;
            iMid++;
        }

        else if(Arr[iMid] == 1)
        {
            iMid++;
        }

        else
        {
            swap(Arr[iMid],Arr[iHigh]);
            iHigh--;
        }
    }

}

int main()
{
    int iSize = 0;

    int Arr[] = {2,0,2,1,1,0};
    iSize = sizeof(Arr) / sizeof(Arr[0]);

    sortbyZeroAnsOne(Arr,iSize);

    cout<<"After sorting : "<<"\n";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    return 0;
}