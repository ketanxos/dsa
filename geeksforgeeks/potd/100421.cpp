// Smallest Positive Integer that can not be represented as Sum

class Solution {
  public:
    long long smallestpositive(vector<long long> array, int n) {
        sort(array.begin(), array.end());
        long long result = 1;

        for(int i = 0; i < n; i++) {
            if(array[i] > result) {
                break;
            }

            result += array[i];
        }
        
        return result;
    }
};