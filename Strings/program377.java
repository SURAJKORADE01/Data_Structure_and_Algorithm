// take word and reverse word in place -> IMP

import java.util.*;

class program376
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," "); 
        str = str.trim();                      

        String arr[] = str.split(" ");        

        int iCnt = 0;

        StringBuffer output = new StringBuffer();
        
        for(String s :arr)
        {
            StringBuffer word = new StringBuffer(s);
            output.append((word.reverse()).append(" "));
        }
        
        String result = new String(output);     // last cha space remove karnyasathi
        result = result.trim();
        System.out.println("Result is :"+result);
    }
}