//Problem link - https://www.geeksforgeeks.org/problems/maximum-product-subarray3604/1
//Solved using Observation technique by multiplying from the first as prefix
//and from the last as suffix. Then getting the maximum of those, gets the maximum product.

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long max_product = LLONG_MIN;
	    long long prefix = 1, suffix = 1;
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(prefix == 0)
	            prefix = 1;
	        
	        if(suffix == 0)
	            suffix = 1;
	            
	        prefix *= arr[i];
	        suffix *= arr[n - 1 - i];
	        max_product = max(max_product, max(prefix, suffix));
	    }
	    
	    return max_product;
	}
};
