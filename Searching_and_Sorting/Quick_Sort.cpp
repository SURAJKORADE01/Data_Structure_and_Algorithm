/*
    Merge sort has space complexity of O(N) 
    To overcome this, we use Quick sort which uses the space complexity of O(1)

Steps : 

1) Pick pivot element and place it in its correct place in sorted array
2) Smaller on the left and Larger on the right
3) Perform sorting og left and right half

*/

#include<bits/stdc++.h>
using namespace std;

int Partition(vector<int> &Arr, int iLow, int iHigh)
{
    int iPivot = Arr[iLow];         // 1 -> pick pivot
    int i = iLow;
    int j = iHigh;

    while(i < j)
    {
        while(Arr[i] <= iPivot && i <= iHigh - 1)      // 2 -> smaller on left
        {
            i++;
        }

        while(Arr[j] > iPivot && j >= iLow + 1)        // 2 -> greater on right
        {
            j--;
        }

        if(i < j)
        {
            swap(Arr[i],Arr[j]);        // swap larger and smaller element
        }
    }

    swap(Arr[iLow],Arr[j]);     // find the correct position swap pivot and lower element

    return j;
}

void QuickSort(vector<int> &Arr, int iLow, int iHigh)
{
    if(iLow < iHigh)
    {
        int iPartition_index = Partition(Arr,iLow,iHigh);
        QuickSort(Arr,iLow,iPartition_index - 1);
        QuickSort(Arr,iPartition_index+1, iHigh);
    }
}

vector<int> Quick(vector<int> &Arr)
{
    QuickSort(Arr,0,Arr.size() - 1);
    return Arr;
}

int main()
{

    vector<int> Arr = {4,6,2,5,7,9,1,3};
    int iSize = Arr.size();

    cout<<"Array before sorting : ";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }   
    cout<<"\n\n";
    Arr = Quick(Arr);

    cout<<"Array after sorting : ";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    return 0;
}