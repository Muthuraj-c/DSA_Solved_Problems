//Problem link - https://www.geeksforgeeks.org/problems/intersection-of-two-arrays2404/0

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        set<int> elements;
        int count = 0;
        
        for(int i = 0; i < n; i++)
                elements.insert(a[i]);
                
        for(int i = 0; i < m; i++)
        {
            if(elements.find(b[i]) != elements.end())
            {
                count++;
                elements.erase(b[i]);
            }
        }
        
        return count;
    }
};
