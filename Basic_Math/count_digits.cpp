//problem link - https://www.geeksforgeeks.org/problems/count-digits5716/1

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int n = N;
        int digits;
        int count = 0;
        
        while(n > 0)
        {
            digits = n % 10;
            
            if(digits != 0)
            {
                if(N % digits == 0)
                    ++count;
            }
            
            n /= 10;
        }
        
        return count;
    }
};
