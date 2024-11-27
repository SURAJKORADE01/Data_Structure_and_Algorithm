// Converting the string 

import java.util.*;

class program354
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        StringX obj = new StringX();
        
        String sret = obj.StrLower(name);
        System.out.println("Converting string to Lowercase:"+sret);

        sret = obj.StrUpper(name);
        System.out.println("Converting string to UpperCase :"+sret);

        sret = obj.StrToggle(name);
        System.out.println("Converted string :"+sret);
    }
}

class StringX
{
    public String StrLower(String str)
    {
        // Step 1: Convert String to Array
        char Arr[] = str.toCharArray();

        //Step 2 : Perform operations on array
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        } 

        // Step 3 : Convert Array to String
        return new String(Arr);
    }

    public String StrUpper(String str)
    {
        // Step 1: Convert String to Array
        char Arr[] = str.toCharArray();

        //Step 2 : Perform operations on array
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }
        } 

        // Step 3 : Convert Array to String
        return new String(Arr);
    }

    public String StrToggle(String str)
    {
        // Step 1: Convert String to Array
        char Arr[] = str.toCharArray();

        //Step 2 : Perform operations on array
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
            else if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }
        } 

        // Step 3 : Convert Array to String
        return new String(Arr);
    }   
}