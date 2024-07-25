//Problem link - https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/0

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size() - 1;
        int last_element = arr[n];
        
        for(int i = n; i > 0; i--)
            arr[i] = arr[i - 1];
        
        arr[0] = last_element;
    }
};
