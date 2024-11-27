// Accept two strings from user and check whether two strings are identical or not

#include<stdio.h>
#include<stdbool.h>

bool StrCmpX(char *str1, char *str2)
{
    for( ;((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2)); str1++,str2++);     // ; is important
    return ((*str1 == '\0') && (*str2 == '\0'));   
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter the first string :");
    scanf("%[^'\n']s",&Arr);

    printf("Enter the second string :");
    scanf(" %[^'\n']s",&Brr);

    bRet = StrCmpX(Arr,Brr);

    if(bRet == true)
    {
        printf("Both the strings are identical\n");
    }
    
    else
    {
        printf("Both the strings are Different\n");
    }

    return 0;
}