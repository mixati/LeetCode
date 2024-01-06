class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int jobs_count = profit.size();
        vector<tuple<int,int,int>> jobs(jobs_count);
        for (int i = 0; i < jobs_count; i++)
            jobs[i] = {endTime[i], startTime[i], profit[i]};
        sort(jobs.begin(), jobs.end());
        vector<int> dp(jobs_count + 1);
      
        for (int i = 0; i < jobs_count; i++) {
            auto [endTime, startTime, profit] = jobs[i];
          
            int latestNonConflictJobIndex = upper_bound(jobs.begin(), jobs.begin() + i, startTime, [&](int time, const auto& job) -> bool {
                return time < get<0>(job);
            }) - jobs.begin();
          
            dp[i + 1] = max(dp[i], dp[latestNonConflictJobIndex] + profit);
        }
      
        return dp[jobs_count];
    }
};
