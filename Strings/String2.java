/*
    Largest odd number in a string
*/

import java.util.*;

class String2
{
    public static String LargestOddNumber(String str)
    {
        char Arr[] = str.toCharArray();
        char iMax = '0';

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2 != 0) && (Arr[iCnt] > iMax))
            {
                iMax = Arr[iCnt];
            }
        }

        if(iMax == '0')
        {
            return "No odd number in the string";
        }

        String sRet = Character.toString(iMax);
        return sRet;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the string : ");
        String str = sobj.nextLine();
        
        String sRet = LargestOddNumber(str);
        System.out.print("Largest odd number from the string is : "+sRet);
    }
}