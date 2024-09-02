//Problem link - https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col_0 = 1;

        //checking the zero elements and modify the first row and first col elements with zero
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    if(j != 0)
                        matrix[0][j] = 0;
                    else
                        col_0 = 0;                   
                }
            }
        }

        //changing the corresponding row and col elements to zero
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                if(matrix[i][j] != 0)
                {
                    if(matrix[i][0] == 0 || matrix[0][j] == 0){
                        matrix[i][j] = 0;
                    }
                }                
            }
        }

        //checking first row to change elements to zero
        if(matrix[0][0] == 0)
        {
            for(int j = 0; j < n; j++)
                matrix[0][j] = 0;
        }

        //checking first col to change elements to zero
        if(col_0 == 0)
        {
            for(int i = 0; i < m; i++)
                matrix[i][0] = 0;
        }
    }
};
