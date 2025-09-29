class Solution {
public:
    bool isGood(vector<int>& nums) {
        vector<int> v(501, 0);
        for(int i=0; i<nums.size(); i++) v[nums[i]]++;
        
        if(v[nums.size()-1] != 2) return false;
        for(int i=1; i<nums.size()-1; i++){
            if(v[i] != 1) return false;
        }

    return true;
    }
};