class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count = 0, temp = arr[0];
        int target = arr.size() / 4 + 1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == temp) {
                count += 1;
                if (count == target)
                    return temp;
            }
            else {
                temp = arr[i];
                count = 1;
            }
        }
        return -1;
    }
};
