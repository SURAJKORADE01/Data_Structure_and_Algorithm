// count frequency of "INDIA" word

import java.util.*;

class program372
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," "); 
        str = str.trim();                      

        String arr[] = str.split(" ");         

        int iCount = 0;
        int iCnt = 0;

        for(String s:arr)
        {
            if(s.equals("india"))
            {
                iCount++;
            }
        }
            
        System.out.println("Count of India word is: "+iCount);
    }
}