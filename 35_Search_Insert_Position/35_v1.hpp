class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        short n = nums.size();
        for (short i = 0; i < n; ++i)
            if (target <= nums[i])
                return (i);
        return n;
    }
};