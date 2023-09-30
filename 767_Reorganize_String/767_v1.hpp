class Solution {
public:
    string reorganizeString(string s) {
        vector<short> f(26,0);
        vector<pair<char, short>> dict;
        int l = s.size();
        
        if (s == "")
            return s;
        
        for (int i = 0; i < l; i++) {
            f[s[i]-'a']++;
            if (f[s[i]-'a'] > (l+1)/2)
                return "";
        }
        for (int i = 0; i < 26; i++)
            if (f[i] != 0)
                dict.push_back(make_pair(i+'a', f[i]));
        sort(dict.begin(), dict.end(), cmpl);
        int temp = 0;
        for (int i = 0; i < l; i++) {
            while (dict[temp].second == 0)
                temp++;
            if (i < l / 2 || (i == l/2 && l % 2 == 1))
                s[i * 2] = dict[temp].first;
            else
                s[(i - l / 2 - l % 2) * 2 + 1] = dict[temp].first;
            dict[temp].second--;
        }
        return s;
    }
private:
    static bool cmpl(const pair<char, short>& a, const pair<char, short>& b) {
        return a.second > b.second;
    }
};