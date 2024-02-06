class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> sol;
        
        for (const auto s : strs) {
            map<char, int> tmp;
            string key;
            for (char c : s)
                ++tmp[c];
            for (auto it = tmp.begin(); it != tmp.end(); ++it) {
                key.push_back(it->first);
                key.push_back(char(it->second + 48));
            }
            sol[key].push_back(s);
        }
        for (const auto& line : sol)
            res.push_back(line.second);
    return res;    
    }
};
