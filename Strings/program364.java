import java.util.*;

class program364
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        StringX obj = new StringX();
        
        String sret = obj.Reverse(name);
        System.out.println("Result is :"+sret);
    }
}

class StringX
{
    public String Reverse(String str)
    {
        char Arr[] = str.toCharArray();

        int iStart = 0;
        int iEnd = Arr.length-1;

        char cTemp = ' ';       // Space ne initialise karayacha

        while(iStart < iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;
            iEnd--;
        }        

        return new String(Arr);
    }   
}