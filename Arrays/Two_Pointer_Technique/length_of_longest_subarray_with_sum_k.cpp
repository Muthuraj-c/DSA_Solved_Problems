//Problem link - https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/0

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<int, int> sum_map;
        int sum = 0, max_len = 0;
        
        for(int i = 0; i < N; i++)
        {
            sum += A[i];
            
            if(sum == K)
            {
                max_len = max(max_len, i + 1);
            }
            
            //taking remainder of sum after subtracting the K to check
            //whether the remainder is available in the map or not
            int rem = sum - K;
            if(sum_map.find(rem) != sum_map.end())
            {
                int len = i - sum_map[rem];
                max_len = max(max_len, len);
            }
            
            //insert the value in the map if the value is not there
            if(sum_map.find(sum) == sum_map.end())
            {
                sum_map[sum] = i;
            }
        }
        
        return max_len;
    } 

};
