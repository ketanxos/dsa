// Find the Peak Element in a 2D Matrix

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int left = 0, right = m - 1;
        
        while (left <= right) {
            int midCol = left + (right - left) / 2;
            
            int maxRow = 0;
            for (int i = 1; i < n; i++) {
                if (mat[i][midCol] > mat[maxRow][midCol]) {
                    maxRow = i;
                }
            }
            
            int leftVal = (midCol > 0) ? mat[maxRow][midCol - 1] : -1e9;
            int rightVal = (midCol < m - 1) ? mat[maxRow][midCol + 1] : -1e9;
            
            int currentVal = mat[maxRow][midCol];

            if (currentVal >= leftVal && currentVal >= rightVal) {
                return {maxRow, midCol};
            }
            else if (leftVal > currentVal) {
                right = midCol - 1;
            }
            else {
                left = midCol + 1;
            }
        }
        
        return {-1, -1};
    }
};