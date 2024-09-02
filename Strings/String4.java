/*
    Isomorphic String
*/

import java.util.*;

class String4
{
    public static boolean checkIsomorphic(String str1, String str2)
    {
        if((str1.length() != str2.length()))
        {
            System.out.print("Both the strings are NOT Isomorphic");
            return false;
        }

        Map<Character,Character> charmap = new HashMap<>();

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        for(int iCnt = 0; iCnt < str1.length(); iCnt++)
        {
            char original = Arr[iCnt];
            char replacement = Brr[iCnt];

            if(!charmap.containsKey(original))
            {
                if(!charmap.containsValue(replacement))
                {
                    charmap.put(original,replacement);
                }

                else
                {
                    return false;
                }
            }

            else
            {
                char mappedCharacter = charmap.get(original);
                if(mappedCharacter != replacement)
                {
                    return false;
                }
            }
        }

        return true;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter first string : ");
        String str1 = sobj.nextLine();
        
        System.out.print("Enter second string : ");
        String str2 = sobj.nextLine();
        
        boolean bRet = checkIsomorphic(str1,str2);

        if(bRet == true)
        {
            System.out.println("Both the strings are Isomorphic");
        }

        else
        {
            System.out.println("Both the strings are NOT Isomorphic");
        }
    }
}