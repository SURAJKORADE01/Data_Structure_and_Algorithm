// Longest Substring Without Repeating Characters

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

#include<iostream>
#include<string.h>
using namespace std;

int lengthOfSubstring(string str)
{
    int maxLength = 0;
    int iHash[256];
    memset(iHash,-1,sizeof(iHash));

    int iLeft = 0;
    int iRight = 0;

    int iSize = str.size();

    while(iRight < iSize)
    {
        if(iHash[str[iRight]] != -1)
        {
            if(iHash[str[iRight]] >= iLeft)
            {
                iLeft = iHash[str[iRight]] + 1;
            }
        }

        maxLength = max(maxLength, (iRight - iLeft + 1));
        iHash[str[iRight]] = iRight;
        iRight++;
    }

    return maxLength;
}

int main()
{
    string str = "abcdeabcdef";

    int iRet = 0;
    iRet = lengthOfSubstring(str);
    cout<<"Length of longest substring is : "<<iRet<<"\n";

    return 0;
}