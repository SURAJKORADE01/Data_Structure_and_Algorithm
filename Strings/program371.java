// count wrod from string

import java.util.*;

class program371
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," "); 
        str = str.trim();                      

        String arr[] = str.split(" ");          
        System.out.println("Number of words are :"+arr.length);
    }
}