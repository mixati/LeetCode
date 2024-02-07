class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>> a;
        //a.push_back(make_pair(s[0],1));
        for (int i = 0; i < s.size(); ++i) {
            bool fl = true;
            for (int j = 0; j < a.size(); ++j) {
                if (a[j].first == s[i]) {
                    ++(a[j].second);
                    fl = false;
                    break;
                }
            }
            if (fl)
                a.push_back(make_pair(s[i], 1));
            
        }
        sort(a.begin(), a.end(), [](auto a, auto b){ return a.second > b.second; });
        
        string ans;
        for (int i = 0; i < a.size(); ++i)
            while (a[i].second != 0) {
                ans.push_back(a[i].first);
                --(a[i].second);
            }
        return ans;
    }
};
