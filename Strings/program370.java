// count word from string

import java.util.*;

class program370
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();
        System.out.println("Length is :"+str.length());

        if(str.length() == 0)
        {
            System.out.println("Number of words are : 0");
            return;
        }

        str = str.replaceAll("\\s+"," ");       //remove extra white spaces
        str = str.trim();                      //remove start and end white space

        int iFrequency = 0;

        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if(str.charAt(iCnt) == ' ')
            {
                iFrequency++;
            }
        }
        
         System.out.println("Number of words are :"+(iFrequency+1));
    }
}

// count the frequency of "is"  word from string