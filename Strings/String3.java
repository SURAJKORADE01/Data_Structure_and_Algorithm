/*
    Reverse Words in a String

    String = This is an amazing program
    Result = program amazing an is This
*/

import java.util.*;

class String3
{
    // public static void reverseWord(String str)
    // {
    //     String Arr[] = str.split(" ");
        
    //     for(int iCnt = Arr.length - 1; iCnt >= 0; iCnt--)
    //     {
    //         System.out.print(Arr[iCnt]+" ");
    //     }
    // }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the string : ");
        String str = sobj.nextLine();
        
        String sRet = reverseWord(str);
        System.out.print("Reversed string is : "+sRet);
    }
}