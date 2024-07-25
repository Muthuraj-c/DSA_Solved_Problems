//Problem link - https://www.geeksforgeeks.org/problems/key-pair5616/0

class Solution {
public:
    // Function to check if array has 2 elements
    // whose sum is equal to the given value
    bool hasArrayTwoCandidates(vector<int>& arr, int x) {
        // code here
        unordered_map<int, int> map;

        for (int i = 0; i < arr.size(); i++)
        {
            int val = x - arr[i];

            if (map.find(val) != map.end())
                return true;

            map[arr[i]] = i;
        }

        return false;
    }
};