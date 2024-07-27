//Problem link - https://www.geeksforgeeks.org/problems/trapping-rain-water-1587115621/0

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
        //logic behind to find trapped water is finding highest value 
        //from both left and right sides.
        long long trapped_water = 0;
        int left_most_val = 0, right_most_val = 0;
        int l = 0, r = n - 1;
        
        while(l < r)
        {
            if(arr[l] <= arr[r])
            {
                if(arr[l] >= left_most_val)
                    left_most_val = arr[l];
                else
                    trapped_water = trapped_water + left_most_val - arr[l];
                   
                l++;
            }
            else
            {
                if(arr[r] >= right_most_val)
                    right_most_val = arr[r];
                else
                    trapped_water = trapped_water + right_most_val - arr[r];
                    
                r--;
            }
        }
        
        return trapped_water;
    }
};
