class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int l = nums.size();
        vector<int> a;
        for(int i=1; i<l+1; i++){
            if(find(nums.begin(), nums.end(), i) == nums.end()){
                a.push_back(i);
            }
        }
        return a;
    }
};