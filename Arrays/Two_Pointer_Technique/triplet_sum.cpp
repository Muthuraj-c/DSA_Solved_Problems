//Problem link - https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
        // Your Code Here
        int i, left, right;
        
        sort(arr, arr + n);
        
        for(i = 0; i < n; i++)
        {
            left = i + 1;
            right = n - 1;
            
            while(left < right)
            {
                int sum = arr[i] + arr[left] + arr[right];
                
                if(sum == x)
                    return true;
                
                if(sum < x)
                    left++;
                else
                    right--;
            }
        }
        
        return false;
    }
};
