//Problem link - https://www.geeksforgeeks.org/problems/left-rotate-matrix-k-times2351/1

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> res_matrix = mat;
        
        k = k % m;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = k; j < m; j++)
                res_matrix[i][j - k] = mat[i][j];
            
            for(int j = 0; j < k; j++)
                res_matrix[i][m - k + j] = mat[i][j];
        }
      
        return res_matrix;
    }
};
