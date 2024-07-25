//Problem link - https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/0

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        
        int low, mid, high;
        low = mid = 0;
        high = n - 1;
        
        while(mid <= high)
        {
            if(a[mid] == 0)
            {
                int temp = a[low];
                a[low] = a[mid];
                a[mid] = temp;
                
                ++low;
                ++mid;
            }
            else if(a[mid] == 1)
            {
                ++mid;
            }
            else if(a[mid] == 2 )
            {
                int temp = a[high];
                a[high] = a[mid];
                a[mid] = temp;
                
                --high;
            }
        }
    }
};
