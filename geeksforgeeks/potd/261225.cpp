// Kth Missing Positive Number in a Sorted Array

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int n = arr.size();
        int missingCount = 0;
        int current = 1;
        int arrIndex = 0;
        
        while (missingCount < k) {
            if (arrIndex < n && arr[arrIndex] == current) {
                arrIndex++;
            } else {
                missingCount++;
                if (missingCount == k) {
                    return current;
                }
            }
            current++;
        }
        
        return current - 1;
    }
};