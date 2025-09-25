class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int l=0, r=nums.size()-1;
        int res = INT_MIN;

        while(l < r){
            int curr = nums[l]+nums[r];
            res = max(res, curr);
            l++;
            r--;
        }

    return res;
    }
};