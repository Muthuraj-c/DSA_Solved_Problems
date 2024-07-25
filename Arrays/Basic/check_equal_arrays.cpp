//Problem link - https://www.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/0

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool check(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int n = arr1.size();
        
        unordered_map<int, int> map;
        
        for(int i = 0; i < n; i++)
            map[arr1[i]]++;
            
        for(int i = 0; i < n; i++)
        {
            if(map.find(arr2[i]) == map.end())
                return false;
                
            if(map[arr2[i]] == 0)
                return false;
                
            map[arr2[i]]--;
        }
        
        return true;
    }
};
