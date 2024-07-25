//problem link - https://www.geeksforgeeks.org/problems/find-last-digit-of-ab-for-large-numbers1936/0

class Solution {
  public:
    int getLastDigit(string a, string b) {
        // code here
        
        if((a.size() == 1 && a[0] == '0') && (b.size() == 1 && b[0] == '0'))
            return 1;
        if(a.size() == 1 && a[0] == '0')
            return 0;
        if(b.size() == 1 && b[0] == '0')
            return 1;
            
        int num_a = a[a.size() - 1] - '0';
        int num_b = 0;
        
        for(int i = 0; b[i]; i++)
        {
            num_b = num_b * 10 + (b[i] - '0');
            num_b %= 4;
        }
        
        if(num_b == 0)
            num_b = 4;
            
        int value = pow(num_a, num_b);
        
        return (value % 10);
    }
};
