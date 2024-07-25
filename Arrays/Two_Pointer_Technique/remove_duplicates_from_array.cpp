//Problem link - https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/0

class Solution {
  public:
    int remove_duplicate(vector<int> &arr) {
        // code here
        
       int i = 0;
       for(int j = 1; j < arr.size(); j++)
       {
           if(arr[j] != arr[i])
           {
               arr[++i] = arr[j];
           }
       }
       
       return i + 1;
    }
};
