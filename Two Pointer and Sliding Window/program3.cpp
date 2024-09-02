// Number of substring containing all three characters
// Input: s = "abcabc"
// Output: 10
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are 
// "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 

#include<bits/stdc++.h>
using namespace std;

int NumberOfSubstring(string str)
{
    int iCount = 0;

    for(int i = 0; i < str.size(); i++)
    {
        int iHash[3] = {0};

        for(int j = i; j < str.size(); j++)
        {
            if(str[j] == 'a')   iHash[0] = 1;
            if(str[j] == 'b')   iHash[1] = 1;
            if(str[j] == 'c')   iHash[2] = 1;

            if(iHash[0] + iHash[1] + iHash[2] == 3)
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int NumberOfSubstringMethod2(string str)
{
    int iLastSeen[3] = {-1,-1,-1};
    int iCount = 0;

    for(int i = 0; i < str.size(); i++)
    {
        iLastSeen[str[i] - 'a'] = i;

        if(iLastSeen[0] != -1 && iLastSeen[1] != -1 && iLastSeen[2] != -1)
        {
            iCount = iCount + (1 + min({iLastSeen[0],iLastSeen[1],iLastSeen[2]}));
        }
    }

    return iCount;
}

int main()
{
    string str = "abcabc";
    int iRet = 0;

    iRet = NumberOfSubstringMethod2(str);
    cout<<"Number of possible substring are : "<<iRet<<"\n";

    return 0;
}