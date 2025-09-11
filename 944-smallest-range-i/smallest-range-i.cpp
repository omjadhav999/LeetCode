class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini = nums[0], maxi = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i] < mini) mini = nums[i];
            if(nums[i] > maxi) maxi = nums[i];
        }

        int diff = maxi-mini-2*k;
        if(diff < 0) diff = 0;

    return diff;
    }
};