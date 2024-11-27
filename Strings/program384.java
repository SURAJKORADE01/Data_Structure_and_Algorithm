// Accept string from user and count frequency of each letter

import java.util.*;

class program384
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first String :");
        String str1 = sobj.nextLine();

        System.out.println("Enter the second String :");
        String str2 = sobj.nextLine();

        if(str1.length() != str2.length())
        {
            System.out.println("Strings are not anagram");
            return;
        }

        str1 = str1.toLowerCase(); // Convert the string from upper to lower case
        str2 = str2.toLowerCase();

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        int Freq1[] = new int[26];
        int Freq2[] = new int[26];

        int iCnt = 0;
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Freq1[Arr[iCnt] - 'a']++;
            Freq2[Brr[iCnt] - 'a']++;    
        }

        /*
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Freq2[Brr[iCnt] - 'a']++;    
        }
        */


        for(iCnt = 0; iCnt < Freq1.length; iCnt++)
        {
            if(Freq1[iCnt] != Freq2[iCnt])
            {
                break;
            }
        }

        if(iCnt == Arr.length)
        {
            System.out.println("Strings are anagram");
        }
        else
        {
            System.out.println("Strings are not anagram");
        }
    }
}

// str1 = Marvellous
// str2 = ulvaMrelos