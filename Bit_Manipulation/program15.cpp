// Print all divisors of a number.

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int> PrintAllDivisors(int iNo)
{
    vector<int> iResult;

    for(int iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iResult.push_back(iCnt);
        }
    }

    return iResult;
}

vector<int> PrintAllDivisors_Better(int iNo)
{
    vector<int> iResult;

    for(int iCnt = 1; iCnt <= sqrtf(iNo); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iResult.push_back(iCnt);

            if(iNo / iCnt != iCnt)
            {
                iResult.push_back(iNo / iCnt);
            }
        }
    }

    return iResult;
}

int main()
{
    int iValue = 0;
    vector<int> Arr(iValue/2);

    cout<<"Enter the number : ";
    cin>>iValue;

    Arr = PrintAllDivisors_Better(iValue);

    cout<<"Divisors of "<<iValue<<" are : \n";

    for(int iCnt = 0; iCnt < Arr.size(); iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    return 0;
}