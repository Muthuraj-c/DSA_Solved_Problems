//Problem link - https://leetcode.com/problems/search-a-2d-matrix/
//solved using binary search. TC - O(log nm)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int start = 0, end = m * n - 1;

        while (start <= end)
        {
            int mid = (start + end) / 2;
            int row = mid / n;
            int col = mid % n;
            int elem = matrix[row][col];

            if (elem == target)
                return true;
            else if (elem < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return false;
    }
};
