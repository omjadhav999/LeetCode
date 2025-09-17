class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long, int> mpp;
        long long sum = 0, res = 0;
        mpp[sum] = 1;

        for(int i=0; i<nums.size(); i++){
            sum = sum+nums[i];
            int rem = sum-k;

            if(mpp.find(rem) != mpp.end()) res = res+mpp[rem];

            mpp[sum]++;
        }

    return res;
    }
};