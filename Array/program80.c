// Accept n number from and count the number of odd elements 

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[] , int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()              
{
    int iSize = 0;      
    int *ptr = NULL;    
    int iCnt = 0;
    int iRet = 0;
 
    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    ptr = (int *) malloc (iSize * sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Elements of array are :\n");
    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = CountOdd(ptr,iSize);
    printf("Odd elements are :%d\n",iRet);

    free(ptr);

    return 0;
}

// Time complexity is O(N)