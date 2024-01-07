class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int num_count = nums.size();
        int count = 0;
        
        vector<unordered_map<int,int>> dp(num_count);
        
        for (int i = 1; i < num_count; i++) {
            for (int j = 0; j < i; j++) {
                long long dif = (long long)nums[i] - (long long)nums[j];
                if (dif > INT_MAX || dif < INT_MIN)
                    continue;
                dp[i][dif] += 1;
                if (dp[j].count(dif)) {
                    dp[i][dif] += dp[j][dif];
                    count += dp[j][dif];
                }
            }
        }
        return count;
    }
};
