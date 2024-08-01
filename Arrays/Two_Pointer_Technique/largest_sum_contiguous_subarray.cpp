//Problem link - https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
//Solved using kadane's algorithm - https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        // code here...        
        long long sum = 0, max_sum = INT_MIN;
        int n = arr.size();
        
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            
            if(sum > max_sum)
                max_sum = sum;
            
            if(sum < 0)
                sum = 0;
        }
        
        return max_sum;
    }
};
