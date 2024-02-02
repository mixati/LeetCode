class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> arr;
        
        for (int i = 1; i < 10; ++i) {
            int temp = i;
            int next = temp+1;
            
            while(temp <= high && next < 10) {
                temp = temp*10+next;
                ++next;
                if (temp >= low && temp <= high)
                    arr.push_back(temp);
            }
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};
