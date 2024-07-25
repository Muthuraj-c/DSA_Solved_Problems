//Problem link - https://www.geeksforgeeks.org/problems/square-root/0

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        if(x == 1)
            return x;
            
        long long int low = 1, high = (x / 2), sqrt_val;
        
        while(low <= high)
        {
            long long int mid = (low + high) / 2;
            
            if((mid * mid) <= x)
            {
                sqrt_val = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        
        return sqrt_val;
    }
};
