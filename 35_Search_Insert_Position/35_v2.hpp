class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        short end = nums.size() - 1;
        short start = 0;

        while (start <= end) {
            short mid = start + (end - start) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target) 
                end = mid - 1;
            else start = mid + 1;
        }
        return start;
    }
};