class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res(size/3, vector<int>(3));
        int i = 0;
        for (int j = 0; j < size; j+=3) {
            if (nums[j+2] - nums[j] <= k) {
                res[i] = {nums[j], nums[j+1], nums[j+2]};
                i++;
            }
            else
                return vector<vector<int>>();
        }
        return res;
    }
};