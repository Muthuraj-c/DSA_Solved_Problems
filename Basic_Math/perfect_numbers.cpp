//Problem link - https://www.geeksforgeeks.org/problems/perfect-numbers3207/0

class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long sum = 1;
        
        for(long long i = 2; (i * i) <= N; i++)
        {
            if(N % i == 0)
            {
                if((i * i) != N)
                    sum = sum + i + (N / i);
                else
                    sum += i;
            }
            
        }
        
        if(sum == N && N != 1)
            return 1;
            
        return 0;
    }
};
