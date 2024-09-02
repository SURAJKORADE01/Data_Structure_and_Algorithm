/*
    problem : check whether one string is a rotation of another

    Example 1:

    Input: s = "abcde", goal = "cdeab"
    Output: true
*/

import java.util.*;

class String6
{
    public static boolean rotateString(String str1, String str2)
    {
        if(str1.length() != str2.length())
        {
            return false;
        }

        String concatenated = str1 + str1;

        return concatenated.contains(str2);
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter first string : ");
        String str1 = sobj.nextLine();

        System.out.print("Enter seocnd string : ");
        String str2 = sobj.nextLine();

        boolean bRet = rotateString(str1,str2);

        if(bRet == true)
        {
            System.out.print("One string is rotation of another.");
        }

        else
        {
            System.out.print("One string is NOT rotation of another.");
        }
    }
}
