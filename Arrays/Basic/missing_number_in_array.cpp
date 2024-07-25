//Problem link - https://www.geeksforgeeks.org/problems/missing-number-in-array1416/0

class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
        int num;
        
        for(int i = 1; i <= n; i++)
        {
            //xor operator(^) neglects the number if the
            //number already exists
            if(i != n)
                num ^= arr[i - 1];
            num ^= i;
        }
        
        return num;
    }
};
