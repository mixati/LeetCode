class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int max_num = 0;
        int cookie_index = s.size() - 1;
        int child_index = g.size() - 1;
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while (cookie_index >= 0 && child_index >= 0){
            if (s[cookie_index] >= g[child_index]){
                max_num++;
                cookie_index--;
            }
            child_index--;
        }
        return max_num;
    }
};
