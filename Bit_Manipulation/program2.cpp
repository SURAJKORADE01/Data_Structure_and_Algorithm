// Binary to Decimal

#include<iostream>
#include<cmath>
using namespace std;

int ConvertToDecimal(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 1)
        {
            iSum = iSum + pow(2,iCount);
        }

        iCount++;
        
        iNo = iNo / 10;
    }

    return iSum;
}

bool isValidBinary(int iNo)
{
    int iDigit = 0;
    bool bRet = true;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0 && iDigit != 1)
        {
            bRet = false;
            break;
        }
    }

    return bRet;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number in binary format : ";
    cin>>iValue;

    if(!isValidBinary(iValue))
    {
        cout<<"Invalid Binary number"<<"\n";
        return -1;
    }

    iRet = ConvertToDecimal(iValue);
    cout<<"Decimal number is : "<<iRet<<"\n";
    
    return 0;
}