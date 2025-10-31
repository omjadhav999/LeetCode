class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            int val = nums[i];
            mp[val]++;
            if(mp[val] > 1) res.push_back(val);
        }
    
    return res;
    }
};