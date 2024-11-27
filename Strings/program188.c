// Copy Reverse string

#include<stdio.h>

void StrcpyRevX(char *src, char *dest)
{
    int iLenght = 0;

    while(*src != '\0')
    {
        src++;
        iLenght++;
    }

    src--;

    for(; iLenght != 0; iLenght--)
    {
        *dest = *src;
        src--;
        dest++;
    }

    *dest = '\0'; 
}

int main()
{
    char Arr[20];
    char Brr[20];
    
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    StrcpyRevX(Arr,Brr);

    printf("String after reversing is :%s\n",Brr);

    return 0;
}