// Accept N number from user and display the Smallest number in that array

#include<stdio.h>
#include<stdlib.h>

int Minumum(int Arr[] , int iLenght)
{
    int iMin = Arr[0];  // iMin = 0 nahi karaycha karan toh negative value handle nahi karu shakat
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of the array are :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Minumum(ptr,iSize);
    printf("Smallest number is :%d\n",iRet);

    free(ptr);

    return 0;
}

// O(N)