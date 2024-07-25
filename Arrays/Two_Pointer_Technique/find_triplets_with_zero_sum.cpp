//Problem link - https://www.geeksforgeeks.org/problems/find-triplets-with-zero-sum/0

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        int low, high;
        
        sort(arr, arr + n);
        
        for(int i = 0; i < n - 2; i++)
        {
            low = i + 1;
            high = n - 1;
            
            while(low < high)
            {
                if(arr[i] + arr[low] + arr[high] == 0)
                    return true;
                else if(arr[i] + arr[low] + arr[high] < 0)
                    low++;
                else
                    high--;
            }
        }
        
        return false;
    }
};
