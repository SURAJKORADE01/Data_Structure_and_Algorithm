// Check if string is palindrome or not

#include<iostream>
using namespace std;

bool checkPalindrome(char *str,int iStart,int iEnd)
{
    if(iStart >= iEnd)
    {
        return true;
    }

    if(str[iStart] != str[iEnd])
    {
        return false;
    }

    return checkPalindrome(str,iStart + 1,iEnd - 1);
}

int main()
{
    char Arr[20];
    bool bRet = false;

    cout<<"Enter the string : ";
    cin>>Arr;

    int iSize = 0;

    while(Arr[iSize] != '\0')
    {
        iSize++;
    }

    bRet = checkPalindrome(Arr,0,iSize-1);

    if(bRet == true)
    {
        cout<<"Strings is Palindrome\n";
    }

    else
    {
        cout<<"Strings is NOT Palindrome\n";
    }


    return 0;
}