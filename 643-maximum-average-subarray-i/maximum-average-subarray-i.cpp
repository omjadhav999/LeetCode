class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0, r=0;
        double sum=0;
        while(r < k){
            sum = sum+nums[r];
            r++;
        }

        double maxi = sum;
        while(r < nums.size()){
            sum = sum+nums[r];
            sum = sum-nums[r-k];
            maxi = max(maxi, sum);
            r++;
        }

    return maxi/k;
    }
};