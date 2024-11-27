// Accept N number from user and display the Largest number and Smallest in that array

#include<stdio.h>
#include<stdlib.h>

void MinimumMaximum(int Arr[] , int iLenght)
{
    int iMax = Arr[0];  //iMax = 0 nahi karaycha karan toh negative value handle nahi karu shakat
    int iMin = Arr[0];
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }

        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }   
    }
    
    printf("Largest number is :%d\n",iMax);
    printf("Smallest number is :%d\n",iMin);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

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

    MinimumMaximum(ptr,iSize);

    free(ptr);

    return 0;
}

// O(N) - 1dach loop travel kartoy