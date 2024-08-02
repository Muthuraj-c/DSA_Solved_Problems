//Problem link - https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
//Solved using merge sort

class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[], int l, int m, int r)
    {
         // Your code here
         int left = l;
         int right = m + 1;
         vector<long long> temp;
         
         long long int cnt = 0;
         while(left <= m && right <= r)
         {
             if(arr[left] <= arr[right])
             {
                 temp.push_back(arr[left]);
                 left++;
             }
             else
             {
                 temp.push_back(arr[right]);
                 //this is the line modified in the merge sort to get the count
                 cnt += (m - left + 1);

                 right++;
             }
         }
         
         while(left <= m)
         {
             temp.push_back(arr[left]);
             left++;
         }
         
         while(right <= r)
         {
             temp.push_back(arr[right]);
             right++;
         }
         
         for(int i = l; i <= r; i++)
            arr[i] = temp[i - l];
            
        return cnt;
    }
    
    long long merge_sort(long long arr[], int l, int r)
    {
        long long int cnt = 0;
        
        if(l >= r)
            return cnt;
        
        int mid = (l + r) / 2;
        
        cnt += merge_sort(arr, l, mid);
        cnt += merge_sort(arr, mid + 1, r);        
        cnt += merge(arr, l, mid, r);
        
        return cnt;
    }

    
    long long int inversionCount(long long arr[], int n) {
        // Your Code Here
        return merge_sort(arr, 0, n - 1);
    }
};
