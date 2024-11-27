// Accept two strings from user and check whether two strings are identical or not

#include<stdio.h>
#include<stdbool.h>

// str1 -> DeMo     -> Case Insensitive
// str2 -> dEmO

bool StricmpX(char *str1, char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 != *str2)          //Letters are different
        {
            if((*str1 >= 'a') && (*str1 <= 'z'))        //First letter is small
            {   //a -> A
                if(*str1 != (*str2 + 32))
                {
                    break;
                }
            }
            else if((*str1 >= 'A') && (*str1 <= 'Z'))   //First letter is capital
            {
                if(*str1 != (*str2 - 32))
                {
                    break;
                }
            }
            else                        //Symbol and digit
            {
                break;
            }
        }
        str1++;
        str2++;   
    }

    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }

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

    bRet = StricmpX(Arr,Brr);

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