// Missing in Array

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        long long expectedSum = (long long)n * (n + 1) / 2;
        long long actualSum = 0;

        for(int num : arr) {
            actualSum += num;
        }
        
        return expectedSum - actualSum;
    }
};