class Solution 
{
    public int mySqrt(int x) 
    {
        int low=0,high=x / 2;
        long square;
        if(x<2){
            return x;
        }
        
        else
        {
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                square = (long)mid*mid;


                if(square>x)
                high=mid - 1;

                else
                low=mid + 1;

            }
        } 
        return high;
    }
}