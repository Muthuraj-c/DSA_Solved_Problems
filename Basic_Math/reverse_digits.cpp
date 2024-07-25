//problem link - https://www.geeksforgeeks.org/problems/reverse-digit0316/0

class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int reverse = 0;
		    int digits;
		    
		    for(int i = 0; n > 0; i++)
		    {
		        digits = n % 10;
		        n = n / 10;
		        
		        reverse = reverse * 10 + digits;
		    }
		    
		    return reverse;
		}
};
