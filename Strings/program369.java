// remove starting,ending and extra white spaces

import java.util.*;

class program369
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");       //remove extra white spaces

        str = str.trim();       //remove start and end white space

        System.out.println("Updated string is :"+str);
    }
}