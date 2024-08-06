//Problem link - https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1
//Need to rotate by anti-clockwise

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n / 2; j++)
            {
                //for clockwise, just we need to reverse the columns.
                //for anti-clockwise, reversing the rows.
                int temp = matrix[j][i];
                matrix[j][i] = matrix[n - 1 - j][i];
                matrix[n - 1 - j][i] = temp;
            }
        }
    } 
};
