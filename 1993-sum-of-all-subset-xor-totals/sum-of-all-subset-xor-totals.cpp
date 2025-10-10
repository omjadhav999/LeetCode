class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ttl=0;
        for(int i=0; i<nums.size(); i++){
            ttl = ttl | nums[i];
        }

    return ttl * (1 << (nums.size()-1));
    }
};