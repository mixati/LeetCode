class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        auto iter = nums.cbegin();

        if (n <= 1)
            return ;
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 0) {
                ++count;
                nums.erase(iter + i);
                nums.push_back(0);
                --i;
            }
            if (i == n - count)
                break ;
        }
    }
};