class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a;
        unordered_map<char,int> b;
        int c = 1;
        if(s.length() != t.length()){
            return 0;
        }
        for(auto entry : s){
            a[entry]++;
        }
        for(auto entry: t){
            b[entry]++;
        }
        for(auto entry : s){
            if(a[entry] != b[entry]){
                c = 0;
            }
        }
        return c;
    }
};
