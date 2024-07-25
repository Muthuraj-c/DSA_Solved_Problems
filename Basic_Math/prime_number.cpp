//Problem link - https://www.geeksforgeeks.org/problems/prime-number2314/0

class Solution{
public:
    int isPrime(int N){
        // code here
        if(N == 0 || N== 1)
            return 0;
        
        for(int i = 2; i <= sqrt(N);  i++)
        {
            if(N % i == 0)
                return 0;
        }
        
        return 1;
    }
};
