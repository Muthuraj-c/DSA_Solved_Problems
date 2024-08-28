//Problem link - https://www.geeksforgeeks.org/problems/print-matrix-in-diagonal-pattern/1?
itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         vector<int> diag_mat;
         
         bool isUp = true;
         int i = 0, j = 0;
         int n = mat.size();
         
         for(int k = 0; k < n * n;)
         {
             if(isUp)
             {
                 for(; i >= 0 && j < n; i--, j++)
                 {
                     diag_mat.push_back(mat[i][j]);
                     k++;
                 }
                 
                 if(i < 0 && j <= n - 1)
                    i = 0;
                    
                 if(j == n)
                 {
                     i = i + 2;
                     j--;
                 }
             }
             else
             {
                 for(; j >= 0 && i < n; i++, j--)
                 {
                     diag_mat.push_back(mat[i][j]);
                     k++;
                 }
                 
                 if(j < 0 && i <= n - 1)
                    j = 0;
                    
                 if(i == n)
                 {
                     j = j + 2;
                     i--;
                 }
             }
             
             isUp = !isUp;
         }
         
         return diag_mat;
    }
};
