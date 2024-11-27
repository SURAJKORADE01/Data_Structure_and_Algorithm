// Concat two strings

#include<stdio.h>

void StrncatX(char *src, char *dest, int iLength)
{
    // 1 : Travel till end of test
    while(*dest != '\0')
    {
        dest++;
    }

    // 2 : copy the data from src to dest
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
        
        iLength--;
        if(iLength == 0)
        {
            break;
        }
    }
    
    // 3 : Write '\0' at the end of dest
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;
    
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    printf("Enter the number of letters that u want to cancat :");
    scanf("%d",&iNo);

    StrncatX(Arr,Brr,iNo);

    printf("String after Concatenating is :%s\n",Brr);

    return 0;
}