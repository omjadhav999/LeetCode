class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res=0, minDiff=INT_MAX;

        for(int i=0; i<nums.size()-2; i++){
            int l=i+1, r=nums.size()-1;
            while(l < r){
                int currSum = nums[i]+nums[l]+nums[r];
                int currDiff = abs(currSum-target);

                if(currDiff<minDiff || (currDiff==minDiff && currSum>res)){
                    minDiff = currDiff;
                    res = currSum;
                }

                if(currSum > target) r--;
                else l++;
            }
        }

    return res;
    }
};