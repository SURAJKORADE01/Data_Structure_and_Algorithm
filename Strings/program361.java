// Remove white spaces

import java.util.*;

class program354
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        StringX obj = new StringX();
        
        String sret = obj.RemoveWhiteSpaces(name);
        System.out.println("Result is :"+sret);
    }
}

class StringX
{
    public String RemoveWhiteSpaces(String str)
    {
        // Converting String to Array
        char Arr[] = str.toCharArray();

        String output = "";

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] != ' ')
            {
                output = output + Arr[iCnt];
            }
        }
        return output;
    }   
}