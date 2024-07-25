//Problem link - https://www.geeksforgeeks.org/problems/palindrome0746/0

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int num = n;
		    int rev_num = 0, rem;
		    
		    while(num)
		    {
		        rem = num % 10;
		        rev_num = (rev_num * 10) + rem;
		        
		        num /= 10;
		    }
		    
		    if(rev_num == n)
		        return "Yes";
		    else
		        return "No";
		}
};
