// String to character array

import java.util.*;

class program352
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        System.out.println("Your name is :"+name);
        System.out.println("Length of the string is :"+name.length());


        char str[] = name.toCharArray();        // String is converted to character array
        
        for(int iCnt = 0; iCnt < name.length();iCnt++)
        {
            System.out.println(str[iCnt]);
        }
    }
}

// name = hello
// str[] = {'h','e','l','l','o'}

//  1 : Accept the string from user
//  2 : Convert the string into character array
//  3 : Perform the operation on character array
//  4 : Convert the character array into string