// Accept string from user and count frequency of each letter

import java.util.*;

class program365
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        str = str.toLowerCase(); // Convert the string from upper to lower case

        char Arr[] = str.toCharArray();

        int Freq[] = new int[26];
        
        int iCnt = 0;
        
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Freq[Arr[iCnt] - 'a']++;    
        }

        System.out.println("Frequency of each letter is :");
        for(iCnt = 0; iCnt < Freq.length; iCnt++)
        {
            if(Freq[iCnt] != 0)
            {
                System.out.println("Frequency of "+(char)(iCnt+'a')+" is "+Freq[iCnt]);
            }
        }
    }
}