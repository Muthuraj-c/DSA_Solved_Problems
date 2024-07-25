//Problem link - https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/0

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        // code here
        set<int> elements;
        
        for(int i = 0; i < arr1.size(); i++)
            elements.insert(arr1[i]);
        
        for(int j = 0; j < arr2.size(); j++)
            elements.insert(arr2[j]);
            
        return elements.size();
    }
};
