class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size(), inc=1, prev=0, maxi=0;
        for(int i=1; i<n; i++){
            if(nums[i] > nums[i-1]) inc++;
            else{
                prev = inc;
                inc=1;
            }

            maxi = max(maxi, max(inc >> 1, min(prev, inc)));
            if(maxi >= k) return true;
        }

    return false;
    }
};