//Problem link - https://www.geeksforgeeks.org/problems/armstrong-numbers2727/0

class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int rem, sum = 0;
        int num = n;
        
        while(num)
        {
            rem = num % 10;
            sum = sum + (pow(rem, 3));
            
            num /= 10;
        }
        
        if(sum == n)
            return "true";
        else
            return "false";
    }
};
