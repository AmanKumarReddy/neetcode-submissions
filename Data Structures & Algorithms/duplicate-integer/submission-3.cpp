class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> dict;
        for(int x:nums){
            dict[x]++;
        }
        int a = 0;
        for(auto entry : dict){
            if(entry.second >1){
                a = 1;
            }
        }
        return a;
    }
};