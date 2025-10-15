class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n=nums.size();
        int up=1, prev=0, res=0;
        for(int i=1; i<n; i++){
            if(nums[i] > nums[i-1]) up++;
            else{
                prev = up;
                up = 1;
            }
            int half = up >> 1;
            int m = min(prev, up);
            int c = max(half, m);
            if(c > res) res = c;
        }

    return res;
    }
};