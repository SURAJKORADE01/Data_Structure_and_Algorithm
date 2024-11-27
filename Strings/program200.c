// Accpet string from user and reverse the string in place

#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')     //O(N)
    {
        end++;
    }
    end--;

    while(start < end)      // 100 < 104    O(N/2)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string :");
    scanf("%s",&Arr);       //Hello

    strrevX(Arr);

    printf("Reverse string is :%s\n",Arr);

    return 0;
}

// O(N) - N + N/2