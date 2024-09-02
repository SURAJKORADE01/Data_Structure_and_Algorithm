/*
    Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
    Output: 6 7 1 2 3 4 5
*/

#include<iostream>
using namespace std;

// void rotateToLeft(int Arr[],int iSize,int iPos)
// {
//     int Temp[iPos];
//     int i = 0;
//     int j = 0;

//     for(int iCnt = 0; iCnt < iPos; iCnt++)
//     {
//         Temp[iCnt] = Arr[iCnt];
//     } 
    
//     for(int iCnt = iPos; iCnt < iSize; iCnt++, i++)
//     {
//         Arr[i] = Arr[iCnt];
//     }
 
//     for(int iCnt = iPos + 1; iCnt <= iSize; iCnt++, j++)
//     {
//         Arr[iCnt] = Temp[j];
//     }
// }

void Display(int Arr[], int iSize)
{
    int iValue = iSize;

    cout<<"\nThe elements of the array are : ";

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n\n";
}

void reverse(int Arr[], int iStart, int iEnd)
{
    int iTemp = 0;
   
    while(iStart <= iEnd)
    {
        iTemp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = iTemp;

        iStart++;
        iEnd--;
    }   
}

// void rotateToRight(int Arr[],int iSize,int iPos)
// {
//     reverse(Arr,0,iSize - iPos - 1);
//     Display(Arr,iSize);

//     reverse(Arr,iSize-iPos,iSize-1);
//     Display(Arr,iSize);

//     reverse(Arr,0,iSize-1);
//     Display(Arr,iSize);
// }

void rotateToLeft(int Arr[], int iSize, int iPos)
{
    reverse(Arr,0,iSize-1);
    Display(Arr,iSize);

    reverse(Arr,0,iSize-iPos-1);
    Display(Arr,iSize);

    reverse(Arr,iSize-iPos,iSize-1);
    Display(Arr,iSize);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iPos = 0;

    cout<<"Enter the number of elements in the array : ";
    cin>>iSize;

    ptr = new int[iSize];

    cout<<"Enter the elements of the array : \n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Display(ptr,iSize);

    cout<<"\nEnter the position in which you want to rotate the array : ";
    cin>>iPos;

    // rotateToLeft(ptr,iSize,iPos);
    // rotateToRight(ptr,iSize,iPos);
    rotateToLeft(ptr,iSize,iPos);

    cout<<"The array after rotation becomes : \n";
    Display(ptr,iSize);

    delete ptr;
    
    return 0;
}