// rearrange array by sign

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeBySign(vector<int> Arr)
{
    int iSize = Arr.size();

    vector<int> Rearrange(iSize);
    int iPos = 0;
    int iNeg = 1;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] > 0) && (iPos < iSize))
        {
            Rearrange[iPos] = Arr[iCnt];
            iPos += 2; 
        } 

        else if((Arr[iCnt] < 0) && (iNeg < iSize))
        {
            Rearrange[iNeg] = Arr[iCnt];
            iNeg += 2;
        }
    } 

    return Rearrange;
}   

int main()
{
    vector<int>Arr = {1,2,3,-1,-2,-3};
    vector<int>iRet = rearrangeBySign(Arr);

    cout<<"The array becomes : ";

    for(auto i : iRet)      
    {
        cout<<i<<"\t";
    }

    return 0;
}