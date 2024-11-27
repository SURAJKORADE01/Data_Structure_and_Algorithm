//  Accept the string from user and count the number of small character in string

import java.util.*;

class program353
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String name = sobj.nextLine();

        StringX obj = new StringX();
        int iRet = obj.CountSmall(name);
        System.out.println("Number of small characters in the string are :"+iRet);
        
    }
}

class StringX
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}