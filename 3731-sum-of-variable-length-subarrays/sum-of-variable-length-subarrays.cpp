class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int ttlSum = 0;
        for(int i=0; i<nums.size(); i++){
            int s=max(0, i-nums[i]);
            for(int j=s; j<=i; j++) ttlSum = ttlSum+nums[j];
        }

    return ttlSum;
    }
};