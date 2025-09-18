class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        int sum1=0;
        for(int i=0; i<nums.size(); i++){
            sum1 = sum1+nums[i];
        }

        int sum2=0;
        for(int i=nums.size()-1; i>=0; i--){
            if(sum1 >= sum2){
                sum2 = sum2+nums[i];
                sum1 = sum1-nums[i];
                res.push_back(nums[i]);
            }
        }

    return res;
    }
};