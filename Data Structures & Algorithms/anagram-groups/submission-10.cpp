class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> a;
        for(auto s : strs){
            string c = s;
            sort(c.begin(), c.end());
            a[c].push_back(s);
        }
        vector<vector<string>> b;
        for(auto& x : a){
            b.push_back(x.second);
        }
        return b;
    }
};
