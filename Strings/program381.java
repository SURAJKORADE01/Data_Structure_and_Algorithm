// accept string from user and change the voice

import java.util.*;

class program381
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," "); 
        str = str.trim();                      

        String arr[] = str.split(" ");       

        StringBuffer output = new StringBuffer();
        
        for(int iCnt = arr.length-1 ; iCnt >= 0 ;iCnt--)
        {
            StringBuffer sb = new StringBuffer(arr[iCnt]);
            output.append(sb.append(" "));
        }

        System.out.println(output);
    }
}