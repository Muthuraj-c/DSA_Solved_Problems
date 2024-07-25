//Problem link - https://www.geeksforgeeks.org/problems/count-the-triplets4615/0

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    int low, high;
	    int count = 0;
	    
	    sort(arr, arr + n);
	    
	    for(int i = n - 1; i >= 2; i--)
	    {
	        low = 0;
	        high = i - 1;
	        
	        while(low < high)
	        {
	            if(arr[low] + arr[high] == arr[i])
	            {
	                count++;
	                low++;
	                high--;
	            }
	            else if(arr[low] + arr[high] < arr[i])
	                low++;
	            else
	                high--;
	        }
	    }
	    
	    return count;
	}
};
