class Solution {
    public int removeDuplicates(int[] Arr) 
    {
        if(Arr.length <= 2)
        {
            return Arr.length;
        }

        int iTemp = 2;

        for(int iCnt = 2; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] != Arr[iTemp - 2])
            {
                Arr[iTemp] = Arr[iCnt];
                iTemp++;
            }
        }

        return iTemp;
    }
}
