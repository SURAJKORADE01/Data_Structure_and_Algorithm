/*
    Longest Common Prefix
    
    Example 1:
    Input: strs = ["flower","flow","flight"]
    Output: "fl"

    Example 2:

    Input: strs = ["dog","racecar","car"]
    Output: ""
    Explanation: There is no common prefix among the input strings.
*/

import java.util.*;

class String5
{
    public static String longestCommonPrefix(String[] str)
    {
        StringBuilder sResult = new StringBuilder();

        Arrays.sort(str);

        char First[] = str[0].toCharArray();
        char Last[] = str[str.length - 1].toCharArray();

        for(int iCnt = 0; iCnt < First.length; iCnt++)
        {
            if(First[iCnt] != Last[iCnt])
            {
                break;
            }

            sResult.append(First[iCnt]);
        }

        return sResult.toString();
    }

    public static void main(String arg[])
    {
        String str[] = {"club","clue","clumsy","cluster","clutch"};

        String sret = longestCommonPrefix(str);
        System.out.println("Longest common prefix are : "+sret);
    }
}
