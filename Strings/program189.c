// Concat two strings

#include<stdio.h>

// 1 : Travel till end of test
// 2 : copy the data from src to dest
// 3 : Write '\0' at the end of dest

void StrcatX(char *src, char *dest)
{
    // 1 : Travel till end of test
    while(*dest != '\0')
    {
        dest++;
    }

    // 2 : copy the data from src to dest
    while (*src != 0)
    {
        *dest = *src;
        src++;
        dest++;
    }
    
    // 3 : Write '\0' at the end of dest
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    StrcatX(Arr,Brr);

    printf("String after Concatenating is :%s\n",Brr);

    return 0;
}