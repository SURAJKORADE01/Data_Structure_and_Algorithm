// Number appear repeated and Missing number

#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatedNumber(vector<int> Arr)
{
    int iSize = Arr.size();
    vector<int> iAns;
    int iRepeated = -1;
    int iMissing = -1;
    int iValue = 0;
    int iCount = 0;

    for(int i = 1; i <= iSize; i++)
    {
        iCount = 0;
        iValue = i;

        for(int j = 0; j < iSize; j++)
        {
            if(Arr[j] == iValue)
            {
                iCount++;
            }

            if(iCount == 2)
            {
                iRepeated = iValue;
                break;
            }
        }

        if(iCount == 0)
        {
            iMissing = i;
        }
    }

    if((iMissing == -1) && (iRepeated == -1))
    {
        return {-1,-1};
    }

    else
    {
        return {iRepeated,iMissing};
    }
}

int main()
{
    vector<int> Arr = {3,1,2,3,5};
    vector<int> iResult = findMissingRepeatedNumber(Arr);

    if((iResult[0] == -1) && (iResult[1] == -1))
    {
        cout<<"There is not missing and repeated number in the array\n";
    }

    else
    {
        cout<<"The Repeating number is : "<<iResult[0]<<" and missing number : "<<iResult[1]<<"\n";
    
    }
    
    return 0;
}