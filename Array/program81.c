// Accept n number from and display the average of number

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[] , int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return ((float)iSum / (float) iLength);
}

int main()              
{
    int iSize = 0;      
    int *ptr = NULL;    
    int iCnt = 0;
    float iRet = 0.0f;
 
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

    iRet = Average(ptr,iSize);
    printf("Average of elements are :%f\n",iRet);

    free(ptr);

    return 0;
}