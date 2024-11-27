// Copy only number of letters

#include<stdio.h>

void StrCpyX(char *src, char *dest, int iLength)
{
    while((*src != '\0') && (iLength != 0))
    {
        *dest = *src;
        src++;
        dest++;

        iLength--;
    }

    *dest = '\0';   //  IMP
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;
    
    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    printf("Enter the number of character that u want to copy :");
    scanf("%d",&iNo);

    StrCpyX(Arr,Brr,iNo);
    
    printf("String after copy is :%s\n",Brr);

    return 0;
}