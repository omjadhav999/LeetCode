class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int> mpp;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] > (int)(nums.size()/2)){
                res = nums[i];
            }
        }
        
    return res;
    }
};