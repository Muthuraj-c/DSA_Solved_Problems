//Problem link - https://leetcode.com/problems/majority-element/
//Article link - https://www.geeksforgeeks.org/majority-element/

//Solved using Boyer-Moore voting algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1, votes = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            if(votes == 0)
            {
                candidate = nums[i];
                votes = 1;
            }
            else
            {
                if(candidate == nums[i])
                    votes++;
                else
                    votes--;
            }            
        }

        int count = 0;
        for(int i = 0; i < n; i++)
        {
            cout << nums[i] << " " << candidate << endl;
            if(nums[i] == candidate)
                count++;
        }
        
        if(count > n / 2)
            return candidate;
        
        return -1;
    }
};
