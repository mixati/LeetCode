class Solution {
public:
    int balancedString(string s) {
        unordered_map<char, int> count;
        int n = s.size(), res = n, i = 0, l = n / 4;
        
        for (int j = 0; j < n; ++j)
            ++count[s[j]];
            
        for (int j = 0; j < n; ++j) {
            --count[s[j]];
            while (i < n && count['Q'] <= l && count['W'] <= l && count['E'] <= l && count['R'] <= l) {
                res = min(res, j - i + 1);
                count[s[i++]] += 1;
            }
        }
        return res;
    }
};