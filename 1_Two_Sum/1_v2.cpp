class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash_nums;
        for (int i = 0; i < nums.size(); i++) {
            int other = target - nums[i];
            if (hash_nums.count(other))
                return {hash_nums[other], i};
            hash_nums[nums[i]] = i;
        }
        return {};
    }
};
