class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        int c = k+1;
        vector<int> dp(c, 0);
        for (int i = n-1; i >= 0; --i) {
            int cmax = 0;
            int end = min(n, i+k);
            for (int j = i; j < end; ++j) {
                cmax = max(cmax, arr[j]);
                dp[i % c] = max(dp[i%c], dp[(j+1)%c]+cmax*(j-i+1));
            }
        }
        return dp[0];
    }
};
