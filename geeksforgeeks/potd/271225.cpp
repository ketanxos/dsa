// Kth smallest element in a Matrix

class Solution {
  public:
    int countLessEqual(vector<vector<int>> &mat, int mid) {
        int n = mat.size();
        int count = 0;
        int row = 0, col = n - 1;
        
        while (row < n && col >= 0) {
            if (mat[row][col] <= mid) {
                count += (col + 1);
                row++;
            } else {
                col--;
            }
        }
        
        return count;
    }
    
    int kthSmallest(vector<vector<int>> &mat, int k) {
        int n = mat.size();
        int low = mat[0][0];
        int high = mat[n-1][n-1];
        int result = low;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int count = countLessEqual(mat, mid);
            
            if (count >= k) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return result;
    }
};