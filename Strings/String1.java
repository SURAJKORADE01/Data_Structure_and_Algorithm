/*
    Check if two Strings are anagrams of each other

    Input: CAT, ACT
    Output: true
    Explanation: Since the count of every letter of both strings are equal.
    
*/ 

import java.util.*;

class String1
{
    // public static boolean checkAnagram(String str1, String str2)
    // {
    //     str1 = str1.toLowerCase();
    //     str2 = str2.toLowerCase();

    //     char Arr[] = str1.toCharArray();
    //     char Brr[] = str2.toCharArray();

    //     int iFreq[] = new int[26];

    //     for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    //     {
    //         iFreq[Arr[iCnt] - 'a']++;
    //         iFreq[Brr[iCnt] - 'a']--;
    //     }

    //     int iCnt = 0;

    //     for(iCnt = 0; iCnt < iFreq.length; iCnt++)
    //     {
    //         if(iFreq[iCnt] != 0)
    //         {
    //             break;
    //         }            
    //     }

    //     if(iFreq.length == iCnt)
    //     {
    //         return true;
    //     }

    //     else
    //     {
    //         return false;
    //     }
    // }

    public static boolean checkAnagram(String str1, String str2)
    {
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        Arrays.sort(Arr);
        Arrays.sort(Brr);

        if(Arrays.equals(Arr,Brr))
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter first string : ");
        String str1 = sobj.nextLine();
        
        System.out.print("Enter second string : ");
        String str2 = sobj.nextLine();
        
        if(str1.length() != str2.length())
        {
            System.out.print("Both strings are NOT anagram.");
            return;
        }

        boolean bRet = checkAnagram(str1,str2);

        if(bRet == true)
        {
            System.out.print("Both the strings are Anagram.");
        }    

        else
        {
            System.out.print("Both the strings are NOT Anagram.");
        }

    }
}