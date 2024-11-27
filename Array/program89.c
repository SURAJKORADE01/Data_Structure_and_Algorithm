//Accept N number from user and accept NO and check whether NO  is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// AVOID is LOGIC
bool Search(int Arr[] , int iLenght ,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iLenght; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(Arr[iCnt] == iNo)    //AVOIDDDDDDDDDDDDDDDDDDDDDD -> Number nahi milalla tr segmentation fault yeu shakto
    {
        return true;   
    }
    else
    {
        return false;
    }

}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;

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

    printf("Enter the number that u want to search :");
    scanf("%d",&iValue);

    printf("Elements of the array are :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    bRet = Search(ptr,iSize,iValue);
    
    if(bRet == true)
    {
        printf("%d is present in the array\n",iValue);
    }
    else
    {
        printf("%d is not present in the array\n",bRet);
    }

    free(ptr);

    return 0;
}