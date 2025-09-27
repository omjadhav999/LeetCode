class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        for(int i=0; i<nums.size(); i++){
            sort(nums[i].begin(), nums[i].end());
        }

        int res = 0;
        for(int i=0; i<nums[0].size(); i++){
            int maxi = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[j][i] > maxi) maxi = nums[j][i];
            }
            res = res+maxi;
        }

    return res;
    }
};