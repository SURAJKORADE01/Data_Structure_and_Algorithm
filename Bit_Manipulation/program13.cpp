// Count number of bits to be flipped to convert A to B

#include<iostream>
using namespace std;

int ConvertNumber(int iStart, int iGoal)
{
    int iResult = 0;
    iResult = iStart ^ iGoal;

    int iDigit = 0;
    int iCount = 0;

    while(iResult != 0)
    {
        iDigit = iResult % 2;
        
        if(iDigit == 1)
        {
            iCount++;
        }

        iResult = iResult / 2;
    }

    return iCount;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue1;

    cout<<"Enter the number that you want to convert : ";
    cin>>iValue2;
    
    iRet = ConvertNumber(iValue1,iValue2);
    cout<<"Number of bits to be flipped are : "<<iRet<<"\n";

    return 0;
}