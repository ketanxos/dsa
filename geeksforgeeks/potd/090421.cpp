// Large Factorial

class Solution {
  public:
    vector<long long> factorial(vector<long long> a, int n) {
        const long long MOD = 1000000007;
        long long maxVal = 0;
        
        for(int i = 0; i < n; i++) {
            maxVal = max(maxVal, a[i]);
        }

        vector<long long> fact(maxVal + 1);
        fact[0] = 1;
        
        for(long long i = 1; i <= maxVal; i++) {
            fact[i] = (fact[i-1] * i) % MOD;
        }

        vector<long long> result(n);
        
        for(int i = 0; i < n; i++) {
            result[i] = fact[a[i]];
        }
        
        return result;
    }
};