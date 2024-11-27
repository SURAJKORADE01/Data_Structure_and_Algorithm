// take word and reverse it

import java.util.*;

class program375
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        StringBuffer sbobj = new StringBuffer(str);      // string to string buffered
        sbobj = sbobj.reverse();

        System.out.println("Reverse string is :"+sbobj);
    }
}