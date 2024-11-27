// Accept numbers from user and accept one number as NO and find the Last Index of that number 

#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1

int SearchLastOccurrence(int Arr[] , int iLenght ,int iNo)
{
    int iCnt = 0;

    for(iCnt = iLenght-1; iCnt >=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    return iCnt;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of elements :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number that u want to search :");
    scanf("%d",&iValue);

    iRet =  SearchLastOccurrence(ptr,iSize,iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("%d occurred at index is :%d\n",iValue,iRet);
    }

    free(ptr);

    return 0;
}

// Best - O(N)
// Worst - O(N)