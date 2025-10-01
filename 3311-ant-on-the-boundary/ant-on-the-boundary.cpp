class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int res=0, sum=0;
        for(int i=0; i<nums.size(); i++){
            sum = sum+nums[i];
            if(sum == 0) res++;
        }

    return res;
    }
};