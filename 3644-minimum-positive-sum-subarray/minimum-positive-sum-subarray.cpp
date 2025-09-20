class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini=INT_MAX;
        bool fnd = false;

        for(int k=l; k<=r; k++){
            int sum=0;
            for(int i=0; i<k; i++){
                sum = sum+nums[i];
            }

            if(sum > 0){
                mini = min(mini, sum);
                fnd = true;
            }

            for(int i=k; i<nums.size(); i++){
                sum = sum+nums[i];
                sum = sum-nums[i-k];

                if(sum > 0){
                    mini = min(mini, sum);
                    fnd = true;
                }
            }
        }

    return fnd ? mini : -1;
    }
};