//Problem link - https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int low, high;
        vector<vector<int>> result;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 3; i++)
        {
            for(int j = i + 1; j < n - 2; j++)
            {
                low = j + 1;
                high = n - 1;

                while(low < high)
                {
                    long long sum = (long long)target - (long long)nums[i] - (long long)nums[j];

                    if(nums[low] + nums[high] == sum)
                    {
                        result.push_back({nums[i], nums[j], 
                        nums[low], nums[high]});

                        int idx_low = low, idx_high = high;
                        while(low < high && (nums[low] == nums[idx_low])) low++;
                        while(low < high && (nums[high] == nums[idx_high])) high--;
                    }
                    else if(nums[low] + nums[high] < sum)
                        low++;
                    else
                        high--;
                }

                while(j + 1 < n && (nums[j] == nums[j + 1])) j++;
            }

            while(i + 1 < n && (nums[i] == nums[i + 1])) i++;
        }

        return result;
    }
};
