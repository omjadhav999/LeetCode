class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        int res=INT_MAX, maxi=INT_MIN;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            int r = nums[i]%space;
            mp[r]++;
            if(maxi < mp[r]) maxi = mp[r];
        }

        for(int i=0; i<nums.size(); i++){
            if(maxi == mp[nums[i] % space]) res = min(res, nums[i]);
        }

    return res;
    }
};