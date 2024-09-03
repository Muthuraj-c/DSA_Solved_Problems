//Problem link - https://www.geeksforgeeks.org/problems/power-of-numbers-1587115620/0

class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(long long N,long long R)
    {
        //Your code here
        const long long MOD = 1000000007;
        long long result = 1;
        
        while(R)
        {
            if(R % 2)
                result = (result * N) % MOD;
            
            N = (N * N) % MOD;
            R /= 2;
        }
        
        return result;
    }

        //Another method by using recursion
        /*long long val;
        
        if(R == 0)
            return 1;
        
        val = power(N, R / 2) % MOD;
        if(R % 2 == 0)
            return (val * val) % MOD;
        else
            return (((N * val) % MOD) * val) % MOD;*/
};
