//Problem link - https://www.geeksforgeeks.org/problems/third-largest-element/0

class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        
        if(arr.size() < 3)
            return -1;
        
        int first, second, third;
        first = arr[0];
        second = third = 0;
        
        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] > first)
            {
                third = second;
                second = first;
                first = arr[i];
                
            }
            else if(arr[i] > second)
            {
                third = second;
                second = arr[i];
            }
            else if(arr[i] > third)
            {
                third = arr[i];
            }
        }
        
        return third;
    }
};
